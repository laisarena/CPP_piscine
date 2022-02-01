#include <exception>
#include <iostream>
#include <string>
#include <cctype>

#define CHAR	0
#define INT		1
#define FLOAT	2
#define DOUBLE	3

class	InputException:	public std::exception
{
	public:
		const char* what(void) const throw() {
			return "Error: This program accepts only one parameter";
		}
};

static void	checkNumberOfParameters(int argc)
{
	if (argc != 2)
		throw InputException();
}


static bool	isChar(std::string input)
{
	if (input.size() != 1)
		return false;

	char c = *input.c_str();

	if (!isgraph(c))
		return false;
	if (isdigit(c))
		return false;
	return true;
}

static int	parseParameter(char* input)
{
	if (isChar(input))
		return CHAR;
	throw std::exception();
}

int	main(int argc, char** argv)
{
	try {
		checkNumberOfParameters(argc);
		int type = parseParameter(argv[1]);
		type++;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl; 
		return -1;
	}
	return 0;
}