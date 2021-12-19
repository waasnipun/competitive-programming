#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7, mnn = -1e6;

//solution starts here
void solution(){
    vector<vector<int>> arr(6,vector<int>(6,0));
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    int max_output = mnn;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int temp_sum = accumulate(arr[i].begin()+j, arr[i].begin()+j+3, 0);
            temp_sum += arr[i+1][j+1];
            temp_sum = temp_sum + accumulate(arr[i+2].begin()+j, arr[i+2].begin()+j+3, 0);
            max_output = max(max_output, temp_sum);
        }
    }
    cout<<max_output<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
