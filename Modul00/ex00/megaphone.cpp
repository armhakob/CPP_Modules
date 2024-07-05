#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
    }
    else
    {
        for(int i = 1; argv[i]; i++)
        {
            if (i > 1)
                std::cout<< ' ';
            for (int j = 0; argv[i][j] != '\0'; j++)
            {
                std::cout<< (char) toupper(argv[i][j]);
            }
        }
    }
    std::cout << std::endl;
    return (EXIT_SUCCESS);
}
