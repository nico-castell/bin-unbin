#include <bitset>
#include <iostream>
using std::string;

int main(int argc, char* argv[])
{
	// Validate arguments.
	if (argc != 2)
	{
		string name = argv[0];
		std::cerr << "\e[31mERROR: You must input one argument\n"
					 << "\e[33mUsage:\e[00m " + name + " 'Phrase'\n";
		return 1;
	}

	// The input from the user.
	string input = argv[1];
	int il = input.length();

	// Print the table.
	for (int i = 0; i < il; i++)
		std::cout << (std::bitset<8>)input[i] << ' ';
	std::cout << '\n';

	return 0;
}
