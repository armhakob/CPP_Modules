#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>
#include <stdexcept>
#include <ios>

class BitcoinExchange
{
private:
	static std::map<std::string, float> data_map;
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange& operator=(const BitcoinExchange &other);
	~BitcoinExchange();

public:
	static void datainit(std::string data);
	static bool isvalidDate(std::string data);
	static bool isvalidVal(std::string value);
	static void exchangePrint(std::string input);
	static void ratePrint(std::string data, float value);

	typedef std::map<std::string, float>::iterator map_it;

};



#endif