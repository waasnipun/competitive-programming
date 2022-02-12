#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int expandFromMiddle(string s,int left,int right,int n){
    while(0<=left && right<n && s[left]==s[right] && s.at(left)=='0'){
        left--;
        right++;
    	}
    return right-left-1;
	}
int  main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int counter = 0;
		int output = 0;
		while(true){
			if(counter==0 || counter==n-1){
				if(expandFromMiddle(s,counter,counter,n)==(k-1)){
					output++;
					if(counter==n-1)
						break;
					counter+=(k-1);
					cout<<"eye"<<endl;
					continue;
				}
			}
			else if(expandFromMiddle(s,counter,counter,n)==(2*k+1)){
				output++;
				counter+=(k+1);
				continue;
			}
			counter++;
			if(counter==n){
				break;
			}
		}
	cout<<output<<endl;

	}    
}
