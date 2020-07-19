
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const  int mxn = 1e6, mod = 1e9+7;

vector<vector<int>> M(6,vector<int>(6,0));
vector<vector<int>> X(6,vector<int>(6,0));


vector<vector<int>> multiply(vector<vector<int>> F, vector<vector<int>> M){   
  vector<vector<int>> R(6,vector<int>(6,0));
    for(int i=0;i<6;i++){
      for(int j=0;j<6;j++){
        for(int k=0;k<6;k++){
            R[i][j] = (R[i][j]+F[i][k]* M[k][j]%mod)%mod;
            R[i][j]%=mod;
        }
      }
    }
  return R;
}
// Optimized version of power()
vector<vector<int>> power(vector<vector<int>>& F, int n){
    if(n == 0){
      vector<vector<int>> teamp(6,vector<int>(6,0));
      for(int i=0;i<6;i++) teamp[i][i] = 1;
      return teamp;
    }
    vector<vector<int>> u = power(F, n / 2);
    u = multiply(u, u);
    if (n % 2 != 0)
        u = multiply(u, F);
    return u;
}


//solution starts here
void solution(){
    for(int i=0;i<5;i++)X[i][i+1]= 1;
    for(int i=0;i<6;i++)X[5][i] = 1;
    int a;
    cin>>a;
    X = power(X,a);
    cout<<X[5][5]<<"\n";
    for(auto i:X){
      for(int j:i)
        cout<<j<<" ";
      cout<<endl;
    }
}

signed main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
