#include "Automobile.h"
#include "Transport.h"

void Automobile::Input() {
	Transport::Input();

	cout << "������� ����� ���: ";
	cin >> tireBrand;
}
void Automobile::Print() {
	cout << "����������: " << endl;

	Transport::Print();

	cout << "����� ���: " << tireBrand << endl;
}


// ���������
// �������
string Automobile::GetTireBrand() const { return tireBrand; }


// �������
void Automobile::SetTireBrand(string t) { tireBrand = t; }