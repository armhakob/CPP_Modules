#include "PhoneBook.hpp"

int main()
{
    Phonebook phoneBook;
    std::string command;

    while (1) {
        std::cout << "|---------               📞📔                   --------|" << std::endl;
        std::cout << "|                        ➕:ADD                          |" << std::endl;
        std::cout << "|                        🔎:SEARCH                       |" << std::endl;
        std::cout << "|                        ⬅️:EXIT                         |" << std::endl;
        std::cout << "|-------------------------------------------------------|" << std::endl;
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            phoneBook.add_contact();
        } else if (command == "SEARCH") {
            phoneBook.search_contact();
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command." << std::endl;
        }
    }

    return 0;
}