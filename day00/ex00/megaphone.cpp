#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					std::cout << (char) toupper(argv[i][j]);
				else
					std::cout << (char) argv[i][j];
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}