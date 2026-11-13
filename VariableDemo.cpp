// Second Simple Program

#include <iostream>
using namespace std;

/*
The following program creates a variable called length, gives it the value 7, and then displays the
message “The length is 7” on the screen.
*/

int main(){
    int length ;    // Variable is declared
    length = 7 ;    // Value 7 is assigned to Varibale
    cout << "The length is ";   // String Console Output
    cout << length; // Value of length Variable as Output
    return 0 ;
}

// If you notice the output have % sign , its the zsh tells that the program finished without printing the newline 
// Solution :cout <<length << endl or "\n"
// cout << "The length is " << length << "\n";
// We tried diff values , positive , negative , zero works but no decimal output 

