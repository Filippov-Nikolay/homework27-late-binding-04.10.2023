#pragma once
#include "Transport.h"

class Tram : public Transport {
	string controlSystem;
public:
	void Input();
	void Print();


	// Аксессоры
	// Геттеры
	string GetControlSystem() const;


	// Сеттеры
	void SetControlSystem(string);
};

