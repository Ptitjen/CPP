#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon {

	public:

		Weapon(std::string type);
		~Weapon(void);
		const std::string&	getType(void);
		void				setType(std::string newType);
		
	private:
	
		std::string _type;
		
};

#endif