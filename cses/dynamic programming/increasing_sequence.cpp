#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mod 1000000007
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n;
    vector<int> dp;
    for(int i=0;i<n;i++){
        cin>>t;
        auto it = lower_bound(dp.begin(),dp.end(),t);
        if(it==dp.end()){
            dp.pb(t);
        }
        else{
            *it = t;
        }
    }
    cout<<dp.size()<<endl;
}



