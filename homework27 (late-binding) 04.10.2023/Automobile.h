#pragma once
#include "Transport.h"

class Automobile : public Transport {
	string tireBrand;
public:
	void Input();
	void Print();


	// Аксессоры
	// Геттеры
	string GetTireBrand() const;


	// Сеттеры
	void SetTireBrand(string);
};

