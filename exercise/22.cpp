#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

void Test1() {
    auto findFactors = [](int number) {
        vector<pair<int,int>> factors;

        for (int i = 1; i * i <= number; i++) {
            if (number % i == 0) {
                factors.push_back(make_pair(i, number / i));
            }
        }

        for (const auto& pair: factors) {
            printf("%d %d \n", pair.first, pair.second);
        }
    };

    int n;
    scanf("%d", &n);

    findFactors(n);
}

void otherSolutionTest1() {
    int N, R, C;
    scanf("%d", &N);
    R = 1;
    C = N;

    for (int i = 1; i <= N; i++) {
        /**
         * Misal n = 10, maka i
         * 1 2 3 4 5 6 7 8 9 10
         * dan harusnya j terjadi looping sebanyak 10 kali
         */
        // for (int j = 1; j <= N; j++) {
        //     /**
        //      * jika dimulai dari j = 1, dan j <= n sehingga j terjadi looping sebanyak 10 kali
        //      * kemudian if i * j == N, maka jika i = 1, dan berarti j = 1, maka 1 * 1 == 10, karena false sehingga ulangi lagi
        //      * jika i = 1, dan j = 2, maka 1 * 2 == 10, karena false ulangi lagi
        //      * jika i = 1, dan j = 3, maka 1 * 3 == 10, karena false ulangi lagi
        //      *  */
        //     if (i * j == N) {
        //         if (abs(R - C) > abs(i - j)) {
        //             R = i;
        //             C = j;
        //         }
        //     }
        // }
        // Karena masalah kecepatan pencarian dan efisiensi, sehingga solusi alternatif dengan mencoba semua kemungkinan R atau solusi 2

        if (N % i == 0) {
            int j = N / i;
            if (abs(R - C) > abs(i - j)) {
                R = i;
                C = j;
            }
        }
    }

    printf("%d %d\n", R, C);

}

void otherSolutionTest2() {
    // Batasi R Sampai sqrt(N)
    // Untuk memeriksa seluruh faktor bilangan, cukup batasi sampai sqrt(N)
    // Sebagai contoh, untuk N = 100, faktorisasi yang mungkin adalah
    // 1 * 100
    // 2 * 50
    // 4 * 25
    // 5 * 20
    // 10 * 10
    // 20 * 5
    // 25 * 4
    // 50 * 2
    // 100 * 1
    // Dari faktorisasi di atas, dapat dilihat bahwa jika faktor pertama lebih besar dari sqrt(N), maka faktor kedua pasti lebih kecil dari sqrt(N)

    int N, R, C;
    scanf("%d", &N);

    R = 1;
    C = N;

    int i = 1;
    while (i*i <= N) {
        if (N % i == 0) {
            int j = N/i;
            if (abs(R - C) > abs(i - j)) {
                R = i;
                C = j;
            }
        }
        i++;
    }

    printf("%d %d\n", R, C);
}

void Test2() {
    int N;
    scanf("%d", &N);

    auto isAgakPrima = [](int number) {
        if (number < 1) return false;

        int count = 0;

        for (int i = 1; i <= sqrt(number); ++i) {
            if (number % i == 0) {
                if (i == number / i) {
                    count++;
                } else {
                    count += 2;
                }
            }
        }

        return (count <= 4);
    };

    while (N--) {
        int num;

        scanf("%d", &num);

        if (isAgakPrima(num)) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }
}

void findFactorsFull(int n) {
    printf("Faktor dari %d adalah: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
}

void findFactorsOptimized(int n) {
    printf("Factor dari %d adalah: ", n);
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("%d ", i);
            if (i != n / i) {
                printf("%d ", n / i);
            }
        }
    }
}

int main() {
    // Test1();
    // Test2();
    // findFactorsFull(36);
    findFactorsOptimized(24);
    // otherSolutionTest1();
    // otherSolutionTest2();
    return 0;
}