/*
Project 1-1 : Converting feets to meters
A meter is equal to approximately 3.28 feet. Thus, we need to use floating-point data. To perform the
conversion, the program declares two double variables. One will hold the number of feet, and the
second will hold the conversion to meters.
*/

/*
Logic : 
- 1m = 3.28feets
- 1feet = 1/3.28 meters
- two double variables declared
- one stores the results , another ask for the value of feets 
*/

#include <iostream>
using namespace std;

int main(){
    double feets , result ;
    cout << "Perform Conversion from feets to meters \n";
    cout << "Enter Feets : ";
    cin >> feets ;
    result = feets/3.28 ;
    cout << "Meters : " << result;
    return 0;
}