#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variables to store customer details
    string customerName, crbStatus;
    int age, monthsAsCustomer;
    double bankBalance;

    // Prompt user for customer details
    cout << "Enter customer details:" << endl;
    cout << "Name: ";
    getline(cin, customerName);
    cout << "Age: ";
    cin >> age;
    cout << "Bank Balance: $";
    cin >> bankBalance;
    cout << "CRB Status (good/bad): ";
    cin >> crbStatus;
    cout << "Months as a customer: ";
    cin >> monthsAsCustomer;

    // Check loan qualification conditions for customers
    if (age > 22 && bankBalance > 50000 && crbStatus == "good" && monthsAsCustomer > 6) {
        cout << customerName << " qualifies for the loan." << endl;
    } else {
        cout << customerName << " does not qualify for the loan." << endl;
    }

    return 0;
}
