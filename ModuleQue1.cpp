/*
- The moon’s gravity is about 17 percent that of Earth’s. Write a program that displays a table that
shows Earth pounds and their equivalent moon weight. Have the table run from 1 to 100 pounds.
Output a newline every 25 pounds. 
*/

#include <iostream>
using namespace std;

int main(){
    double moonWeight ;
    for(int earthWeight = 1 ; earthWeight <= 100 ; earthWeight++){
        moonWeight = 0.17 * earthWeight ;
        if (earthWeight % 25 == 0){
            cout << "earthWeight : " << earthWeight << "moonWeight : " << moonWeight << endl;
        }else {
        }
    }
    return 0 ;
}