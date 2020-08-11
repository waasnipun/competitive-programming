//Hard problem
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
    vector<string> d(n,"");
    for(int i=0;i<n;i++)
        cin>>d[i];
    int out =0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            string x = d[i];
            string y = d[j];
            int xl = x.size(),yl = y.size();
            vector<vector<int>> dp(xl+1,vector<int>(yl+1,0));
            int max_count = 0;
            bool cont = true;
            for(int xc=1;xc<=xl;xc++){
                for(int yc=1;yc<=yl;yc++){
                    if(x[xc-1]==y[yc-1]){
                        if(xc==1){
                            dp[xc][yc] = dp[xc-1][yc-1]+1;
                        }
                        else{
                            dp[xc][yc]= max(dp[xc-1][yc-1],dp[xc-1][yc-2])+1;
                        }
                        if(dp[xc][yc]==min(xl,yl)){
                            out++;
                            cont = false;
                            break;
                        }
                    }
                }
                if(!cont)
                    break;
            }
        }
    }
    cout<<out<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
