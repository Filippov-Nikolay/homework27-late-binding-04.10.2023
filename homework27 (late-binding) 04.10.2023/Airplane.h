#pragma once
#include "Transport.h"

class Airplane : public Transport {
	float wingspan;
	float rangeOfFlight;
public:
	void Input();
	void Print();


	// Аксессоры
	// Геттеры
	float GetWingspan() const;
	float GetRangeOfFlight() const;

	
	// Сеттеры
	void SetWingspan(float);
	void SetRangeOfFlight(float);
};