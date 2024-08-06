#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACT 8
#include "Contact.hpp"

class Phonebook
{
private:
    Contact _contacts[8];
    int    _index;

public:
    Phonebook();
    ~Phonebook();
    void    add_contact();
    void    search_contact();
    void    ft_display_contact();
    std::string	truncated_info(std::string str, unsigned long max);
};

#endif