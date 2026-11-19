/*
- A year on Jupiter (the time it takes for Jupiter to make one full circuit around the Sun) takes about
12 Earth years. Write a program that converts Jovian years to Earth years. Have the user specify the
number of Jovian years. Allow fractional years.
*/

#include <iostream>
using namespace std;

/*
Logic : 
- 1 jovian years = 12 earth years 
- x jovina years given = 12 * x earth years 
*/
int main(){
    double jovianYears , earthYears ;
    cout << "Enter the Jovian Years : \n";
    cin >> jovianYears ;
    cout << "EarthYears for the Jovian Years : " << jovianYears * 12 << endl;
    return 0;
}