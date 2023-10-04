#include "Tram.h"

void Tram::Input() {
	Transport::Input();

	cout << "Введите систему управления: ";
	cin >> controlSystem;
}
void Tram::Print() {
	cout << "Трамвай: " << endl;

	Transport::Print();

	cout << "Систему управления: " << controlSystem << endl;
}


// Аксессоры
// Геттеры
string Tram::GetControlSystem() const { return controlSystem; }


// Сеттеры
void Tram::SetControlSystem(string c) { controlSystem = c; }
