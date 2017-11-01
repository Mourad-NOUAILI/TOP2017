#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main() {
  int n;
  cin >> n;
  ll biggest = 0;
  for (ll t = 1 ; t <= n ; ++t) {
    ll xt1, xt2;
    cin >> xt1 >> xt2;
    ll y = xt2-xt1;
    biggest = max(biggest,y);
  }
  cout << biggest << '\n';
  return 0;
}

//biggest = biggest ^ ((biggest ^ y) & -(biggest < y));
