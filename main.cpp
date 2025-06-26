#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum, difference, product, quoient;
    cout << "Enter first Number: ";
    cin >> num1;
    cout << "Enter second Number: ";
    cin >> num2; 

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quoient = num1 / num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;       
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quoient << endl;
    cout << "Remainder: " << num1 % num2 << endl;
    return 0;
}
