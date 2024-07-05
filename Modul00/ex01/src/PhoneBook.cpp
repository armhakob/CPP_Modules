#include "PhoneBook.hpp"


Phonebook::Phonebook()
{
    this->_index = 0;
    std::cout << "PhoneBook constructor called!" << std::endl;
}

Phonebook::~Phonebook()
{
    std::cout << "PhoneBook destructor called!" << std::endl;
}

void Phonebook::add_contact()
{
    int flag = 0;
    std::string first_name = "";
    std::string last_name = "";
    std::string nickename = "";
    std::string darkest_secret = "";
    std::string phone_number = "";

    while (std::cin.good() && (first_name.empty() || flag == 1))
    {
        flag = 0;
        std::cout << "First name: ";
        getline(std::cin, first_name);
        if (first_name.empty())
            std::cout << "INVALID INPUT: please enter non empty name!" << std::endl;
        if (_contacts[_index % 8].set_first_name(first_name) == 1)
        {
            std::cout << "INVALID INPUT: please enter a valid name!" << std::endl;
            flag = 1;
        }
    }

    while (std::cin.good() && (last_name.empty() || flag == 1))
    {
        flag = 0;
        std::cout << "Last name: " ;
        getline(std::cin, last_name);
        if (last_name.empty())
            std::cout << "INVALID INPUT: please enter non empty name!" << std::endl;
        if (_contacts[_index % 8].set_last_name(last_name) == 1)
        {
            std::cout << "INVALID INPUT: please enter a valid name!" << std::endl;
            flag = 1;
        }
    }

    while (std::cin.good() && (nickename.empty() || flag == 1))
    {
        flag  = 0;
        std::cout << "Nickname: ";
        getline(std::cin, nickename);
        if (nickename.empty())
            std::cout << "INVALID INPUT: please enter non empty name!" << std::endl;
        if(_contacts[_index % 8].set_nickename(nickename) == 1)
        {
            std::cout << "INVALID INPUT: please enter a valid name!" << std::endl;
            flag = 1;
        }
    }
    
    while (std::cin.good() && (phone_number.empty() || flag == 1))
    {
        flag = 0;
        std::cout << "Phone number: ";
        getline(std::cin, phone_number);
        if (phone_number.empty())
            std::cout << "INVALID INPUT: please enter non empty number!" << std::endl;
        if(_contacts[_index % 8].set_phone_number(phone_number) == 1)
        {
            std::cout << "INVALID INPUT: please enter a valid number!" << std::endl;
            flag = 1;
        }
    }

    while (std::cin.good() && (darkest_secret.empty() || flag == 1))
    {
        flag = 0;
        std::cout << "Darkest secret: ";
        getline(std::cin, darkest_secret);
        if (darkest_secret.empty())
            std::cout << "INVALID INPUT: please enter non empty string!" << std::endl;
        _contacts[_index % 8].set_darkest_secret(darkest_secret);
    }

    this->_index++;
    std::cout << "The contact has been added successfully<3" << std::endl;
    std::cin.clear();
}

void    Phonebook::search_contact()
{
    int index_search = 0;
    std::string s;
    ft_display_contact();
    std::cout << "Enter the contact index: " << std::endl;
    std::cout << "> ";
    std::cin >> s;
    index_search = atoi(s.c_str());
    if (std::cin.fail() || (index_search < 0) || (index_search > 7) || s.length() > 1)
        std::cout << "Invalid input!" << std::endl;
    else
    {
        std::cout << "First name: " << _contacts[index_search].get_first_name() << std::endl;
        std::cout << "Last name: " << _contacts[index_search].get_last_name() << std::endl;
        std::cout << "nickename: " << _contacts[index_search].get_nickename() << std::endl;
        std::cout << "Phone number: " << _contacts[index_search].get_phone_number() << std::endl;
        std::cout << "Darkest secret: " << _contacts[index_search].get_darkest_secret() << std::endl;
    }
    std::cin.clear();
    std::cin.ignore(1000, '\n');
}

void    Phonebook::ft_display_contact()
{
    std::cout   << "|-----------------Contacts------------------|\n"
                << "|-------------------------------------------|\n"
	            << "|     Index|First Name| Last Name|  Nickname|\n"
	            << "|-------------------------------------------|\n";

    for (int i = 0; i < 8; i++)
    {
        std::cout << '|' << std::setw(10) << i;
        std::cout << '|' << std::setw(10) << _contacts[i].get_first_name();
        std::cout << '|' << std::setw(10) << _contacts[i].get_last_name();
        std::cout << '|' << std::setw(10) << _contacts[i].get_nickename();
        std::cout << '|' << std::endl;
    }
}
