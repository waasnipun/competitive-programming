//
// Created by nipun waas on 2021-08-31.
//

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        map<char,bool> list;
        for(auto i: a){
            list[i] = true;
        }
        bool isPossible = false;
        for(char i: b){
            if(list.find(i)!=list.end()){
                isPossible = true;
                break;
            }
        }
        if(isPossible)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
