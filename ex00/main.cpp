#include "Zombie.hpp"

int	main(void)
{
	Zombie *pepe = newZombie("Pepe");

	randomChump("Sergio");
	pepe->announce();
	delete(pepe);
}