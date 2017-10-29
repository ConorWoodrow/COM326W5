/*
* Main.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 23/10/2017
* Description: Main for the lab 5 challenge two exercises (references)
* Copyright notice
*/

#include <iostream>
#include <vector>

using namespace std;

void Print(float values[], int numberofElements);

void Print(vector<float> &numbers);

int main() {

	float numbers[] { 3.2f, 2.5f, 6.7f, 9.3f, 22.7f };

	vector <float> vecNumbers{ 2.2f, 56.4f, 43.2f, 3232.5f, 87.4f, 12.0f };

	Print(numbers, 5);
	Print(vecNumbers);
	
	return 0;
}


void Print(float values[], int numberofElements) {
	float* number{ &values[0] };

	for (int index = 0; index < numberofElements; index++) {
		cout << *number << " " ;
		number++;
	}	

}

void Print(vector<float> &numbers) {
	float* number{ &numbers[5] };

	cout << "\n";
	for (int index = 0; index < numbers.size();index++) {
		cout << *number << " ";
		number--;
	}

	cout << "\n";


}
