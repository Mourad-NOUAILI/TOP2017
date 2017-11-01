#include <bits/stdc++.h>

using namespace std;

void readMatrix (vector <vector<char> > & m, int L , int C){
  for (int li = 0 ; li < L ; ++li) {
    vector<char> row;
    for (int ci = 0 ; ci < C ; ++ci) {
      char p;
      cin >> p;
      row.push_back(p);
    }
    m.push_back(row);
  }
}

int computeTranslation(vector <vector<char> > & m, int L, int C){
  int minTrans = 1000000;
  for (int ci = 0 ; ci < C ; ++ci){
    int trans = 0;
    for (int li = L-1 ; li >= 0 ; --li)
      if (m[li][ci] == '.')
        trans ++;
    minTrans = min(minTrans,trans);
  }
  return minTrans;
}

void translate (vector <vector<char> > m, int L, int C, vector <vector<char> > & tm, int trans){
  for (int li = 0 ; li < L ; ++li) {
    for (int ci = 0 ; ci < C ; ++ci) {
      if (m[li][ci] == 'X') {
        tm[li+trans][ci] = 'X';
        if (tm[li][ci] !=  'X')
          tm[li][ci] = '.';
      }
      if (m[li][ci] == '.') {
        if (tm[li][ci] != 'X')
          tm[li][ci] = '.';
      }
      if (m[li][ci] == '#')
          tm[li][ci] = '#';
    }
  }
}

void display(vector <vector<char> > m, int L, int C){
  for (int li = 0 ; li < L ; ++li){
    for (int ci = 0 ; ci < C ; ++ci)
      cout << m[li][ci];
    cout << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  int L, C;
  cin >> L >> C;

  vector <vector<char> > m;
  readMatrix(m,L,C);

  int trans = computeTranslation(m,L,C);

  vector <vector<char> > tm(L,vector<char> (C));
  translate(m,L,C,tm,trans);

  display(tm,L,C);
  return 0;
}
