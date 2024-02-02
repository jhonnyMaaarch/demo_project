#include <iostream>
using namespace std;


int main() {

    int userNum, posNum, NegNum, posReg, negReg;

    cout << "Enter a number: ";
    cin >> userNum;
    posReg = userNum % 2;
    if ( posReg == 0 ) {
       cout << "The number you entered is even " << "\n";
    } else if (posReg > 0 ) {
       cout << "The number you entered is odd " << "\n";
    } else {
       cout << "The number is invalid! " << "\n";
    }
    return 0;
}
 
