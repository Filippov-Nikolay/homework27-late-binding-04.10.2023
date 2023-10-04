#include "Automobile.h"
#include "Transport.h"

void Automobile::Input() {
	Transport::Input();

	cout << "Введите марку шин: ";
	cin >> tireBrand;
}
void Automobile::Print() {
	cout << "Автомобиль: " << endl;

	Transport::Print();

	cout << "Марка шин: " << tireBrand << endl;
}


// Аксессоры
// Геттеры
string Automobile::GetTireBrand() const { return tireBrand; }


// Сеттеры
void Automobile::SetTireBrand(string t) { tireBrand = t; }