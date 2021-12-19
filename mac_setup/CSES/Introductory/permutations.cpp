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
    vector<int> arr(n,0);
    if(n==1)
        cout<<1;
    else if(n==4)
        cout<<"2 4 1 3";
    else if(n<5)
        cout<<"NO SOLUTION"<<endl;
    else{
        int counter = 0;
        for(int i=1;i<n+1;i++){
            arr[counter] = i;
            counter += 2;
            if(counter>=n)
                counter = 1;
        }
        for(int i:arr)
            cout<<i<<" ";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
