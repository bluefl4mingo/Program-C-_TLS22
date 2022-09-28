// Temperature Converter by Ramadhani Februarrahman
// Faraday - TLS 2022

#include <iostream>
using namespace std;

// Function convert Celcius to Reamur
void Reamur (int TC,int C) {
    TC = C*4/5;
    cout << "The temperature in Reamur is " << TC <<"°R";
}

// Function convert Celcius to Fahrenheit
void Fahrenheit (int TC,int C) {
    TC = C*9/5+32;
    cout << "The temperature in Fahrenheit is " << TC <<"°F";
}

// Function convert Celcius to Kelvin 
void Kelvin (int TC,int C) {
    TC = C+273;
    cout << "The temperature in Kelvin is " << TC <<" K";
}

// Main function
int main () {
    int C, TC;
    int Temp;

    cout << "This is a temperature converter program.\n";
    cout << "Please insert temperature in Celcius : ";
    INPUTC:cin >> C;

    if (C<-10000||C>10000) {
        cout << "Your input is invalid, please insert temperature between -10000°C — 10000°C";
        cout << "\n--------------------------------------------------------------" << endl;
        goto INPUTC;
    }

    else {
    cout << "\n--------------------------------------------------------------" << endl;
    cout << "Which converter do you want to use?" << endl;
    cout << "Type '1' to convert Celcius into Reamur" << endl;
    cout << "Type '2' to convert Celcius into Fahrenheit" << endl;
    cout << "Type '3' to convert Celcius into Kelvin" << endl;
    INPUTEMP:cin >> Temp;
    cout << "\n--------------------------------------------------------------" << endl;
    

    if (Temp==1) {
        Reamur (0, C);
    }

    else if (Temp==2) {
        Fahrenheit (0, C);
    }
    
    else if (Temp==3) {
        Kelvin (0, C);
    }

    else {
        cout << "Your input is invalid, please insert between '1', '2', or '3'" << endl;
        cout << "--------------------------------------------------------------" << endl;
        goto INPUTEMP;
    }
    
    }

    cout << endl << "__________(Program ended)__________";
    return 0;
}