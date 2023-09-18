#include <iostream>
#include <iomanip>
using namespace std;



int main() {

	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100;
	
	int choice, months;
	double charges = 0;
	

	
	do {
		cout << "1: standard adult membership\n2:child membership\n3:senior membership\n4:Quit program\nEnter Your Choice: ";
		cin >> choice;

		//output formatting 
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

	} while (choice != 4);



	return 1;









}