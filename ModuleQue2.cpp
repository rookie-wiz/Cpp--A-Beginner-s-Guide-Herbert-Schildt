/*
- Write a program that averages the absolute value of five values entered by the user. Display the
result.
*/
#include <iostream>
#include <cstdlib> 
using namespace std;

double average(double val1 , double val2 , double val3 , double val4 , double val5 ){
        double value = (val1 + val2 + val3 + val4 + val5) / 5 ;
        return value ;
    }

int main(){
    double result , val1 , val2 , val3 , val4 , val5 , absoluteVal1 , absoluteVal2 , absoluteVal3 , absoluteVal4 , absoluteVal5 ;
    cout << "Enter the absolue Val1 : \n " ;
    cin >> val1 ;
    absoluteVal1 = abs(val1);
    cout  << "Enter the absolue Val2 : \n " ;
    cin >> val2 ;
    absoluteVal2 = abs(val2);
    cout << "Enter the absolue Val3 : \n " ;
    cin >> val3 ;
    absoluteVal3 = abs(val3);
    cout << "Enter the absolue Val4 : \n " ;
    cin >> val4 ;
    absoluteVal4 = abs(val4);
    cout << "Enter the absolue Val5 : \n " ;
    cin >> val5 ;
    absoluteVal5 = abs(val5);
    double averageValue = average(absoluteVal1 , absoluteVal2 , absoluteVal3 , absoluteVal4 , absoluteVal5) ;
    result = abs(averageValue) ;
    cout << result << endl ; 
    return 0 ;
}