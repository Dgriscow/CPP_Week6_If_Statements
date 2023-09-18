#pragma once
class HealthClubM {


public:
	void displayMenu();



private:
	int choice, months;

	void CalcCharges();


	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100;

	double charges = 0;





};