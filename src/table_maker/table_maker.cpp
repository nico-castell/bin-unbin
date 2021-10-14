#include "table_maker.hpp"

#include <bitset>
#include <iostream>

void table_maker(const std::vector<int>& input)
{
	std::cout << "Binary  \tHex\tOct\tDec\tChar\n";
	int il = input.size();
	for (int i = 0; i < il; i++)
		std::cout << (std::bitset<8>)input[i] << '\t'  // Print byte
		          << std::hex << input[i] << '\t'      // Print hexadecimal
		          << std::oct << input[i] << '\t'      // Print octal
		          << std::dec << input[i] << '\t'      // Print decimal
		          << (char)input[i] << '\n';           // Print character
}
