#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
// �������� ���������� ������� ��� �������� ���� �������
long long sum(int n) {
	if (n > 0)
		return (n + sum(n - 1));
	else return 0;
}
void main() {
	cout << sum(5) << endl;
	system("pause");
}