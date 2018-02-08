#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
// Написати рекурсивну функцію для перетворення масиву: поміняти місцями перший елемент з другим, третій з четвертим, і т.д.
void swep(int mass[], int n) {
	n--;
	if (n > 0){
		swep(mass, n - 1);
		swap(mass[n], mass[n - 1]);
    }
}
void main() {
	int mass[10];
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		mass[i] = rand() % 10;
		cout << " " << mass[i];
	}
	cout << endl;
	swep(mass, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << " " << mass[i];
	}
	cout << endl;
	system("pause");
}