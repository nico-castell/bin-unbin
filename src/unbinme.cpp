#include <iostream>
#include <vector>

#include <table_maker.hpp>

using std::string;

///@brief Print message to std::cerr. Usage: "return error_out(argv[0])"
///@param arg The char* that is argv[0];
///@return uint8_t The exit code of the program.
uint8_t error_out(char* arg)
{
	std::cerr << "ERROR: Incorrect arguments\n"
	          << "Usage: " << (string)arg << " (-t) XXXXXXXX XXXXXXXX...\n";
	return 1;
}

int main(int argc, char* argv[])
{
	if (argc == 1)
		return error_out(argv[0]);

	// Declare a valid number of arguments, which changes with the "-t" flag
	uint8_t valid_argc = 2;
	bool flagged = ((string)argv[1] == "-t");
	if (flagged)
		valid_argc = 3;

	// Validate arguments
	if (argc <= valid_argc)
		return error_out(argv[0]);

	// input vector
	std::vector<int> input;
	int il = argc - valid_argc + 1;
	input.resize(il);

	for (int i = 0; i < il; i++)
		input[i] = std::strtol(argv[i + (valid_argc - 1)], NULL, 2);

	// If flagged...
	if (flagged)
	{
		// ...call the table maker and exit...
		table_maker(input);
		return 0;
	}
	// ...else print the string
	for (int i = 0; i < il; i++)
		std::cout << (char)input[i];
	std::cout << '\n';

	return 0;
}
