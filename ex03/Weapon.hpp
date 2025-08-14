#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
	public:
		Weapon(std::string type);
		Weapon();
		~Weapon(void);
		const std::string	&getType(void) const;
		void		setType(std::string type);
	private:
		std::string	_type;
};

#endif