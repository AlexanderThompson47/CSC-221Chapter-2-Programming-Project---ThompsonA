#include <iostream>
using namespace std;

int main() {
    const double RISING_RATE = 1.5;  // millimeters per year
    int years1 = 5;
    int years2 = 7;
    int years3 = 10;

    double rise_in_5_years = years1 * RISING_RATE;
    double rise_in_7_years = years2 * RISING_RATE;
    double rise_in_10_years = years3 * RISING_RATE;

    cout << "In " << years1 << " years, the ocean's level will be " << rise_in_5_years << " millimeters higher than the first year." << endl;
    cout << "In " << years2 << " years, the ocean's level will be " << rise_in_7_years << " millimeters higher than the first year." << endl;
    cout << "In " << years3 << " years, the ocean's level will be " << rise_in_10_years << " millimeters higher than the first year." << endl;

    return 0;
}