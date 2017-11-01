#include <bits/stdc++.h>
using namespace std;
int a,b;
char t[3003][3003];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>a>>b;
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            cin>>t[i][j];

    int depth=3000;
    for(int j=0;j<b;j++) {
        int bloc=0,terre=0;
        for(int i=0;i<a;i++) {
            if(t[i][j]=='X') bloc=i;
            if(t[i][j]=='#') {
                terre=i;
                break;
            }
        }
        if(bloc) depth=min(depth, terre-bloc-1);
    }
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            if(t[i][j]=='#') cout<<'#';
            else if( i-depth>=0 and t[i-depth][j]=='X') cout<<'X';
            else cout<<'.';
        }
        cout<<'\n';
    }
}
