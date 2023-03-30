#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    string s;
    cin>>s;
    vector<int> a(200000);
    int pos=100000;
    stack<int> st;
    rep(i,s.size()){
        switch (s.at(i))
        {
        case '<':
            pos--;
            break;
        case '>':
            pos++;
            break;
        case '+':
            a.at(pos)++;
            break;
        case '-':
            a.at(pos)--;
            break;
        case '[':
            st.push(i);
            break;
        case ']':
            if(a.at(pos)){
                i=st.top();
            }else st.pop();
            break;
        case ',':
            char c;
            cin>>c;
            a.at(pos)=c;
            break;
        case '.':
            cout<<char(a.at(pos));
            break;
        default:
            break;
        }
    }
}
