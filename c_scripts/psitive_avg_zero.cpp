#include <iostream>
using namespace std;


int main(){
    int myInput, myAnswer;

    cout << "Enter a number: ";
    cin >> myInput;
    if ( myInput >= 1 ) {
       cout << " The number entered is positive! ";
    } else if ( myInput < 1 ) {
       cout << " The number entered is negative! ";
    } else {
       if ( myInput == 0 ) {
             cout << " The number entered is zero! ";
       }      
    }
    return 0;
}

       
    
