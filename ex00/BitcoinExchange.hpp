#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>

class BitcoinExchange
{
	private:
		BitcoinExchange();
		BitcoinExchange&	operator=(const BitcoinExchange& input);
		BitcoinExchange(const BitcoinExchange& input);
	public:
		static void	calculateBitcoin(const std::string& inputLine, std::string& csvLine);
		~BitcoinExchange();
};

#endif