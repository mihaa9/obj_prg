#include <iostream>
#include <string>
#include <cctype>
int main() {
	std::string s;
	std::getline(std::cin, s);

	for (char &ch : s) {
		unsigned char uch = static_cast<unsigned char>(ch);

		if (std::isalpha(uch))
			ch = static_cast<char>(std::toupper(uch));
		else if (std::isdigit(uch))
			ch = '*';
		else if (ch == ' ' || ch == '\t')
			ch = '_';
	}

	std::cout << s << '\n';
	return 0;
}