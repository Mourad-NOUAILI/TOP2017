#include <bits/stdc++.h>

using namespace std;

bool  isCool (double n, double eps) {
  double r1 = sqrt(n);
  double r2 = cbrt(n);
  return  (abs(r1 - round(r1)) < eps) && (abs(r2 - round(r2)) < eps) ;
}

int main() {
  ios::sync_with_stdio(false);
  double eps = 0.0000000001;
  int a, b;
  cin >> a;
  cin >> b;

  int cnt = 0;
  for (int n = a ; n <= b ; ++n)
    if (isCool((double)n, eps))
      cnt++;

  cout << cnt << '\n';
  return 0;
}
