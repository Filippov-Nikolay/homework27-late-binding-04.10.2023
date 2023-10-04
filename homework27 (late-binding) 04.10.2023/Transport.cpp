#include "Transport.h"

void Transport::Input() {
	char log;

	cout << "Введите бренд: ";
	cin >> brand;

	cout << "Введите модель: ";
	cin >> model;

	cout << "Цвет: ";
	cin >> color;

	cout << "Введите тип топлива: ";
	cin >> fuelType;

	cout << "введите максимальную скорость: ";
	cin >> maxSpeed;

	cout << "Введите макс. кол-во пассажиров: ";
	cin >> numberOfPassengers;

	do {
		cout << "Будет ли возможность аренды? (y - да, n - нет)\n> ";
		cin >> log;

		if (log == 'y')
			rent = true;
		else if (log == 'n')
			rent = false;
		else
			cout << "Вы ввели неверный символ!" << endl << endl;
	} while (log != 'y' && log != 'n');


	cout << "Введите цену: ";
	cin >> price;
}
void Transport::Input(string br, string md, string cl, string ft, float sp, int nop, int pr, bool rnt) {
	brand = br;
	model = md;
	color = cl;
	fuelType = ft;
	maxSpeed = sp;
	numberOfPassengers = nop;
	price = pr;
	rent = rnt;
}

void Transport::Print() {
	cout << "Бренд: " << brand << endl;
	cout << "Модель: " << model << endl;
	cout << "Цвет: " << color << endl;
	cout << "Тип топлива: " << fuelType << endl;
	cout << "Максимальная скорость: " << maxSpeed << endl;
	cout << "Кол-во пассажиров: " << numberOfPassengers << endl;
	cout << "Цена: " << price << endl;
	printf("Возможность аренды: %s\n", rent == true ? "имеется" : "отсутствует");
}


// Аксессоры
// Геттеры
string Transport::GetBrand() const { return brand; }
string Transport::GetModel() const { return model; }
string Transport::GetColor() const { return color; }
string Transport::GetFuelType() const { return fuelType; }

float Transport::GetMaxSpeed() const { return maxSpeed; }
int Transport::GetNumberOfPassengers() const { return numberOfPassengers; }
int Transport::GetPrice() const { return price; }

bool Transport::GetRent() const { return rent; }


// Сеттеры
void Transport::SetBrand(string b) { brand = b; }
void Transport::SetModel(string m) { model = m; }
void Transport::SetColor(string c) { color = c; }
void Transport::SetFuelType(string f) { fuelType = f; }

void Transport::SetMaxSpeed(float m) { maxSpeed = m; }
void Transport::SetNumberOfPassengers(int n) { numberOfPassengers = n; }
void Transport::SetPrice(int p) { price = p; }

void Transport::SetRent(bool r) { rent = r; }
