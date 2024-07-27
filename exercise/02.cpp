#include <iostream>
using namespace std;

int main() {
    signed int signedNum = -10;
    unsigned int unsignedNum = 10;

    cout << "Signed number: " << signedNum << endl;       // Output: Signed number: -10
    cout << "Unsigned number: " << unsignedNum << endl;   // Output: Unsigned number: 10

    // If we try to assign a negative value to an unsigned variable
    unsignedNum = -10;
    cout << "Unsigned number (after assigning -10): " << unsignedNum << endl;   // Output: Large positive number due to wrap-around

    return 0;
}