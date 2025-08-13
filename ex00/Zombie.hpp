#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
public:
	Zombie(std::string name);
	~Zombie(void);
	std::string	getName(void) const;
	void		announce(void) const;
private:
	std::string	_name;
};

#endif