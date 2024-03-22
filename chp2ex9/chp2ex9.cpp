#include <iostream>


int main() {
	using std::cin;  
	using std::cout;
	using std::endl;
	int i;
	int j;
	cout << "두개의 숫자를 입력하시오";
	cin >> j;
	cin >> i;

	if (i > j)
		cout << i;
	else
		cout << j;
}