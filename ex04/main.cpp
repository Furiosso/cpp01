#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	std::string	line;
	std::string	line_replace;
	size_t		pos;

	if (argc != 4)
	{
		std::cerr << "Error" << std::endl << "Invalid number of arguments" << std::endl;
		return 1;
	}
	s1 = argv[2];
	s2 = argv[3];
	
	std::ifstream	infile(argv[1]);
	std::string		outfile_name = argv[1];
	outfile_name = outfile_name.append(".replace");
	std::ofstream	outfile(outfile_name.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error" << std::endl << "File not found" << std::endl;
		return 2;
	}
	while (std::getline(infile, line))
	{
		while ((pos = line.find(s1)))
		{
			line_replace = line.substr(0, pos);
			line = line.substr(pos);
			outfile << line_replace << s2;
		}	
	}
	infile.close();
	outfile.close();
}
