#include <bits/stdc++.h>

using namespace std;

int countSubsets(vector <int> v, int n, vector<pair<int,int> > pairIng) {
  int numberSubsets = 1 << n;
  int toDelete = 0;
  for (int i = 0 ; i < numberSubsets ; ++i) {
    vector <int> aSet;
    for (int j = 0 ; j < n ; ++j) {
      if ( (i & (1 << j)) != 0 )
        aSet.push_back(v[j]);
    }

    for(auto k: aSet)
        cout << '+'<< k << ' ';
      cout << '\n';

    vector<pair<int,int> >::iterator it;
    int c = 0;
    for (it = pairIng.begin() ; it != pairIng.end() ; ++it){
      int c1 = count(aSet.begin(),aSet.end(),it->first);
      int c2 = count(aSet.begin(),aSet.end(),it->second);
      if (c1 == 1 && c2 == 1)
        c += (c1 + c2);
    }
   if (c != 0)
      toDelete++;
  }
  return numberSubsets - toDelete;
}


int main() {
  ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;

  vector<pair<int,int> > pairIng;
  for (int mi = 0 ; mi < M ; ++mi) {
    int m1, m2;
    cin >> m1 >> m2;
    pairIng.push_back(make_pair(m1,m2));
  }

  if (M == 0)
    cout << (1 << N) << '\n';
  else {
    vector<int> v;
    for (int i = 1 ; i <= N ; ++i)
      v.push_back(i);
    cout << countSubsets(v,N,pairIng) << '\n';
  }
  return 0;
}
