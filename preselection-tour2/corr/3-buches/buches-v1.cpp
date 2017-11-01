

#include <bits/stdc++.h>

using namespace std;

void split(const string &s, const char* delim, vector<string> & v){
  // to avoid modifying original string
  // first duplicate the original string and return a char pointer then free the memory
  char * dup = strdup(s.c_str());
  char * token = strtok(dup, delim);
  while(token != NULL){
    v.push_back(string(token));
    // the call is treated as a subsequent calls to strtok:
    // the function continues from where it left in previous invocation
    token = strtok(NULL, delim);
  }
  free(dup);
}

int main() {
  ios::sync_with_stdio(false);
  int L;
  cin >> L;

  string s;
  cin >> s;

  vector<string> goods;
  split(s,"X",goods);

  cout << goods.size() << '\n';
  for (auto g: goods)
  if (!g.empty())
    cout << g << '\n';

  return 0;
}
