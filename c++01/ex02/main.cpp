#include <iostream>

int main(void)
{
	std::string		str;
	std::string*	str_PTR;

	str = "HI THIS IS BRAIN";
	str_PTR = &str;
	std::string&	str_REF = str;
	
	std::cout << "Address of str:     " << &str << std::endl;
	std::cout << "Address of str_PTR: " << &str_PTR << std::endl;
	std::cout << "Address of str_REF: " << &str_REF << std::endl << std::endl;

	std::cout << "Value pointed to by str    : " << str << std::endl;
	std::cout << "Value pointed to by str_PTR: " << *str_PTR << std::endl;
	std::cout << "Value pointed to by str_REF: " << str_REF << std::endl;
}