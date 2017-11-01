#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string buche;
vector<string> res;
int main()
{
    int l;
  cin>>l;
  cin>>buche;

  for(int i=0;i<l;i++) {
    string curr="";
    while(buche[i]=='O') {
        curr+='O';
        i++;
    }
    if(curr.size()!=0) {
        res.push_back(curr);
    }
  }
  cout<<res.size()<<'\n';
  for(int i=0;i<res.size();i++) {
    cout<<res[i]<<'\n';
  }

}
