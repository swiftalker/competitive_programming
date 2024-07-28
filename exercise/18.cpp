// Implementasi banyak algoritma
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const vector<int>&arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // elemen ditemukan
        } else if (arr[mid] < target) {
            left = mid + 1; // jika target lebih besar dari elemen tengah maka +1 untuk cari disebelah kanan 
        } else {
            right = mid - 1; // jika target lebih kecil dari elemen tengah maka -1 untuk cari disebelah kiri
        }
    }

    return -1; // jika elemen tidak ditemeukan
}

void usingBinarySearch() {
    vector<int> data = {3,6,8,12,14,17,20,25,30,35,40};

    int target = 17;
    int index = binarySearch(data, target);

    if (index != -1) {
        printf("Elemen %d ditemukan pada index %d\n", target, index);
    }
}

void bubbleSort(vector<int> & arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}

void usingBubbleSort() {
    vector<int> data = {64,34,25,12,22,11,90};

    bubbleSort(data);
    printf("Array setelah diurutkan: ");
    for (int num: data) {
        printf("%d ", num);
    }
}

void gravitySort(vector<int> & arr) {
    int max = *max_element(arr.begin(), arr.end());
    vector<vector<bool>> beads(max, vector<bool>(arr.size(), false));

    // Menempatkan manik-manik sesuai dengan nilai elemen
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i]; j++) {
            beads[j][i] = true;
        }
    }

    // Menjatuhkan manik-manik secara gravitasi
    for (int j=0; j < max; j++) {
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (beads[j][i]) {
                count++;
                beads[j][i] = false;
            }
        }
         for (int i = arr.size() - count; i < arr.size(); i++) {
            beads[j][i] = true;
         }
    }

    // Menyusun kembali array berdasarkan manik-manik
    for (int i = 0; i < arr.size(); i++) {
        int j;
        for (j=0; j < max && beads[j][i]; j++);
        arr[i] = j;
    }
}

void usingGravitySort() {
    vector<int> data =  {64,34,25,12,22,11,90};

    gravitySort(data);
    printf("Array setelah diurutkan: ");
    for (int num: data) {
        printf("%d ", num);
    }
}

void selectionSort(vector<int> & arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Mencari elemen terkecil di bagian array yang belum terurut;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

void usingSelectionSort() {
    vector<int> data =  {64,34,25,12,22,11,90};
    selectionSort(data);

    printf("Array setelah diurutkan: ");
    for (int num: data) {
        printf("%d ", num);
    }
}

void insertionSort(vector<int> & arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key=arr[i];
        int j = i -1;

        // Memindahkan elemen yang lebih besar dari key satu posisi di depan
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void usingInsertionSort() {
    vector<int> data =  {64,34,25,12,22,11,90};
    insertionSort(data);

    printf("Array setelah diurutkan: ");
    for (int num: data) {
        printf("%d ", num);
    }
}

int linearSearch(const vector<int> & arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }

    }
    return -1;
}

void usingLinearSearch() {
    vector<int> data =  {64,34,25,12,22,11,90};
    int target=22;

    int index = linearSearch(data, target);

    if (index != -1) {
        printf("Elemen %d ditemukan pada index %d\n", target, index);
    } else {
        printf("Elemen %d tidak ditemukan\n", target);
    }

}

int main() {
    // usingBinarySearch();
    // usingBubbleSort();
    // usingGravitySort();
    // usingSelectionSort();
    // usingInsertionSort();
    usingLinearSearch();
    return 0;
}