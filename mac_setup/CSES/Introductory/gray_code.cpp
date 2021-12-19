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
    n--;
    vector<string> L1 = {"0","1"};
    vector<string> L2 = {"1","0"};
    while(n--){
        for(int i=0;i<L1.size();i++)
            L1[i] = "0"+L1[i];
        for(int i=0;i<L2.size();i++)
            L2[i] = "1"+L2[i];
        L1.insert(L1.end(),L2.begin(),L2.end());
        L2 = L1;
        reverse(L2.begin(),L2.end());
    }
    for(int i=0;i<L1.size();i++)
        cout<<L1[i]<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
