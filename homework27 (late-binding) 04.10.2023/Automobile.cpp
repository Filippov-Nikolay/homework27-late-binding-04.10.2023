#include "Automobile.h"
#include "Transport.h"

void Automobile::Input() {
	Transport::Input();

	cout << "������� ����� ���: ";
	cin >> tireBrand;
}
void Automobile::Print() {
	cout << "����������: " << endl;

	/*
	Transport::Print();

	cout << "����� ���: " << tireBrand << endl;
	*/

	cout << "�����: " << brand << endl;
	cout << "������: " << model << endl;
	cout << "����: " << color << endl;
	cout << "��� �������: " << fuelType << endl;
	cout << "������������ ��������: " << maxSpeed << endl;
	cout << "���-�� ����������: " << numberOfPassengers << endl;
	cout << "����� ���: " << tireBrand << endl;
	cout << "����: " << price << endl;
	printf("����������� ������: %s\n", rent == true ? "�������" : "�����������");
}


// ���������
// �������
string Automobile::GetTireBrand() const { return tireBrand; }


// �������
void Automobile::SetTireBrand(string t) { tireBrand = t; }