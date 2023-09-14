#ifndef ReadFile_HPP
#define ReadFile_HPP

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class ReadFile
{
	private:
		ReadFile&	operator=(const ReadFile& input);
		ReadFile(const ReadFile& input);
		ReadFile();
	public:
		~ReadFile();
		static std::vector<std::string>	readInputFile(const std::string& input);
		static std::vector<std::vector<std::string> >	readCsvFile();
		static bool	readValid(std::string line);
};

#endif