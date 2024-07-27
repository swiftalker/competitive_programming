#include <iostream>
using namespace std;

int main() {
    bool a,b,c,d;

    a = true;
    b = true;
    c = false; 
    d = false;

    bool result = a && !d || !c || a && b;
    cout << result << endl;
}
