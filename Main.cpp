#include <iostream>
#include <string>

#include "BMI.h"

using namespace std;

void main()
{
	string name;
	int height;
	double weight;

	cout << "Please enter your name: ";
	cin >> name;
	cout << "Please enter your height (inches): ";
	cin >> height;
	cout << "Please enter your weight (lbs): ";
	cin >> weight;

	BMI Patient_1(name, height, weight); //object "Patient_1; using OVERLOADED constructor to pass in variables as parameters

	cout << endl << "Patient Name: " << Patient_1.getName() << endl <<
		 "Patient Height: " << Patient_1.getHeight() << endl <<
		 "Patient Weight: " << Patient_1.getWeight() << endl;

	BMI Patient_2; //using DEFAULT constructor

	cout << endl << "Please enter your name: ";
	cin >> name;
	cout << "Please enter your height (inches): ";
	cin >> height;
	cout << "Please enter your weight (lbs): ";
	cin >> weight;

	Patient_2.setName(name);
	Patient_2.setHeight(height);
	Patient_2.setWeight(weight);

	cout << endl << "Patient Name: " << Patient_2.getName() << endl <<
		"Patient Height: " << Patient_2.getHeight() << endl <<
		"Patient Weight: " << Patient_2.getWeight() << endl <<
		"BMI: " << Patient_2.calculateBMI() << endl;

	system("pause");
}

/*
Please enter your name: Bill
Please enter your height (inches): 70
Please enter your weight (lbs): 150

Patient Name: Bill
Patient Height: 70
Patient Weight: 150

Please enter your name: Rob
Please enter your height (inches): 72
Please enter your weight (lbs): 135

Patient Name: Rob
Patient Height: 72
Patient Weight: 135
BMI: 18.3073
Press any key to continue . . .
*/
