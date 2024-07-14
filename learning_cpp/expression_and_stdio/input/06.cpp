#include <cstdio>
#include <string>

using namespace std;

char buff[1001];

int main() {
    scanf("%[^\n]\n", buff); // membaca sebuah baris string

    string s = buff;
    printf("s='%s'\n", s.c_str());
}