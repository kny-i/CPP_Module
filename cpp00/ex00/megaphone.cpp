#include <iostream>
#include <cstddef>

int	main(int argc, char **argv)
{
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i] != NULL; i++)
		{
			for (int j = 0; argv[i][j] != '\0'; j++)
				argv[i][j] = (char) toupper(argv[i][j]);
			std::cout << argv[i];
			if (argv[i] != NULL)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}