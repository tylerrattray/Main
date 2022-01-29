#include <iostream>
unsigned int n; unsigned int s; unsigned int c = 0; unsigned int l; unsigned int p;

int main() {
	std::cout << "Please enter a starting number: ";std::cin >> n;
	std::cout << "Please enter a ending number: ";std::cin >> s;
	p = n;
	l = (s+1) - n;
	while (l >1) {
		if (n % 2 == 0) {
			n = n / 2;c+= 1;
		}
		else if (n == 1) {
			std::cout << "Number = " << p << " Steps = " << c << std::endl;
			n = p += 1;
			l -= 1;
			c = 1;
		}
		else{
			n = 3 * n + 1;c+= 1;
		}
	}
}
