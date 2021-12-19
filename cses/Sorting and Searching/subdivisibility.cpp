#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

int count_subarray(int arr[], int n, int k){
   int mod[k];
   memset(mod, 0, sizeof(mod));
   int cumSum = 0;
   for (int i = 0; i < n; i++) {
      cumSum += arr[i];
      mod[((cumSum % k) + k) % k]++;
   }
   int result = 0;
   for (int i = 0; i < k; i++)
      if (mod[i] > 1)
         result += (mod[i] * (mod[i] - 1)) / 2;
   result += mod[0];
   return result;
}
//solution starts here
void solution(){
    int sums = 0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<count_subarray(arr,n,n);
}
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}

