#include <string>
#include <iostream>
#include <fstream>

bool	open_files(std::ifstream& infile, std::ofstream& outfile, std::string filename)
{
	infile.open(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error" << std::endl << "File not found" << std::endl;
		return false;
	}
	outfile.open(filename.append(".replace").c_str());
	if (!outfile.is_open())
	{
		infile.close();
		std::cerr << "Error" << std::endl << "Could not create output file" << std::endl;
		return false;
	}
	return true;
}

int	replace_strings(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;
	std::string		line_replaced;
	size_t			pos;

	if (!open_files(infile, outfile, filename))
		return 2;
	while (std::getline(infile, line))
	{
		while ((pos = line.find(s1)) != std::string::npos)
		{
			line_replaced = line.substr(0, pos);
			line = line.substr(pos).substr(s1.length());
			outfile << line_replaced << s2;
		}	
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error" << std::endl << "Invalid number of arguments" << std::endl;
		return 1;
	}
	return replace_strings(argv[1], argv[2], argv[3]);	
}
