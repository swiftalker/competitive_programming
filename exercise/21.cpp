#include <cstdio>

void loop1() {
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    int i = 1;
    
    do {
        if (i % y == 0) {
            printf("* ");
        } else {
            printf("%d ", i);
        }
        i++;
    } while (i <= x);
}

void loop2() {
    int x, y;
    scanf("%d %d", &x, &y);

    for (int baris = 1; baris <= x; baris++) {
        for (int kolom = 1; kolom <= y; kolom++) {
            printf("*");
        }
        printf("\n");
    }
}

void loop3() {
    int x, y;
    scanf("%d %d", &x, &y);
    int i = 0;
    while (i < x) {
        int j = 0;
        while (j < y) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

void loop4() {
    int x;
    scanf("%d", &x);

    for (int i = 10; x < i; --i) { // Loop luar untuk jumlah baris
        // for (int j = 10; j > i; --j) {
        //     printf("%d ", j);
        // }
        // printf("\n");
        printf("i = %d\n", i);
    }

    // for (int j = 5; j >= 4; --j) {
    //     printf("%d ", j);
    // }

    /**
     * jikalau loop berarah ke decrement maka 
     * int j = x dengan misal x = 5
     * sehingga pada loop pertama i adalah 0 1 2 3 4
     * maka pada loop j pertama j > i adalah j > 0, dan karena sifat looping j adalah decrement atau j-- / --j sehingga arah loop ke negatif
     * maka loop pertama i di loop pertama j, dengan misal j = 5, maka 5 > i yang i = 0, 5 > 0, 4 > 0, 3 > 0, 2 > 0, 1 > 0 dan 0 > 0 tidak dianggap karena ">", ini terjadi karena sifat j yang decrement
     * begitu terus hingga i pada titik akhir i < x dengan misal x = 5, dan i awal adalah 0 sehingga 0 < 5, 1 < 5, 2 < 5, 3 < 5, 4 < 5
     */
}

void loopSegitigaPascal(int n) {
    auto factorial = [](int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    };

    auto combination = [factorial](int n, int k) {
        return factorial(n) / (factorial(k) * factorial(n - k));
    };

    auto printPascalTriangle = [combination](int rows) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rows - i - 1; j++) {
                printf(" ");
            }

            for (int j = 0; j <= i; j++) {
                printf("%d ", combination(i, j));
            }

            printf("\n");
        }
    };

    printPascalTriangle(n);
}

void berhitung1() {
    int x, y;
    scanf("%d %d", &x, &y);

   for (int i = 1; i <= x; i++) {
        if (i == y) {
            break;
        }

        printf("%d\n", i);
   } 

    printf("Selesai\n");
}

void berhitung2() {
    int x,y;
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= x; i++) {
        if (i % y == 0) {
            continue;
        }

        printf("%d\n", i);
    }

    printf("selesai");
}

void testKeprimaan() {
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            bool checkPrime = ((i%j == 0) && (i != j) && (i / 1));
            if (checkPrime) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            printf("%d adalah bilangan prima\n", i);
        } else {
            printf("%d bukan bilangan prima\n", i);
        }
    }
}

void pembangkitBilanganPrima() {
    int n;
    scanf("%d", &n);
    int count = 0;
    int cur = 2;

    while (count < n) {
        bool isPrime = true;
        for (int i = 2; i < cur; i++) {
            if (cur % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", cur);
            count++;
        }

        cur++;
    }
}

void Test1() {

    int n;
    scanf("%d", &n);
    int count = 0;
    
    while (count <= n) {
        if (count % 10 == 0) {
            count++;
            continue;
        }
        
        if (count == 42) {
            printf("ERROR");
            break;
        }
        
        printf("%d \n", count);
        count++;
    }
}

void Test2() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)  {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("*");
        } 
        
        printf("\n");
    }
}

int main() {
    // loop1();
    // loop2();
    // loop3();
    // loop4();
    // loopSegitigaPascal(5);
    // berhitung1();
    // berhitung2();
    // testKeprimaan();
    // pembangkitBilanganPrima();
    // Test1();
    Test2();
    return 0;
}