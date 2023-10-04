#include "Airplane.h"
#include "Transport.h"

void Airplane::Input() {
	Transport::Input();

	cout << "������� ������ �������: ";
	cin >> wingspan;

	cout << "������� ��������� �����: ";
	cin >> rangeOfFlight;
}
void Airplane::Print() {
	cout << "������: " << endl;

	Transport::Print();

	cout << "������ �������: " << wingspan << endl;
	cout << "��������� �����: " << rangeOfFlight << endl;
}


// ���������
// �������
float Airplane::GetWingspan() const { return wingspan; }
float Airplane::GetRangeOfFlight() const { return rangeOfFlight; }


// �������
void Airplane::SetWingspan(float w) { wingspan = w; }
void Airplane::SetRangeOfFlight(float r) { rangeOfFlight = r; }
