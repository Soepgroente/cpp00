#include <iostream>
#include <string>

using namespace std;

void	ShoutInput(string &input)
{
	for (int i = 0; input[i] != '\0'; i++)
		input[i] = toupper(input[i]);
	cout << input << endl;
}

int32_t	main(int argc, char** argv)
{
	string input;

	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
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
