#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int number, digit = 0;
	

	cout << "Задание 2. Слишком большие числа." << endl << "--------------------------------" << endl << endl;


	

	

		cout << "Введите число: ";
		cin >> number;
		


		while (true) {

			if (number / 10 > 0 || number / 10 < 0) {
				digit++;
				number /= 10;
			}
			else {
				digit++;
				break;
			}
		}

		cout << "Цифр в числе: " << digit << endl;
		
		
		

	

}