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

	Transport::Print();

	cout << "Размах крыльев: " << wingspan << endl;
	cout << "Дальность полёта: " << rangeOfFlight << endl;
}


// Аксессоры
// Геттеры
float Airplane::GetWingspan() const { return wingspan; }
float Airplane::GetRangeOfFlight() const { return rangeOfFlight; }


// Сеттеры
void Airplane::SetWingspan(float w) { wingspan = w; }
void Airplane::SetRangeOfFlight(float r) { rangeOfFlight = r; }
