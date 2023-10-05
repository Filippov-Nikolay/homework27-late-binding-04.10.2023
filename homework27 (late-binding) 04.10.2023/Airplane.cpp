#include "Airplane.h"
#include "Transport.h"

void Airplane::Input() {
	Transport::Input();

	cout << "Введите размах крыльев: ";
	cin >> wingspan;

	cout << "Введите дальность полёта: ";
	cin >> rangeOfFlight;
}
void Airplane::Print() {
	cout << "Самолёт: " << endl;

	/*
	Transport::Print();

	cout << "Размах крыльев: " << wingspan << endl;
	cout << "Дальность полёта: " << rangeOfFlight << endl;
	*/

	cout << "Бренд: " << brand << endl;
	cout << "Модель: " << model << endl;
	cout << "Цвет: " << color << endl;
	cout << "Тип топлива: " << fuelType << endl;
	cout << "Максимальная скорость: " << maxSpeed << endl;
	cout << "Кол-во пассажиров: " << numberOfPassengers << endl;
	cout << "Размах крыльев: " << wingspan << endl;
	cout << "Дальность полёта: " << rangeOfFlight << endl;
	cout << "Цена: " << price << endl;
	printf("Возможность аренды: %s\n", rent == true ? "имеется" : "отсутствует");
}


// Аксессоры
// Геттеры
float Airplane::GetWingspan() const { return wingspan; }
float Airplane::GetRangeOfFlight() const { return rangeOfFlight; }


// Сеттеры
void Airplane::SetWingspan(float w) { wingspan = w; }
void Airplane::SetRangeOfFlight(float r) { rangeOfFlight = r; }
