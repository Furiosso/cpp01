#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde = zombieHorde(3, "Pepe");

	if (!horde)
		return 1;
	for (int i = 0; i < 3; i++)
	{
		std::cout << i + 1 << ": ";
		horde[i].announce();
	}
	delete []horde;
}