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
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s = 0,max_sum =-INF;
    for(int i=0;i<n;i++){
        s+=a[i];
        max_sum =max(max_sum,s);
        if(s<0)
            s=0;
    }
    cout<<max_sum<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
