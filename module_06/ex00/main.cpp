#include <exception>
#include <iostream>
#include <string>
#include <cctype>

#define CHAR	0
#define INT		1
#define DOUBLE	2
#define FLOAT	3

class	InputException:	public std::exception
{
	public:
		const char* what(void) const throw() {
			return "Error: This program accepts only one parameter";
		}
};

class	TypeException:	public std::exception
{
	public:
		const char* what(void) const throw() {
			return "Error: The input is not a scalar type";
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

static bool	isInt(const char* input)
{
	int 		integer;
	std::string string;

	integer = atoi(input);
	string = std::to_string(integer);
	if (input == string)
		return true;
	return false;
}

static bool	isDouble(std::string input)
{
	int pos = input.find('.');
	std::string inteira = input.substr(0, pos);
	std::string decimal = input.substr(pos + 1, input.size());

	if (!isdigit(*decimal.c_str()))
		return false;
	if (isInt(inteira.c_str()) && isInt(decimal.c_str()))
		return true;
	return false;
}

static bool	isFloat(std::string input)
{
	if (input[input.size() - 1] != 'f')
		return false;
	return(isDouble(input.substr(0, input.size() - 1)));
}

static int	parseParameter(char* input)
{
	if (isChar(input))
		return CHAR;
	else if (isInt(input))
		return INT;
	else if (isDouble(input))
		return DOUBLE;
	else if (isFloat(input))
		return FLOAT;
	throw TypeException();
}

int	main(int argc, char** argv)
{
	try {
		checkNumberOfParameters(argc);
		int type = parseParameter(argv[1]);
		std::cout << type << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl; 
		return -1;
	}
	return 0;
}