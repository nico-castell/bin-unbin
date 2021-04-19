#include <bitset>
#include <iostream>
using std::string;

int main(int argc, char* argv[])
{
	// Validate arguments.
	if (argc != 2)
	{
		string name = argv[0];
		std::cerr << "\033[31mERROR: You must input one argument\n"
					 << "\033[33mUsage:\033[00m " + name + " 'Phrase'\n";
		return 1;
	}

	// The input from the user.
	string input = argv[1];
	int il = input.length();

	/**
	 * Print the binaries obtained from each char.
	 *   1. Read a character from the string
	 *   2. Cast that character into an 8 bit bitset
	 *   3. Print the bitset
	 */
	for (int i = 0; i < il; i++)
		std::cout << (std::bitset<8>)input[i] << ' ';
	std::cout << '\n';

	return 0;
}
