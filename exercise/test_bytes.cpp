#include <cassert>
#include <iostream>

using namespace std;

int main() {

    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    assert(sizeof(char) == 1);

    cout << "Size of unsigned char: " << sizeof(unsigned char) << " byte" << endl;
    assert(sizeof(unsigned char) == 1);

    cout << "size of short: " << sizeof(short) << " byte" << endl;
    assert(sizeof(short) == 2);

    cout << "size of unsigned short: " << sizeof(unsigned short) << " byte" << endl;
    assert(sizeof(unsigned short) == 2);

    cout << "size of int: " << sizeof(int) << " byte" << endl;
    assert(sizeof(int) == 4);

    cout << "size of unsigned int: " << sizeof(unsigned int) << " byte" << endl;
    assert(sizeof(unsigned int) == 4);

    cout << "size of long: " << sizeof(long) << " byte" << endl;
    assert(sizeof(long) == 4 || sizeof(long) == 8);

    cout << "size of unsigned long: " << sizeof(unsigned long) << " byte" << endl;
    assert(sizeof(unsigned long) == 4 || sizeof(unsigned long) == 8);

    cout << "size of long long: " << sizeof(long long) << " byte" << endl;
    assert(sizeof(long long) == 8);

    cout << "size of unsigned long long: " << sizeof(unsigned long long) << " byte" << endl;
    assert(sizeof(unsigned long long) == 8);

    cout << "size of float: " << sizeof(float) << " byte" << endl;
    assert(sizeof(float) == 4);

    cout << "size of double: " << sizeof(double) << " byte" << endl;
    assert(sizeof(double) == 8);

    cout << "size of long double: " << sizeof(long double) << " byte" << endl;
    assert(sizeof(long double) == 8 || sizeof(long double) == 16);

    return 0;
}