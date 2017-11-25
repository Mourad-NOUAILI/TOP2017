#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> notMixed;

int main() {
  ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;

  for (int i = 0 ; i < M ; ++i) {
    int a, b;
    cin >> a >> b;
    notMixed.push_back({--a, --b});
  }

  int numberSubsets = 1 << N;
  int ans = 0;
  for (int i = 0 ; i < numberSubsets ; ++i) {
    int toAdd = 1;
    for (int j = 0 ; j < M ; ++j) {
      if ( (i & (1 << notMixed[j].first)) && (i & (1 << notMixed[j].second)) ) {
        toAdd = 0;
        break;
      }
    }

    ans += toAdd;
  }

  cout << ans << '\n';

  return 0;
}
