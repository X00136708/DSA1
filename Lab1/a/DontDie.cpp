#include <iostream>

using namespace std;

int main() {
	double personWeight;
	double sweetener = .001;
	int cansToKillMouse = 15;
	double weightMouse = .5;
	double murderStats = weightMouse / (sweetener*cansToKillMouse);
	cout << "Enter the weight you will be: ";
		cin >> personWeight;

	double murderPerson = murderStats * personWeight;
	cout << "It will take " << murderPerson << " cans to kill you.";

}