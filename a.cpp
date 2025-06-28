#include <iostream>
using namespace std;

int main() {
    double num1;

    cout << "Enter first Number: ";
    cin >> num1;
    
    if(num1 > 10 && num1 < 50){
        cout<<"Not divisible by 5."<<endl;
    }else {
        cout<<"Divisible by 5."<<endl;
    }
   
    return 0;
}
