// Deret Aritmatika
#include <cstdio>
#include <vector>
using namespace std;

vector<int> generateArithmeticSequence(int firstTerm, int difference, int numberOfTerms) {
    vector<int> sequence;

    int currentTerm = firstTerm;

    for (int i = 0; i < numberOfTerms; ++i) {
        sequence.push_back(currentTerm);
        currentTerm += difference;
    }

    return sequence;
}

int main() {
    int a = 3;
    int b =5;
    int n = 10;

    vector<int> arithmeticSequence = generateArithmeticSequence(a, b, n);

    printf("Deret Aritmatika: ");
    for (int term: arithmeticSequence) {
        printf("%d ", term);
    }

    return 0;
}