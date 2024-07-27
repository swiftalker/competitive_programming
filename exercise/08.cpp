// IO Redirection
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("08_input.txt");
    ofstream outputFile("08_output.txt");

    if (!inputFile) {
        cerr << "Tidak dapat membuka file 08_input.txt" << endl;
    }

    int number;

    while (inputFile >> number) {
        outputFile << "Angka: " << number << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}