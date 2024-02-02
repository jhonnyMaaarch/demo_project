#include <iostream>
using namespace std;


int main(){
    int myInput, myAnswer;

    cout << "Enter a number: ";
    cin >> myInput;
    if ( myInput == 0 ) {
       cout << " The number entered is zero! " << "\n"; 
    } else if ( myInput < 1 ) {
       cout << " The number entered is negative! " << "\n";
    } else {
       cout << " The number entered is positive! " << "\n";
    }
    return 0;
}

       
    
