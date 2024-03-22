#include <iostream>

int main() {

	int i = 1;

	while (i < 10) {
		
		for (int j = 1; j < 10; j++) {
			std::cout << i * j << std::endl;
		}
		i += 1;
		std::cout << "" << std::endl;
	}
	return 0;
}