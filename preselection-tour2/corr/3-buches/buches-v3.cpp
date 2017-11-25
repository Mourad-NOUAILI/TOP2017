#include <bits/stdc++.h>

using namespace std;


int main() {
  ios::sync_with_stdio(false);
  int L;
  cin >> L;

  string s;
  cin >> s;

  vector<string> goods;
  
  int start = 0;
  int end = 0;

  while (end < L) {
    while (s[end] == 'O')
      end++;

    string good = s.substr(start, end - start);
    if (good.size() != 0)
      goods.push_back(good);

    while (s[end] == 'X')
      end++;

    start = end;
  }

  cout << goods.size() << '\n';
  for (auto g: goods)
    cout << g << '\n';

  return 0;
}

