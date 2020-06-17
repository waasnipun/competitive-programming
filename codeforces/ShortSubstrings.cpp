#include<bits/stdc++.h>
using namespace std;

using ll =int long long;


int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
  	string b;
  	cin>>b;
  	int n = b.size();
  	char a[n];
  	strcpy(a, b.c_str()); 
  	string output = "";
    output+=a[0];
  	for(int j=1;j<n-1;j+=2){
  		output+=a[j];
  	}
  	output+=a[n-1];

  	cout<<output<<endl;
  }
}
