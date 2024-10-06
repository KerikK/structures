#include <iostream>
#include <iomanip> // ===>>> https://github.com/MicrosoftDocs/cpp-docs/blob/main/docs/standard-library/iomanip.md

using namespace std;

struct php {
	string type;
	string color;
	int user;
};

struct car {
    string brand;
    string model;
    int year;
    double price;
    php details;
};

void fun(const car cars[], int flip);

int main() {


   const int fCar = 3;
   car cars[fCar];

   for (int i = 0; i < fCar; i++) {

       cout << "Enter brand: ";
       cin >> cars[i].brand;

       cout << "Enter model: ";
       cin >> cars[i].model;

       cout << "Enter year: ";
       cin >> cars[i].year;

       cout << "Enter price: ";
       cin >> cars[i].price;

       cout << "Enter type of engine: ";
       cin >> cars[i].details.type;

       cout << "Enter color: ";
       cin >> cars[i].details.color;

       cout << "Enter quantity user: ";
       cin >> cars[i].details.user;

       cout << ' ' << endl;
       cout << "--------------------------" << endl;

       cout << endl;
   
   }

   fun(cars, fCar);

   return 0;

}

void fun(const car cars[], int flip) {// ===>>> https://github.com/MicrosoftDocs/cpp-docs/blob/main/docs/standard-library/iomanip.md

    cout << left

        << setw(10) << "bland"
        << setw(10) << "model"
        << setw(6) << "year"
        << setw(10) << "price"
        << setw(15) << "engine"
        << setw(10) << "color"
        << setw(18) << "user" 

        << endl;

    cout << "-------------------------------------------------------------------------" << endl;

    for (int i = 0; i < flip; i++) {// ===>>> https://github.com/MicrosoftDocs/cpp-docs/blob/main/docs/standard-library/iomanip.md
        cout << left

            << setw(10) << cars[i].brand
            << setw(6) << cars[i].model
            << setw(10) << cars[i].year
            << setw(10) << cars[i].price
            << setw(15) << cars[i].details.type
            << setw(10) << cars[i].details.color
            << setw(18) << cars[i].details.user

            << endl;

    }

}

