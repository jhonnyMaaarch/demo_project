#include <iostream>
#include <string>
using namespace std;

int main() {

    string myName, myAddr; 
    cout << "Enter your name: ";
    getline (cin, myName);
    cout << "Enter your address: ";
    getline (cin, myAddr);
    cout << "Name: " << myName << "\n" << "Address: " << myAddr << "\n";
    return 0;
 
}
