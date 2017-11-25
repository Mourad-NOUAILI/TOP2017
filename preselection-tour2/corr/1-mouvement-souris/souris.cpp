#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  int c, r;
  cin >> c >> r;
  int x = 0, y = 0;

  while (true) {
    int a, b;
    cin >> a >> b;
    if (a == 0 && a == 0)
      break;
      x += a;
      y += b;
    if (x < 0)
      x = 0;
    if (x > c)
      x = c;
    if (y < 0)
      y = 0;
    if (y > r)
      y = r;

    a = x;
    b = y;
    cout << x << ' ' << y << '\n';
  }
}
