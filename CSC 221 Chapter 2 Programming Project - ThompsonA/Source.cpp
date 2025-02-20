#include <iostream>
using namespace std;

int main() {
    const int TOTAL_CUSTOMERS = 16500;    // total number of customers surveyed
    const double PERCENT_ENERGY_DRINKS = 0.15;    // 15 percent of customers purchase energy drinks
    const double PERCENT_CITRUS_DRINKS = 0.58;    // 58 percent of energy drink customers prefer citrus flavor

    int num_energy_drink_customers = TOTAL_CUSTOMERS * PERCENT_ENERGY_DRINKS;
    int num_citrus_drink_customers = num_energy_drink_customers * PERCENT_CITRUS_DRINKS;

    cout << "Approximate number of customers purchasing one or more energy drinks per week: " << num_energy_drink_customers << endl;
    cout << "Approximate number of customers preferring citrus-flavored energy drinks: " << num_citrus_drink_customers << endl;

    return 0;
}