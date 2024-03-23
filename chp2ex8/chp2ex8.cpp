// chp2-8 [1,10) 범위에 있는 숫자들의 곱을 만드는 프로그램을 작성해보세요.

#include <iostream>

int main() {
	using std::cout;
	using std::endl;

	// 1 * 2 * .... * 8 * 9
	int x = 1;
	for (int i = 1; i < 10; i++) {
		x = x * i;
	}

	cout << x;

	cout << endl;
	cout << endl;
	cout << endl;

	// 1~9 범위 숫자 2개의 곱 경우의 수 
	int i = 0;


	while (i < 9) {
		i += 1;
		for (int j = 1; j < 10; j++) {

			cout << i * j << endl;

		}
		cout << endl;
	}




	return 0;
}