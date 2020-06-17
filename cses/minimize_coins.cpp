////fails in  3 test cases
// #include<bits/stdc++.h>
// using namespace std;

// #define big 1000000007
// using ll = long long;

// ll coinscount(vector<ll> arr,ll start,ll target){
// 	ll n = arr.size();
// 	ll output = 0;
// 	ll count = start;
// 	while(count>=0){
// 		target-=arr[count];
// 		output++;
// 		if(target<0){
// 			target+=arr[count];
// 			count--;
// 			output--;
// 		}
// 		else if(target==0){
// 			return output;
// 		}
		
// 	}
// 	return -1;
// }
// int  main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n,k;
//     cin>>n>>k;
//     vector<ll> arr(n,0);
//     for(ll i=0;i<n;i++){
//     	cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
//     bool ok = false;
//     ll minimum = big;
//     for(ll i=n-1;i>=0;i--){
//     	ll out = coinscount(arr,i,k);
//     	if(out<minimum && out!=-1){
//     		ok = true;
//     		minimum = out;
//     	}
//     }
//     if(!ok)
//     	cout<<-1<<endl;
//     else
//     	cout<<minimum;
// }


// correct solution using dp
#include<bits/stdc++.h>
using namespace std;

#define big 1000000000
using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n,0);
    for(ll i=0;i<n;i++){
    	cin>>arr[i];
    }
    vector<ll> dp(k+1,big);
    dp[0] = 0;
    for(int i=1;i<=k;i++){
    	for(int j=0;j<n;j++){
    		if(i-arr[j]>=0){
    			dp[i] = min(dp[i],dp[i-arr[j]]+1);
    		}
    	}
    }
    if(dp[k]==big)
    	cout<<-1<<endl;
    else
    	cout<<dp[k]<<endl;

}