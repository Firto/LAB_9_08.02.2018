#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
// Написати рекурсивну функцію, яка отримує ціле число і переводить його у 16 ву систему числення.
void Shistnad(long long n) {
	if (n > 0) { Shistnad(n / 16); cout << n % 16; }
}
void main() {
	Shistnad(125);
	cout << endl;
	system("pause");
}