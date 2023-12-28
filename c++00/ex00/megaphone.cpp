#include <iostream>
#include <string>

void	ShoutInput(std::string &input)
{
	for (int i = 0; input[i] != '\0'; i++)
		input[i] = toupper(input[i]);
	std::cout << input << std::endl;
}

int32_t	main(int argc, char** argv)
{
	std::string input;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	input = argv[1];
	for (int i = 2; argv[i] != NULL; i++)
	{
		input.append(" ");
		input.append(argv[i]);
	}
	ShoutInput(input);
}
