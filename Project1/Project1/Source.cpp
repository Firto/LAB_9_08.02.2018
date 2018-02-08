#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
// Написати рекурсивну функцію для обчислення , де – дробове число, – ціле число
double mst(double num, int n) {
	if (n > 1) return mst(num, n - 1)*num;
	else return num;
}
void main() {
	cout << mst(5.4, 3);
	cout << endl;
	system("pause");
}