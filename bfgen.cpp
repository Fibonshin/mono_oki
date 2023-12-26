#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string s;
    getline(cin,s);
    cout<<">>+++++[<+++++>-]<[<++++>-]";
    int cur=100;
    int init=1;
    for(char c:s){
        int n=sqrt(abs(c-cur));
        if(init)init=0;
        else if(n)cout<<">";
        char a=c-cur>0?'+':'-';
        rep(i,n)cout<<'+';
        if(n)cout<<"[<";
        rep(i,n)cout<<a;
        if(n)cout<<">-]<";
        rep(i,abs(cur-c)-n*n)cout<<a;
        cout<<".";
        cur=c;
    }
    cout<<endl;
}
