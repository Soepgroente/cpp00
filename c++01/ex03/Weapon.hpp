#include <iostream>

class Weapon
{
	private:
		std::string	type;
	
	public:
	const std::string&	getType();
	void				setType(std::string new_type);
	Weapon();
	Weapon(std::string name);
	~Weapon();
};