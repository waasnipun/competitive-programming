#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9 + 7;

//solution starts here
void solution() {
    string str;
    cin>>str;
    map<char,int> rec;
    for(char i:str){
        if(rec.find(i)==rec.end())
            rec[i] = 1;
        else
            rec[i]++;
    }
    int odd_count = 0;
    for(auto item:rec){
        if(item.second%2==1)
            odd_count++;
    }
    if(odd_count>1)
        cout<<"NO SOLUTION"<<endl;
    else{
        string first,middle,end;
        for(auto item:rec){
            if(item.second%2==1){
                middle = item.first;
                for(int i=0;i<item.second/2;i++)
                    first+=item.first;
            }
            else{
                for(int i=0;i<item.second/2;i++)
                    first+=item.first;
            }
        }
        end = string(first.rbegin(),first.rend());
        cout<<first+middle+end<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
