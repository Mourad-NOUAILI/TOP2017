#include <cstdio>

const int MAX_N = 20;

int a[MAX_N], b[MAX_N];

int countSubsets(int n, int m) {
  int numberSubsets = 1 << n;
  int ans = 0;
  for (int i = 0 ; i < numberSubsets ; ++i) {
    int s = 1;
    for (int j = 0 ; j < m ; ++j) {
      if ( (i & (1 << a[j])) && (i & (1 << b[j])) ) {
        s = 0;
        break;
      }
    }
    ans += s;
  }
  return ans;
}

int main() {

  int N, M;
  scanf("%d%d", &N, &M);
  if (M == 0)
    printf("%d\n", 1 << N);
  else {
    for (int i = 0 ; i < M ; ++i) {
      scanf("%d%d", &a[i], &b[i]);
      a[i]--;
      b[i]--;
    }
    printf("%d\n", countSubsets(N,M) );
  }
  return 0;
}
