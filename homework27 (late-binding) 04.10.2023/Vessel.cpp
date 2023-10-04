#include "Vessel.h"
#include "Transport.h"

void Vessel::Input() {
	Transport::Input();

	cout << "������� ������ �����: ";
	cin >> boardHeight;

	cout << "������� ���-�� �����: ";
	cin >> numberOfDecks;
}
void Vessel::Print() {
	cout << "�����: " << endl;

	Transport::Print();

	cout << "������ �����: " << boardHeight << endl;
	cout << "���-�� �����: " << numberOfDecks << endl;
}


// ���������
// �������
float Vessel::GetBoardHeight() const { return boardHeight; }
int Vessel::GetNumberOfDecks() const { return numberOfDecks; }


// �������
void Vessel::SetBoardHeight(float b) { boardHeight = b; }
void Vessel::SetNumberOfDecks(int n) { numberOfDecks = n; }
