#include <iostream>

int main() {
    // Anda bisa mengganti tipe data berikut dengan int, long, short, dll.
    int a = 10;
    int b = 3;

    // Operasi
    int h1 = a / b;  // Pembagian
    int h2 = a - b;  // Pengurangan
    int h3 = a % b;  // Modulus

    // Menampilkan hasil
    std::cout << "a / b = " << h1 << std::endl;
    std::cout << "a - b = " << h2 << std::endl;
    std::cout << "a % b = " << h3 << std::endl;

    return 0;
}