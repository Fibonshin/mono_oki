#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string s;
    getline(cin,s);
    cout<<">>+++++[<+++++>-]<[<++++>-]";
    int cur=100;
    for(char c:s){
        int n=sqrt(abs(c-cur));
        char a=c-cur>0?'+':'-';
        rep(i,n)cout<<'+';
        cout<<"[<";
        rep(i,n)cout<<a;
        cout<<">-]<";
        rep(i,abs(cur-c)-n*n)cout<<a;
        cout<<".>";
        cur=c;
    }
}
