#include <iostream>

using namespace std;

int main() {
  string name, maxName;
  int N, bid, maxBid = 0;
  cin >> N;
  if (N >= 1 && N <= 100) {
    for (int i = 0; i < N; i++) {
      cin >> name;
      cin >> bid;
      if (bid > maxBid) {
        maxBid = bid;
        maxName = name;
      }

    }

  }

  cout << maxName;
}