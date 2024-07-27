#include <iostream>

int main() {

    // unsigned char a = 250;
    // printf("%d\n", a);
    // a = a + 10; // why 4?
    // printf("%d\n", a);

    int a = 2000000000;

    printf("%d\n", a);

    a = a+a;// tidak akan dapat dijumlahkan karena melebihi batas maksimal tipe data integer

    printf("%d\n", a);
    
    a = a % 123;

    printf("%d", a);


}