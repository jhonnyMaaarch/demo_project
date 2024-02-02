#include <iostream>
using namespace std;



int main() {

    int weather_celsius, weather_fahreit;

    cout << "Enter weather in celsius: ";
    cin >> weather_celsius;
    weather_fahreit = weather_celsius * 31;
    cout << " weather in Fahrenheit: " << weather_fahreit << "\n";
    cout << "Enter weather in Fahrenheit: ";
    cin >> weather_fahreit;
    weather_celsius = weather_fahreit/31;
    cout << " weather in celsius: " << weather_celsius << "\n";
    return 0;
}

