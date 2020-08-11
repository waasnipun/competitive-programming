#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=30)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            int a=6,b=10,c=14,d;
            if(n-30==a){
                c++;
                d = n-30-1;
            }
            else if(n-30==b){
                c++;
                d = n-30-1;
            }
            else if(n-30==c){
                c++;
                d = n-30-1;
            }
            else{
                d = n-30;
            }
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        }
    }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
