#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
//  кількості цифр натурального числа
int mst(int num) {
	if (num > 0) return mst(num-1)+1;
	else return 0;
}
void main() {
	cout << mst(6);
	cout << endl;
	system("pause");
}