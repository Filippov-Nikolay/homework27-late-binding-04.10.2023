#include "Tram.h"

void Tram::Input() {
	Transport::Input();

	cout << "������� ������� ����������: ";
	cin >> controlSystem;
}
void Tram::Print() {
	cout << "�������: " << endl;

	Transport::Print();

	cout << "������� ����������: " << controlSystem << endl;
}


// ���������
// �������
string Tram::GetControlSystem() const { return controlSystem; }


// �������
void Tram::SetControlSystem(string c) { controlSystem = c; }
