/*
* Main.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 23/10/2017
* Description: Main for the lab 5 challenge one exercises
* Copyright notice
*/

#include <iostream>



using namespace std;

void CalculateGravity(float altitude, float& gravity);

int main() {

	float gravity{-9.80665f };
	float speed{ 3.32423f };

	//Declare a pointer to a float and initialise it to nullptr
	float* aPtr{ nullptr }; 
	float* bPtr{ nullptr };

	aPtr = &gravity; //point aPtr at the memory location of gravity
	bPtr = aPtr; //point aPtr at bPtr

	cout << "The value of gravity is: " << gravity << endl;
	cout << "The value of &gravity is: " << &gravity << endl;
	cout << "The size of gravity is: " << sizeof(gravity) << " Bytes" << endl;

	cout << "\nThe value of aPtr is: " << aPtr << endl;
	cout << "The value of &aPtr is: " << &aPtr << endl;
	cout << "The value of *aPtr is: " << *aPtr << endl;
	cout << "The size of aPtr is: " << sizeof(aPtr) << " Bytes" << endl;

	cout << "\nThe value of bPtr is: " << bPtr << endl;
	cout << "The value of &bPtr is: " << &bPtr << endl;
	cout << "The value of *bPtr is: " << *bPtr << endl;

	cout << "\n\nThe value of &bPtr is: " << &bPtr << endl;
	cout << "The value of *bPtr is: " << *bPtr << endl;
	cout << "The value of &*bPtr is: " << &*bPtr << endl;
	cout << "The value of *&bPtr is: " << *&bPtr << endl;
	cout << "The value of bPtr is: " << bPtr << endl;
	cout << "The size of bPtr is: " << sizeof(bPtr) << " Bytes" << endl;

	float altitude{ 6783.0f };
	CalculateGravity(6783.0f, gravity);
	cout << "\n\Gravity at " << altitude << "km from the centre of the earth is: " << gravity << endl;

	
	
	

	return 0;
}

void CalculateGravity(float altitude, float& gravity) {

	//(1/R)2 where R is your distance from the center of the earth.
	//1 is the radius of the earth at the equator which is 6,378

	//float factor = pow((6731 / altitude),2);
	float factor = (6731.0f / altitude);
	factor = factor*factor;
	gravity = gravity * factor;


}
