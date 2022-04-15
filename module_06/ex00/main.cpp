
#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Convert convert(argv[1]);

		convert.converter();
	}
	else
	{
		std::cout << "Error: arguments" << std::endl;
		return (-1);
	}
}