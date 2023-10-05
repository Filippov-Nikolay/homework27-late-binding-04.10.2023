#include "Motorbike.h"

void Motorbike::Input() {
	Transport::Input();
}
void Motorbike::Print() {
	cout << "Мотоцикл: " << endl;

	// Transport::Print();

	cout << "Бренд: " << brand << endl;
	cout << "Модель: " << model << endl;
	cout << "Цвет: " << color << endl;
	cout << "Тип топлива: " << fuelType << endl;
	cout << "Максимальная скорость: " << maxSpeed << endl;
	cout << "Кол-во пассажиров: " << numberOfPassengers << endl;
	cout << "Цена: " << price << endl;
	printf("Возможность аренды: %s\n", rent == true ? "имеется" : "отсутствует");
}
