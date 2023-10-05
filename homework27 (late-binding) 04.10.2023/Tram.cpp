#include "Tram.h"

void Tram::Input() {
	Transport::Input();

	cout << "������� ������� ����������: ";
	cin >> controlSystem;
}
void Tram::Print() {
	cout << "�������: " << endl;

	// Transport::Print();

	cout << "�����: " << brand << endl;
	cout << "������: " << model << endl;
	cout << "����: " << color << endl;
	cout << "��� �������: " << fuelType << endl;
	cout << "������������ ��������: " << maxSpeed << endl;
	cout << "���-�� ����������: " << numberOfPassengers << endl;
	cout << "������� ����������: " << controlSystem << endl;
	cout << "����: " << price << endl;
	printf("����������� ������: %s\n", rent == true ? "�������" : "�����������");
}


// ���������
// �������
string Tram::GetControlSystem() const { return controlSystem; }


// �������
void Tram::SetControlSystem(string c) { controlSystem = c; }
