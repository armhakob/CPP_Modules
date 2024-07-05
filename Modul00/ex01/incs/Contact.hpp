#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private:
		std::string _first_name;
		std::string _last_name;
		std::string _phone_number;
		std::string _nickename;
		std::string _darkest_secret;

public:
		int	set_first_name(std::string _first_name);
		int	set_last_name(std::string _last_name);
		int	set_nickename(std::string _nickname);
		int	set_phone_number(std::string _phone_number);
		int	set_darkest_secret(std::string _darkest_secret);

		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_nickename(void);
		std::string get_phone_number(void);
		std::string get_darkest_secret(void);
};

#endif