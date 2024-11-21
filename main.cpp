#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double kilometers, miles, feet, inches;


    cout << "Enter the distance in kilometers: ";
    cin >> kilometers;


    miles = kilometers * 0.621371;


    feet = miles * 5280;


    inches = feet * 12;


    cout << fixed << setprecision(2);
    cout << "Distance in miles: " << miles << " miles" << endl;
    cout << "Distance in feet: " << feet << " feet" << endl;
    cout << "Distance in inches: " << inches << " inches" << endl;

    return 0;
}