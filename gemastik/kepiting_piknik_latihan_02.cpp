#include <iostream>
#include <string>
#include <vector>

using namespace std;

string decodeMessage(const string& encodedMessage) {
    vector<vector<string>> table1 = {
        {"AB", "DC", "CC", "CB"},
        {"CA", "DA", "CD", "DD"},
        {"BC", "AA", "BA", "DB"},
        {"BD", "AD", "BB", "AC"},
    };

    vector<vector<string>> table2 = {
        {"CD", "BB", "AC", "CC"},
        {"CB", "DB", "AD", "DD"},
        {"DA", "DC", "BC", "BD"},
        {"AA", "BA", "CA", "AB"}
    };

    string chars = "ABCD";
    string originalMessage;

    for (size_t i = 0; i < encodedMessage.length(); i += 2) {
        string block = encodedMessage.substr(i, 2);

        // Cari di Tabel 2 untuk mapping ke Tabel 1
        int table2Row = -1, table2Col = -1;
        for (int row = 0; row < 4; ++row) {
            for (int col = 0; col < 4; ++col) {
                if (table2[row][col] == block) {
                    table2Row = row;
                    table2Col = col;
                    break;
                }
            }
            if (table2Row != -1) break;  // Break luar jika ditemukan
        }

        // Validasi apakah tabel 2 menemukan pasangan
        if (table2Row == -1 || table2Col == -1) {
            cerr << "Kesalahan: tidak dapat menemukan pasangan pada Tabel 2!" << endl;
            return "";
        }

        // Cari di Tabel 1 untuk menemukan pesan asli
        string originalPair = "";
        for (int row = 0; row < 4; ++row) {
            for (int col = 0; col < 4; ++col) {
                string pair = string(1, chars[table2Row]) + string(1, chars[table2Col]);
                if (table1[row][col] == pair) {
                    originalPair = string(1, chars[row]) + string(1, chars[col]);
                    break;
                }
            }
            if (!originalPair.empty()) break;  // Break luar jika ditemukan
        }

        originalMessage += originalPair;
    }

    return originalMessage;
}

int main() {
    string encodedMessage;
    cin >> encodedMessage;

    string originalMessage = decodeMessage(encodedMessage);
    cout << originalMessage << endl;

    return 0;
}
