#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  int c, r;
  cin >> c >> r;
  int a = 0, b = 0;

  while (true) {
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
      break;
      int xx = x + a;
      int yy = y + b;
    if (xx < 0)
      xx = 0;
    if (xx > c)
      xx = c;
    if (yy < 0)
      yy = 0;
    if (yy > r)
      yy = r;

    a = xx;
    b = yy;
    cout << xx << ' ' << yy << '\n';
  }
}
