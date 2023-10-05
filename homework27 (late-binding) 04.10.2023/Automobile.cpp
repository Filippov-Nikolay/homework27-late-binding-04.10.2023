#include "Automobile.h"
#include "Transport.h"

void Automobile::Input() {
	Transport::Input();

	cout << "Введите марку шин: ";
	cin >> tireBrand;
}
void Automobile::Print() {
	cout << "Автомобиль: " << endl;

	/*
	Transport::Print();

	cout << "Марка шин: " << tireBrand << endl;
	*/

	cout << "Бренд: " << brand << endl;
	cout << "Модель: " << model << endl;
	cout << "Цвет: " << color << endl;
	cout << "Тип топлива: " << fuelType << endl;
	cout << "Максимальная скорость: " << maxSpeed << endl;
	cout << "Кол-во пассажиров: " << numberOfPassengers << endl;
	cout << "Марка шин: " << tireBrand << endl;
	cout << "Цена: " << price << endl;
	printf("Возможность аренды: %s\n", rent == true ? "имеется" : "отсутствует");
}


// Аксессоры
// Геттеры
string Automobile::GetTireBrand() const { return tireBrand; }


// Сеттеры
void Automobile::SetTireBrand(string t) { tireBrand = t; }