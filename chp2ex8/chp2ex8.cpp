// chp2-8 [1,10) ������ �ִ� ���ڵ��� ���� ����� ���α׷��� �ۼ��غ�����.

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

	// 1~9 ���� ���� 2���� �� ����� �� 
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