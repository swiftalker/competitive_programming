// latihan for
#include <cstdio>

void _for1() {
    printf("for1:\n"); 
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    printf("\n");
}

void _for2() {
    printf("for2:\n");
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        printf("tulisan ini dicetak saat i = %d\n", i);
    }
    printf("\n");
}

void _for3() {
    printf("for3:\n");
    int N;
    scanf("%d", &N);
    for (int i = N-1; i >= 0; i--) {
        printf("tulisan ini dicetak saat i = %d\n", i);
    }
    printf("\n");
}

void _forSkip() {
    printf("forSkip:\n");
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i += 2) {
        printf("tulisan ini dicetak saat i = %d\n", i);
    }

    printf("akhir dari program \n");
    printf("\n");
}

void _forSkip2() {
    printf("forSkip2:\n");
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i *= 2) { // infinite loop, karena 0 * 2 tidak akan pernah menemukan solusi.. 
        printf("tulisan ini dicetak saat i = %d\n", i);
    }

    printf("\n");
}

void _forSum() {
    printf("forSum:\n");
    int awal, akhir;

    scanf("%d %d", &awal, &akhir);

    int jumlah = 0;

    for (int i = awal; i <= akhir; i++) {
        jumlah += i;
    }

    printf("jumlah bilangan bulat di antara %d dan %d (inklusif) adalah %d\n", awal, akhir, jumlah);

    // inklusif = trehitung/termasuk

    printf("\n");
}

void _while() {
    printf("while:\n");
    int N;
    scanf("%d", &N);

    int i = 0;
    while (i < N) {
        printf("tulisan ini dicetak saat i = %d\n", i);
        i++;
    }

    printf("\n");
}

void _whileSum() {
    printf("whileSum:\n");
    int awal, akhir;

    scanf("%d %d", &awal, &akhir);

    int jumlah = 0;
    int i = awal;

    while (i <= akhir) {
        jumlah += i;
        i++;
    }

    printf("jumlah bilangan bulat di antara %d dan %d (inklusif) adalah %d\n", awal, akhir, jumlah);

    printf("\n");
}

void _doWhile() {
    printf("doWhile:\n");
    int N;
    scanf("%d", &N);

    int i = 0;
    do {
        printf("tulisan ini dicetak saat i = %d\n", i);
        ++i;
    } while (i < N);

    printf("\n");
}

void _exampleFor() {
    int i = 100;
    while (i > 0)
        printf("+");
        i = i / 2;
}

void _exampleFor2() {
    int a = -50;
    do
        printf("masuk ");
    while (a > 0);
    printf(" keluar");
}

void _exampleFor3() {
    int n = 100;
    int i = 0;
    while (n > 1) {
        i = i + 1;
        n = n - (n / 2);
    }
    printf("%d", i);
}

void _exampleFor4() {
    int a = 45;
    int b = 56;
    do {
        a = a - 3;
        b = b - 5;
    } while ((a >= 0) || (b >= 0));
    printf("%d %d", a, b);
}

int main() {
    // _for1();
    // _for2();
    // _for3();
    // _forSkip();
    // _forSkip2();
    // _forSum();
    // _while();
    // _whileSum();
    // _doWhile();

    // _exampleFor();
    // _exampleFor2();
    // _exampleFor3();
    _exampleFor4();
    return 0;
}