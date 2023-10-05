#include "Tram.h"

void Tram::Input() {
	Transport::Input();

	cout << "Введите систему управления: ";
	cin >> controlSystem;
}
void Tram::Print() {
	cout << "Трамвай: " << endl;

	// Transport::Print();

	cout << "Бренд: " << brand << endl;
	cout << "Модель: " << model << endl;
	cout << "Цвет: " << color << endl;
	cout << "Тип топлива: " << fuelType << endl;
	cout << "Максимальная скорость: " << maxSpeed << endl;
	cout << "Кол-во пассажиров: " << numberOfPassengers << endl;
	cout << "Систему управления: " << controlSystem << endl;
	cout << "Цена: " << price << endl;
	printf("Возможность аренды: %s\n", rent == true ? "имеется" : "отсутствует");
}


// Аксессоры
// Геттеры
string Tram::GetControlSystem() const { return controlSystem; }


// Сеттеры
void Tram::SetControlSystem(string c) { controlSystem = c; }
