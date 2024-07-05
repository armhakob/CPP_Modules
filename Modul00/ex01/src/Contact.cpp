#include "Contact.hpp"

int Contact::set_first_name(std::string first_name)
{
    if (first_name == "")
        return (1);
    for (size_t i = 0; i < first_name.size(); i++)
        if (!isalpha(first_name[i]))
        {
            if (isspace(first_name[i]))
                continue;
            else
                return (1);
        }
    this->_first_name = first_name;
    return (0);
}

int Contact::set_last_name(std::string last_name)
{
    if (last_name == "")
        return (1);
    for (size_t i = 0; i < last_name.size(); i++)
        if (!isalpha(last_name[i]))
        {
            if (isspace(last_name[i]))
                continue;
            else
                return (1);
        }
    this->_last_name = last_name;
    return (0);
}

int Contact::set_nickename(std::string nickename)
{
    if (nickename == "")
        return (1);
    for (size_t i = 0; i < nickename.size(); i++)
        if (!isalpha(nickename[i]))
        {
            if (isspace(nickename[i]))
                continue;
            else
                return (1);
        }
    this->_nickename = nickename;
    return (0);
}

int Contact::set_phone_number(std::string phone_number)
{
    if (phone_number == "")
        return (1);

    for (size_t i = 0; i < phone_number.size(); i++)
        if (!isdigit(phone_number[i]))
            return (1);
    this->_phone_number = phone_number;
    return (0);
}

int Contact::set_darkest_secret(std::string darkest_secret)
{
    if (darkest_secret == "")
        return (1);
    this->_darkest_secret = darkest_secret;
    return (0);
}


std::string Contact::get_first_name()
{
    return (this->_first_name);
}

std::string Contact::get_last_name()
{
    return (this->_last_name);
}

std::string Contact::get_nickename()
{
    return (this->_nickename);
}

std::string Contact::get_phone_number()
{
    return (this->_phone_number);
}

std::string Contact::get_darkest_secret()
{
    return (this->_darkest_secret);
}