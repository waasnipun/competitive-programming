//
// Created by nipun waas on 2021-08-28.
//

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//solution starts here
void solution(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    map<int,int> pos;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pos[arr[i]] = i;
    }
    int output = 0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=(i+1)){
            int current_item = arr[i];
            swap(&arr[i],&arr[pos[i+1]]);
            pos[current_item] = pos[i+1];
            pos[i+1] = i;
            output++;
        }
    }
    cout<<output<<endl;


}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}

