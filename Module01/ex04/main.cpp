#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <search> <replace>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "String to be replaced (s1) cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream readfile(filename);
    if (!readfile.is_open())
    {
        std::cerr << "Error opening file: " << filename << std::endl;
        return 1;
    }

    std::string outfile = filename.substr(0, filename.find_last_of('.')) + ".replace";

    std::ofstream newfile(outfile);
    if (!newfile.is_open())
    {
        std::cerr << "Error creating file: " << outfile << std::endl;
        return 1;
    }

    std::string text;
    while (getline(readfile, text))
    {
        size_t pos = 0;
        while ((pos = text.find(s1, pos)) != std::string::npos)
        {
            text.erase(pos, s1.length());
            text.insert(pos, s2);
            pos += s2.length();
        }
        newfile << text << std::endl;
    }

    readfile.close();
    newfile.close();

    std::cout << "File created: " << outfile << std::endl;
    return 0;
}
