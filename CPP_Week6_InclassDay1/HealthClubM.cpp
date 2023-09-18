#include "HealthClubM.h"
#include <iostream>
#include <iomanip>
using namespace std;
void HealthClubM::displayMenu()
{

	do {


		cout << "1: standard adult membership\n2:child membership\n3:senior membership\n4:Quit program\nEnter Your Choice: ";


		//output formatting 
		if (choice == 4) {
			cout << "exiting program";
		}else {
			cout << "invalid response";
		}

		

	} while (choice != 4);



}

void HealthClubM::CalcCharges()
{

	cin >> choice;

	cout << fixed << showpoint << setprecision(2);


	if (choice == 1) {
		cout << "months?" << endl;
		cin >> months;
		charges = months * ADULT_RATE;
		cout << "total Cost is: $" << charges << "\n\n";

	}
	else if (choice == 2) {
		cout << "months?" << endl;
		cin >> months;
		charges = months * CHILD_RATE;
		cout << "total Cost is: $" << charges << "\n\n";

	}
	else if (choice == 3) {
		cout << "months?" << endl;
		cin >> months;
		charges = months * SENIOR_RATE;
		cout << "total Cost is: $" << charges << "\n\n";


	}
	else if (choice == 4) {
		cout << "exiting program";

	}
	else
	{
		cout << "invalid response";

	}



}
