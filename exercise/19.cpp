// Menentukan faktor-faktor dari sebuah bilangan bulat N
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

void printFactorDescending(int N) {
    vector<int> factors;

    for (int i = 1; i <= N; ++i) {
        if (N%i == 0) {
            factors.push_back(i);
        }
    }

    sort(factors.begin(), factors.end(), greater<int>());
    
    for (int factor : factors) {
        printf("%d ", factor);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    printFactorDescending(N);

    return 0;
}