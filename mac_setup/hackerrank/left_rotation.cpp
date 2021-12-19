//
// Created by nipun waas on 2021-08-26.
//

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    int n,d;
    cin>>n>>d;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> output(arr.begin()+d,arr.end());
    output.insert(output.end(), arr.begin(), arr.begin()+d);
    for(int i:output)
        cout<<i<<" ";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
