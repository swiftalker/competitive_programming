#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string ringkas_bilangan(vector<int> bilangan) {
  
  sort(bilangan.begin(), bilangan.end());

  string hasil;
  int start = bilangan[0];
  int end = start;

  for (int i = 1; i < bilangan.size(); i++) {
    if (bilangan[i] == end + 1) {
      end = bilangan[i];
    } else {
      if (start == end) {
        hasil += to_string(start) + ", ";
      } else {
        hasil += to_string(start) + "-" + to_string(end) + ", ";
      }
      
      start = end = bilangan[i];
    }
  }

  if (start == end) {
    hasil += to_string(start);
  } else {
    hasil += to_string(start) + "-" + to_string(end);
  }

  return hasil;
}

int main() {
  int N;
  cin >> N;
  vector<int> bilangan(N);
  for (int i = 0; i < N; i++) {
    cin >> bilangan[i];
  }

  cout << ringkas_bilangan(bilangan) << endl;

  return 0;
}