// Compute the Area of Reactangle by taking user input using cin 
#include <iostream>
using namespace std;
/*
Logic : Step by step 
- Declare the variables in which the User will save the Input value 
- Print Statement which shows what values we should input 
- Enter the value and get stored in that variable 
- Compute the Area
- Remember the Sequence of the Code logic matters , cannot compute area until the value of length , width are given but it still compiled , gave wrong result so it as 
runtime error 
*/
int main(){
    int length , width , area;
    cout << "Enter the Length of Rectangle - ";
    cin >> length ;
    cout << "Enter the Width of Rectangle - ";
    cin >> width ;
    area = length * width ;
    cout << "Area of DynamicRecatngle - " << area << endl;
    return 0;
}

// Error at Line : we cannot directly use assignment operator in cout 
// Solution with same Concpet : cout << "Area of Rectangle - " << (area = length * width) << endl; 
// This is correct solution because the << and = assignment operator have differnt Precedence 
