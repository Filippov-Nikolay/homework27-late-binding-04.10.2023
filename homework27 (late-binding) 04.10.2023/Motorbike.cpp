#include "Motorbike.h"

void Motorbike::Input() {
	Transport::Input();
}
void Motorbike::Print() {
	cout << "��������: " << endl;

	// Transport::Print();

	cout << "�����: " << brand << endl;
	cout << "������: " << model << endl;
	cout << "����: " << color << endl;
	cout << "��� �������: " << fuelType << endl;
	cout << "������������ ��������: " << maxSpeed << endl;
	cout << "���-�� ����������: " << numberOfPassengers << endl;
	cout << "����: " << price << endl;
	printf("����������� ������: %s\n", rent == true ? "�������" : "�����������");
}
