#include <exception>
#include <iostream>

class	InputException:	public std::exception
{
	public:
		const char* what(void) const throw() {
			return "Error: This program accepts only one parameter";
		}
};

static void	checkNumberOfParameters(int argc)
{
	try {
		if (argc != 2)
			throw InputException();
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl; 
	}
}

int	main(int argc, char** argv)
{
	checkNumberOfParameters(argc);
	(void)argv;
	return 0;
}