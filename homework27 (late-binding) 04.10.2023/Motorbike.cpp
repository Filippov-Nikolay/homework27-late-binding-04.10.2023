#include "Motorbike.h"

void Motorbike::Input() {
	Transport::Input();
}
void Motorbike::Print() {
	cout << "Мотоцикл: " << endl;

	Transport::Print();
}
