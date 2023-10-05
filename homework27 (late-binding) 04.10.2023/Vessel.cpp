#include "Vessel.h"
#include "Transport.h"

void Vessel::Input() {
	Transport::Input();

	cout << "Введите высоту борта: ";
	cin >> boardHeight;

	cout << "Введите кол-во палуб: ";
	cin >> numberOfDecks;
}
void Vessel::Print() {
	cout << "Судно: " << endl;

	/*
	Transport::Print();

	cout << "Высота борта: " << boardHeight << endl;
	cout << "Кол-во палуб: " << numberOfDecks << endl;
	*/

	cout << "Бренд: " << brand << endl;
	cout << "Модель: " << model << endl;
	cout << "Цвет: " << color << endl;
	cout << "Тип топлива: " << fuelType << endl;
	cout << "Максимальная скорость: " << maxSpeed << endl;
	cout << "Кол-во пассажиров: " << numberOfPassengers << endl;
	cout << "Высота борта: " << boardHeight << endl;
	cout << "Кол-во палуб: " << numberOfDecks << endl;
	cout << "Цена: " << price << endl;
	printf("Возможность аренды: %s\n", rent == true ? "имеется" : "отсутствует");
}


// Аксессоры
// Геттеры
float Vessel::GetBoardHeight() const { return boardHeight; }
int Vessel::GetNumberOfDecks() const { return numberOfDecks; }


// Сеттеры
void Vessel::SetBoardHeight(float b) { boardHeight = b; }
void Vessel::SetNumberOfDecks(int n) { numberOfDecks = n; }
