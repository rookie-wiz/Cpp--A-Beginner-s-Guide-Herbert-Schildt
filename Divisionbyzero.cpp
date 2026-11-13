// Here is a program that uses a block of code to prevent a division by zero:
#include <iostream>
using namespace std;

int main(){
    int num , deno , quotient;
    cout << "Enter the Numerator :";
    cin >> num ;
    cout << "Enter the Denominator : ";
    cin >> deno;
    if (deno != 0 ) {
        cout << "Denominator is not equal to zero! \n";
        quotient = num / deno;
        cout << quotient;
    }
    return 0;
}

// keyword overhead refers to the time taken to execute or simply performance and block of code doesnt overhead.
