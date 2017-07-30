// Header ==> Function Declarations
#pragma once
#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_H


class BMI
{
public:
	//Default Constructor: Sets member variables to their null states
	BMI();

	//Default Deconstructor: once object is done being used, will be destroyed
	~BMI();

	//Overload Constructor
	BMI(string, int, double);

	//Accessor Functions: return member variables
	string getName() const;
		//getName - returns name of patient

	int getHeight() const;
		//getHeight - returns height of patient

	double getWeight() const;
		//getWeight - returns weight of patient

	//Mutator Functions: will allow to edit each member variable one at a time
	void setName(string);
		//setName - sets name of patient

	void setHeight(int);
		//setHeight - sets height of patient

	void setWeight(double);
		//setWeight - sets weight of patient

	double calculateBMI();
		//calculateBMI - calculates BMI of patient

private: //Encapsulation: Privatize to keep data from being accessed or changed

	//Member Variables
	string newName;
	int newHeight;
	double newWeight;
};
#endif
