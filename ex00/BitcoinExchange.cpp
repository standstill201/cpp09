#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange()
{
	std::cout << "this will never called" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& input)
{
	std::cout << "this will never called" << std::endl;
	return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& input)
{
	std::cout << "this will never called" << std::endl;
}

void	BitcoinExchange::calculateBitcoin(const std::string& inputLine, std::string& csvLine)
{

}


// for (std::vector<std::vector<std::string> >::iterator it = data.begin(); it != data.end(); ++it)
// {
// 	std::cout << (*it)[0] << " ";
// 	std::cout << (*it)[1] << std::endl;
// }
