#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
// Написати рекурсивну функцію, яка отримує масив і знаходить кількість парних елементів
long long nst(int mass[], int n) {
	if (mass[n - 1] % 2 == 0 && n > 0 && mass[n - 1] != 0) return (1 + nst(mass, n - 1));
	else if (mass[n - 1] % 2 > 0 && n > 0) return (0 + nst(mass, n - 1));
	else return 0;
}
void swep(int mass[], int n) {
	n--;
	if (n > 0) {
		swep(mass, n - 1);
		swap(mass[n], mass[n - 1]);
	}
}
double step(double num, int n)
{
	if (n == 0)
		return 1;
	else if (n < 0)
		return 1 / step(num, -n);
	else
		return num * step(num, n - 1);
}
void Shistnad(long long n) {
	if (n > 0) { Shistnad(n / 16); 
	if (n % 16 > 9) cout << char(n % 16+'A'-10);
	else cout << n % 16;
	}
}
long long sum_nums(long long n) {
	if (n > 0) { return n % 10 + sum_nums(n / 10); }
	else return 0;
}
long long num_nums(long long n) {
	if (n > 0) { return 1+num_nums(n / 10); }
	else return 0;
}
void main() {
	// 1.
	
	/*cout << step(2, -2) << endl;*/

	// 2.

		//a)
		/*cout << sum_nums(23) << endl;*/
		
		//b)
		/*cout << num_nums(233) << endl;*/

	//3.



	// 4.

	/*Shistnad(126);
	cout << endl;*/

	// 5.

	/*int mass[10];
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		mass[i] = rand() % 10;
		cout << " " << mass[i];
	}
	cout << endl;
	cout << nst(mass, 10);
	cout << endl;*/

	// 6.

	/*int mass[10];
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
	cout << endl;*/

	// 7.


	system("pause");
}