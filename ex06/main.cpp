#include "Harl.hpp"

int	get_input(std::string input)
{
	if (input.compare("DEBUG") == 0)
		return 1;
	if (input.compare("INFO") == 0)
		return 2;
	if (input.compare("WARNING") == 0)
		return 3;
	if (input.compare("ERROR") == 0)
		return 4;
	return 0;
}

int	main(int argc, const char **argv)
{
	Harl	harl;
	int		input;

	if (argc != 2)
	{
		std::cerr << "Error" << std::endl << "Invalid number of arguments" << std::endl;
		return 1;
	}
	input = get_input(argv[1]);
	switch (input)
	{
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			std::cout << std::endl;
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			std::cout << std::endl;
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
