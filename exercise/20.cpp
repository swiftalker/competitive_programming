#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void checkVolumes(const vector<int>& volumes) {
    int n = volumes.size();
    int totalVolume = 0;

    for (int volume : volumes) {
        totalVolume += volume;
    }

    if (all_of(volumes.begin(), volumes.end(), [&](int v) { return v == volumes[0]; })) {
        cout << "SESUAI" << endl;
        return;
    }

    if (totalVolume % n != 0) {
        cout << "TIDAK SESUAI" << endl;
        return;
    }

    int targetVolume = totalVolume / n;
    int from = -1, to = -1;

    for (int i = 0; i < n; ++i) {
        if (volumes[i] > targetVolume) {
            from = i;
        } else if (volumes[i] < targetVolume) {
            to = i;
        }
    }

    if (from != -1 && to != -1) {
        int amountToPour = volumes[from] - targetVolume;
        cout << amountToPour << " " << from + 1 << " " << to + 1 << endl;
    } else {
        cout << "TIDAK SESUAI" << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah gelas: ";
    cin >> n;

    vector<int> volumes(n);
    cout << "Masukkan volume setiap gelas (ml): ";
    for (int i = 0; i < n; ++i) {
        cin >> volumes[i];
    }

    checkVolumes(volumes);

    return 0;
}