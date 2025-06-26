#include <iostream>
using namespace std;

int main(){
    int number, i = 1;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is an odd number." << endl;
    }
    while (i<= number){
        cout << i << " "; 
        i++; 
    }
   
    return 0;
}