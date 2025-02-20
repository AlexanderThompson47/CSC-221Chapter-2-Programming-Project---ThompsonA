#include <iostream>
using namespace std;

int main() {
    const double TANK_CAPACITY = 20.0;      // gallons
    const double MPG_TOWN = 23.5;           // miles per gallon in town
    const double MPG_HIGHWAY = 28.9;        // miles per gallon on the highway

    double distance_in_town = TANK_CAPACITY * MPG_TOWN;
    double distance_on_highway = TANK_CAPACITY * MPG_HIGHWAY;

    cout << "The distance the car can travel on one tank of gas in town is: " << distance_in_town << " miles." << endl;
    cout << "The distance the car can travel on one tank of gas on the highway is: " << distance_on_highway << " miles." << endl;

    return 0;
}