#pragma once
#include "Transport.h"

class Vessel : public Transport {
	float boardHeight;
	int numberOfDecks;
public:
	void Input();
	void Print();


	// Аксессоры
	// Геттеры
	float GetBoardHeight() const;
	int GetNumberOfDecks() const;


	// Сеттеры
	void SetBoardHeight(float);
	void SetNumberOfDecks(int);
};

