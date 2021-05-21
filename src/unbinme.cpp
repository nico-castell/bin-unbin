#include <iostream>
using std::string;

int main(int argc, char* argv[])
{
	// Validate arguments
	if (argc < 2)
	{
		std::cerr << "\033[01;31mERROR: You must input at least one argument\n"
					 << "\033[00;33mUsage:\033[00m " << (string)argv[0] << " XXXXXXXX XXXXXXXX ...\n";
		return 1;
	}

	/**
	 * Convert char* "binary" arguments to ASCII characters
	 *   1. Convert char* to long (specify base 2), result is decimal long
	 *   2. Cast decimal long to char
	 *   3. Print the character
	 */
	for (int i = 1; i < argc; i++)
		std::cout << (char)strtol(argv[i], NULL, 2);
	std::cout << '\n';

	return 0;
}
