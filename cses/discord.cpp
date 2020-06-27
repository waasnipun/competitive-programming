#include <bits/stdc++.h> 
using namespace std; 

#define mod 1000000007
using ll = long long;


int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)
    		arr[i][j] = i+j+2;
    while(m--){
    	int b;
    	char a;
    	cin>>a>>b;
    	int sum = 0;
    	if(a=='R'){
    		for(int i=0;i<n;i++){
    			sum+=arr[b-1][i];
    			arr[b-1][i] = 0;
    		}
    		cout<<sum<<endl;
    	}
    	else{
    		for(int i=0;i<n;i++){
    			sum+=arr[i][b-1];
    			arr[i][b-1] = 0;
    		}
    		cout<<sum<<endl;
    	}
    }
}