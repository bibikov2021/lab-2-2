#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int a = 0, b = 10;
	cout << "������� ��� ����� ��� ������� ���������: ";
	cin >> a >> b;

	int random = rand() % b;
	while (random<a)
		random = rand() % b;
	cout << "��������� ����� � ������� ���������: " << random << endl;


	return 0;
}