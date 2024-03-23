// chp2-5 * 문자로 정사각형, 직사각형, 삼각형의 형태를 출력하기
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int square = 7;

    for (int r = 0; r < square; r++)
        cout << string(square, '*') << endl;

    cout << endl;

    int rectangle_width = 3;
    int rectangle_height = 7;
    for (int r = 0; r < rectangle_height; r++)
        cout << string(rectangle_width, '*') << endl;

    cout << endl;

    int triangle = 5;

    for (int r = 0; r < triangle; r++) {
        int length = r * 2 + 1;
        int spaces = (triangle * 2 - 1 - length) / 2;
        cout << string(spaces, ' ');
        cout << string(length, '*');
        cout << string(spaces, ' ') << endl;
    }

    return 0;
}