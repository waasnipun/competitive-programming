#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    int n;
    cin>>n;
    stack<pair<int,int>> s;
    int arr[n];
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        while(!s.empty() && s.top().second>=t){
            s.pop();
        }
        if(s.empty())
            arr[i]= 0;
        else
            arr[i] = s.top().first+1;
        s.push({i,t});
    }
    for(int i:arr)
        cout<<i<<" ";
}
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
