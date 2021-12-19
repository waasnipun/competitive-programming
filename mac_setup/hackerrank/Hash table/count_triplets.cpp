//
// Created by nipun waas on 2021-09-04.
//

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    int n,r,t;
    cin>>n>>r;
    map<int,int> rec1,rec2;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>t;
        arr[i] = t;
    }
    int output = 0;
    for(int i:arr){
        output += rec2[i];
        rec2[i*r] += rec1[i];
        rec1[i*r] += 1;
    }
    cout<<output<<endl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
