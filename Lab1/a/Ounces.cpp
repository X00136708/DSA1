#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	double ounces = 35273.92;
	double weight;
	cout << "Please enter the weight of the cereal box ";
	cin >> weight;
	cout << "Weight in tons: " << weight/ounces << "\n and it would take: " << ounces/weight << " boxes to reach 1 metric ton";
		return 0;
}