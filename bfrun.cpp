#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string s;
    cin>>s;
    vector<int> a(200000);
    int pos=100000;
    int skip=0;
    stack<int> st;
    rep(i,s.size()){
        sleep(0.01);
        switch (s.at(i))
        {
        case '<':
            if(skip)break;
            pos--;
            break;
        case '>':
            if(skip)break;
            pos++;
            break;
        case '+':
            if(skip)break;
            a.at(pos)++;
            break;
        case '-':
            if(skip)break;
            a.at(pos)--;
            break;
        case '[':
            if(!a.at(pos))skip++;
            else st.push(i);
            break;
        case ']':
            if(skip)skip--;
            else{
                i=st.top()-1;
                st.pop();
            }
            break;
        case ',':
            if(skip)break;
            char c;
            cin>>c;
            a.at(pos)=c;
            break;
        case '.':
            if(skip)break;
            cout<<char(a.at(pos))<<flush;
            break;
        default:
            break;
        }
    }
    cout<<endl;
}
