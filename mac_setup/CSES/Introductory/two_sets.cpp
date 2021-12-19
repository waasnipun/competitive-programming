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
    int one_set_total = n*(n+1)/4;
    int two_set_total = one_set_total;
    vector<int> set_one,set_two;
    for(int i=n;i>=1;i--){
        if(one_set_total>two_set_total){
            one_set_total-=i;
            set_one.pb(i);
        }
        else{
            two_set_total-=i;
            set_two.pb(i);
        }
    }
    if(one_set_total==0 && two_set_total==0){
        cout<<"YES"<<endl;
        cout<<set_one.size()<<endl;
        for(int i: set_one)
            cout<<i<<" ";
        cout<<endl;
        cout<<set_two.size()<<endl;
        for(int i: set_two)
            cout<<i<<" ";
        cout<<endl;
    }
    else
        cout<<"NO"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
