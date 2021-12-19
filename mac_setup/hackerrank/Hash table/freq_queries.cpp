//
// Created by nipun waas on 2021-09-06.
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
    map<int,int> rec,freq;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            if(rec.find(b)==rec.end()){
                rec[b] = 1;
                if(freq.find(rec[b])==freq.end()) freq[rec[b]] = 1;
                else freq[rec[b]]++;
            }
            else{
                freq[rec[b]]--;
                rec[b]++;
                if(freq.find(rec[b])==freq.end()) freq[rec[b]] = 1;
                else freq[rec[b]]++;
            }
        }
        else if(a==2){
            if(rec.find(b)!=rec.end()){
                freq[rec[b]]--;
                rec[b]--;
                if(freq.find(rec[b])==freq.end()) freq[rec[b]] = 1;
                else freq[rec[b]]++;
            }
        }
        else{
            if(freq[b]>0)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
//        if(a!=3){
//            cout<<endl;
//            cout<<"-------- "<<endl;
//            for(auto i:rec){
//                cout<<i.first<<" "<<i.second<<" "<<endl;
//            }
//            cout<<"***********"<<endl;
//            for(auto i:freq){
//                cout<<i.first<<" "<<i.second<<" "<<endl;
//            }
//            cout<<" --------"<<endl;
//            cout<<endl;
//        }

    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}


