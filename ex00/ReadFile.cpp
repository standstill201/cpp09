#include "ReadFile.hpp"

ReadFile::ReadFile()
{
	std::cout << "this will never called" << std::endl;
}

ReadFile::~ReadFile()
{
}

ReadFile::ReadFile(const ReadFile& input)
{
	std::cout << "this will never called" << std::endl;
}

ReadFile&	ReadFile::operator=(const ReadFile& input)
{
	std::cout << "this will never called" << std::endl;
	return (*this);
}

std::vector<std::string>	ReadFile::readInputFile(const std::string& input)
{
	std::ifstream				file(input.c_str());
	std::string					line;
	std::vector<std::string>	rawCsv;

	if (!file.is_open())
		throw std::runtime_error("Error: could not open file.");
	while (std::getline(file, line))
	{
		rawCsv.push_back(line);
	}
	file.close();
	return (rawCsv);
}

std::vector<std::vector<std::string> >	ReadFile::readCsvFile()
{
	std::ifstream							file("data.csv");
	std::string								line;
	std::vector<std::vector<std::string> >	data;
	size_t									comma;

	if (!file.is_open())
		throw std::runtime_error("Error: could not open file.");
	while (std::getline(file, line))
	{
		std::vector<std::string>				rawCsv;
		comma = line.find(',');
		rawCsv.push_back(line.substr(0, comma));
		line.erase(0, comma + 1);
		rawCsv.push_back(line);
		data.push_back(rawCsv);
	}
	file.close();
	return (data);
}

bool	ReadFile::readValid(std::string line)
{
	return (false);
}

