#include <cstdio>
#include <cmath>

int main() {
    double N;

    scanf("%lf", &N);

    int truncN = static_cast<int>(trunc(N));

    int floor, ceiling;

    if (N == truncN) {
        floor = ceiling = truncN;
    } else if (N > 0) {
        floor = truncN;
        ceiling = truncN + 1; 
    } else {
        floor = truncN - 1;
        ceiling = truncN;
    }

    printf("%d %d\n", floor, ceiling);

    return 0;
}