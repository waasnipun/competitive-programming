#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9 + 7;

//solution starts here
void solution() {
    int n;
    cin>>n;
    if(n==1)
        cout<<1<<endl;
    else{
        while(n!=1){
            cout<<n<<" ";
            if(n%2==0){
                n = n/2;
            }
            else{
                n = 3*n+1;
            }
        }
        cout<<1<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
