#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const int WIDTH=135;
const int MAX_LEN=30;
const int ASCII_MIN=33;
const int ASCII_MAX=126;
const int SPEED=200;
 
int main() {
    vector<bool> is_char(WIDTH,0);
    vector<int> len_list(WIDTH,1);
    int cnt=0;
    cout<<"\033[1;32m";

    while (true){
        cnt++;
        rep(i,WIDTH){
            if(cnt%len_list.at(i)==0){
                len_list.at(i)=rand()%MAX_LEN+1;
                is_char.at(i)=!is_char.at(i);
            }
        }
        string S="";
        rep(i,WIDTH){
            if(is_char.at(i))S+=char(rand()%(ASCII_MAX-ASCII_MIN+1)+ASCII_MIN);
            else S+=" ";
            S+=" ";
        }
        cout<<S<<endl;
        Sleep(10000/SPEED);
    }

}