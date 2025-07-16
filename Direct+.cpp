#include <iostream>
#include <string>
#include <fstream>

int main() {
	std::cout << "Samuel hi" << std::endl;
	std::ifstream file("target.dp");
	struct Token 
		Token readword() {
		std::string word()



	}
	if (!file) {
		std::cerr << "Error opening file." << std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(file, line)) {
	std::cout << line << std::endl;
	
	}
	return 0;
	
}


