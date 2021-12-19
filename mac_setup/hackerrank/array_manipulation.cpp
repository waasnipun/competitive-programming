//
// Created by nipun waas on 2021-08-30.
//

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n+1,0);
    for(int i=0;i<m;i++){
        int a,b,k;
        cin>>a>>b>>k;
        arr[a] += k;
        if(b<=n) arr[b+1] += -k;
    }
    int output = 0, sum = 0;
    for(int i:arr){
        sum+=i;
        output = max(output,sum);
    }
    cout<<output<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}

