#include "Transport.h"

void Transport::Input() {
	char log;

	cout << "������� �����: ";
	cin >> brand;

	cout << "������� ������: ";
	cin >> model;

	cout << "����: ";
	cin >> color;

	cout << "������� ��� �������: ";
	cin >> fuelType;

	cout << "������� ������������ ��������: ";
	cin >> maxSpeed;

	cout << "������� ����. ���-�� ����������: ";
	cin >> numberOfPassengers;

	do {
		cout << "����� �� ����������� ������? (y - ��, n - ���)\n> ";
		cin >> log;

		if (log == 'y')
			rent = true;
		else if (log == 'n')
			rent = false;
		else
			cout << "�� ����� �������� ������!" << endl << endl;
	} while (log != 'y' && log != 'n');


	cout << "������� ����: ";
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
	cout << "�����: " << brand << endl;
	cout << "������: " << model << endl;
	cout << "����: " << color << endl;
	cout << "��� �������: " << fuelType << endl;
	cout << "������������ ��������: " << maxSpeed << endl;
	cout << "���-�� ����������: " << numberOfPassengers << endl;
	cout << "����: " << price << endl;
	printf("����������� ������: %s\n", rent == true ? "�������" : "�����������");
}


// ���������
// �������
string Transport::GetBrand() const { return brand; }
string Transport::GetModel() const { return model; }
string Transport::GetColor() const { return color; }
string Transport::GetFuelType() const { return fuelType; }

float Transport::GetMaxSpeed() const { return maxSpeed; }
int Transport::GetNumberOfPassengers() const { return numberOfPassengers; }
int Transport::GetPrice() const { return price; }

bool Transport::GetRent() const { return rent; }


// �������
void Transport::SetBrand(string b) { brand = b; }
void Transport::SetModel(string m) { model = m; }
void Transport::SetColor(string c) { color = c; }
void Transport::SetFuelType(string f) { fuelType = f; }

void Transport::SetMaxSpeed(float m) { maxSpeed = m; }
void Transport::SetNumberOfPassengers(int n) { numberOfPassengers = n; }
void Transport::SetPrice(int p) { price = p; }

void Transport::SetRent(bool r) { rent = r; }
