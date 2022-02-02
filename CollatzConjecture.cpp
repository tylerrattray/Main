#include <iostream>
int num; int end; int count; int pnum;

int main() {
	std::cout << "Please enter a starting number: "; std::cin >> num;
	std::cout << "Please enter a ending number: "; std::cin >> end;
	if (num == 1) { num++; count = 0; }
	else { count = 1; }
	for (int i = (end+1)- num; i > 0; i--) {
		pnum = num;
		do {
			if (num % 2 == 0) { num = num / 2; count += 1; }
			else { num = 3 * num + 1; count += 1; }
		} 		while (num > 1);
		std::cout << "Number = " << pnum << " Steps = " << count << "\n";
		num = pnum + 1;
		count = 1;
	}
	return 0;
}
