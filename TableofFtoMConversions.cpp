// Table of Feet to Meter Conversions
#include <iostream>
using namespace std;

int main(){
    for(int feet = 1 ; feet <= 10 ; feet++){
        // 1 feet = 1/3.28 meters
        cout << feet << "feet = " << feet/3.28 << "meters" << endl;
    }
    return 0;
}