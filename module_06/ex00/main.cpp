
#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Convert("6");
	}
	else
	{
		std::cout << "Error: arguments" << std::endl;
		return (-1);
	}
}