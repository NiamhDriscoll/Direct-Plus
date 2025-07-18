#include <iostream>
#include <string>

#include <fstream>


int main() {
	std::ifstream file("target.dp");

	char the_great_dreaded_thing = ' ';

	if (!file) {
		std::cerr << "Error opening file." << std::endl;
		return 1;
	}
	std::string source;
	while (std::getline(file, source)) {
		size_t pos = 0;

		std::string token = "";

		while (pos < source.length() && isalnum(source[pos])) {
			token += source[pos];

			pos++;
		}

		std::string args = "";
		std::string args2 = "";
		if (pos < source.length()) {
			char nextChar = source[pos];
			if (!isalnum(nextChar)) {
				pos++;
				
				while (pos < source.length() && (isalnum(source[pos]) || source[pos] == ' ')) {
					args += source[pos];
					pos++;
				}
				pos++;
					while (pos < source.length() && (isalnum(source[pos])) || source[pos] == ' ') {
						args2 += source[pos];
						pos++;

						if (!isalnum(source[pos])) {
							if (token == "paste")
								std::cout << args;
						}
					
                    
				}

			}

		}

	}
}
