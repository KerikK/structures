#include <iostream>
#include <iomanip> // ===>>>https://github.com/MicrosoftDocs/cpp-docs/blob/main/docs/standard-library/iomanip.md

using namespace std;

struct Boiler {
	string brand;
	string color;
	int power;
	int volume;
	double temperature;
};

void fData(const Boiler bo[], int php);

int main() {

	const int xp = 2;
	Boiler bo[xp];

	for (int i = 0; i < xp; i++) {

		cout << "Enter brend: ";
		cin >> bo[i].brand;

		cout << "Enter color: ";
		cin >> bo[i].color;

		cout << "Enter power: ";
		cin >> bo[i].power;

		cout << "Enter volum: ";
		cin >> bo[i].volume;

		cout << "Enter temperature: ";
		cin >> bo[i].temperature;

		cout << ' ' << endl;
		cout << "------------------------------" << endl;
		cout << ' ' << endl;

	}

	fData(bo, xp);
	return 0;

}

void fData(const Boiler bo[], int php) {
	cout << left

		<< setw(10) << "brend"
		<< setw(9) << "color"
		<< setw(10) << "power"
		<< setw(10) << "volum"
		<< setw(15) << "temperature"

		<< endl;
	cout << "--------------------------------------------------------------------------" << endl;

	for (int i = 0; i < php; i++) {
		cout << left

			<< setw(10) << bo[i].brand
			<< setw(9) << bo[i].color
			<< setw(10) << bo[i].power
			<< setw(10) << bo[i].volume
			<< setw(15) << bo[i].temperature

			<< endl;
	}
}