#include <string>
#include <fstream>
#include <iostream>

int main() {
	size_t pos = 0;

	std::string token = "";

	while (pos < source.length() && isalnum(source[pos])) {
		token += source[pos];

		pos++;
	}

	std::string args = "";
	if (pos < source.length()) {
		char nextChar = source[pos];
	}
	if (!isalnum(nextChar)) {
		pos++;
		pos++;
		while (pos < source.length() && isalnum(source[pos])) {
			args += source[pos];

			pos++;
		}
		if (pos < source.length()) {
			char nextChar2 = source[pos];
		}
		if (!isalnum(nextChar2))
			if (token == "paste")
				std::cout << args;
	}
}
// messy nonworking code fix later