// Deret Bilangan Segitiga
#include <cstdio>
#include <vector>
using namespace std;

vector<int> generateTriangularSequence(int N) {
    vector<int> sequence;

    for (int n=1; n <= N; ++n) {
        int triangularNumber = (n * ( n + 1))/2;

        sequence.push_back(triangularNumber);
    }

    return sequence;
}

int main() {
    int n = 10;

    vector<int> triangularSequence = generateTriangularSequence(n);

    printf("Deret Bilangan Segitiga: ");
    for (int term: triangularSequence) {
        printf("%d ", term);
    }

    return 0;
}