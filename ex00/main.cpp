#include "ReadFile.hpp"
#include "BitcoinExchange.hpp"


int main(int argc, char *argv[])
{
	try
	{
		if (argc != 2)
			throw std::runtime_error("Error: could not open file.");
		std::vector<std::string> inputFileData = ReadFile::readInputFile(argv[1]);
		std::vector<std::vector<std::string> > csvFileData = ReadFile::readCsvFile();
		for (std::vector<std::string>::iterator it = inputFileData.begin(); it != inputFileData.end(); ++it)
		{
			if (ReadFile::readValid(*it))
				continue;
			// BitcoinExchange
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
	return (0);
}
