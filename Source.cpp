#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int a = 0, b = 10;
	cout << "Введите два числа для задания диапазона: ";
	cin >> a >> b;

	int random = rand() % b;
	while (random<a)
		random = rand() % b;
	cout << "Случайное число в заданно диапазоне: " << random << endl;


	return 0;
}
