#include <bitset>
#include <iostream>
#include <vector>

#include <table_maker.hpp>

using std::string;

int main(int argc, char* argv[])
{
	// Declare a valid number of arguments, which changes with the "-t" flag
	int valid_argc = 2;
	bool flagged = ((string)argv[1] == "-t");
	if (flagged)
		valid_argc = 3;

	// Validate arguments
	if (argc != valid_argc)
	{
		std::cerr << "ERROR: Incorrect arguments\n"
					 << "Usage: " << (string)argv[0] << " (-t) 'Phrase'\n";
		return 1;
	}

	// Input string
	string input = argv[1];
	if (flagged)
		input = argv[2];
	int il = input.length();

	// If flagged...
	if (flagged)
	{
		// ...create an int vector and call table_maker, then exit
		std::vector<int> _input;
		_input.resize(il);
		for (int i = 0; i < il; i++)
			_input[i] = input[i];

		table_maker(_input);
		return 0;
	}
	// ...else print the bitsets
	for (int i = 0; i < il; i++)
		std::cout << (std::bitset<8>)input[i] << ' ';
	std::cout << std::endl;

	return 0;
}
