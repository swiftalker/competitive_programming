#include <cstdio> 

int a, b, c, x, hasil;

int main() {
    a = 1;
    b = 3;
    c = -2;
    x = 5;

    hasil = a*x*x + b*x + c;
    printf("ax^2 + bx + c = %d\n", hasil);
}