// Deret Aritmatika
#include <iostream>
#include <vector>

using namespace std;

vector<int> generateGeometricSequence(int firstTerm, int ratio, int numberOfTerms) {
    vector<int> sequence;

    int currentTerm = firstTerm;

    for (int i = 0; i < numberOfTerms; ++i) {
        sequence.push_back(currentTerm);
        currentTerm *= ratio;
    }

    return sequence;
}

int main() {
    int a = 3; // Suku pertama
    int b = 5; // Beda
    int n = 10; // Jumlah suku

    vector<int> sequence = generateGeometricSequence(a, b, n);

    cout << "Deret Geometri: ";
    for (int term: sequence) {
        cout << term << " ";
    }

    cout << endl;

    return 0;
}