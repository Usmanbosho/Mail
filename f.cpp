#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade A-F: ";
    cin >> grade;

    switch (grade){
    case 'A':
    case 'a':
     cout << " Excellent"; break;
    case 'B':
    case 'b':
     cout << " Good"; break;
    case 'C':
    case 'c':
     cout << " Average"; break;
    case 'D':               
    case 'd':
     cout << " Poor"; break;
    case 'F':
    case 'f':
     cout << " Fail"; break;
    case 'E':
    case 'e':
        cout << " Not Graded"; break;
    
    default:
        break;
    }
}