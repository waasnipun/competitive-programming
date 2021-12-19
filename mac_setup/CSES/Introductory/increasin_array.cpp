#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9 + 7;

//solution starts here
void solution() {
    int n,output=0;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            output+=(arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }

    }
    cout<<output<<endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
