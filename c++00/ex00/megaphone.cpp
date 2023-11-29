#include <iostream>

void	PrintCapsString(std::string input)
{
	std::string UpperCased;

	for (int i = 0; input[i] != '\0'; i++)
		UpperCased[i] = toupper(input[i]);
	std::cout << UpperCased << "\n";
}

int32_t	main(int argc, char** argv)
{
	std::string input;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; argv[i] != NULL; i++)
		input.append(argv[i]);
	PrintCapsString(input);
}
