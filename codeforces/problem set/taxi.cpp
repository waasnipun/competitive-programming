#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int  main(){
    int t;
    cin>>t;
    int ones=0,twos=0,threes=0;
    int output = 0;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n==1){
        	ones++;
        }
        else if(n==2){
        	twos++;
        }
        else if(n==3){
        	threes++;
        }
        else{
        	output++;
        }
    }
    if(threes>=ones){
    	output+=ones;
    	output += (threes-ones);
    	ones = 0;
    }
    else if(threes<ones){
    	output+=threes;
    	ones = ones-threes;
    }
    output+=(twos/2);
    twos = twos%2;
    if(ones>0 && twos>0){
    	output++;
    	ones-=2;
    	if(ones<0){
    		ones = 0;
    	}
    	twos = 0;
    }
    if(ones>0 && twos==0){
    	output+=(ones/4);
    	ones = ones%4;
    	if(ones>0){
    		output++;
    	}
    	ones = 0;
    }
    if(ones==0 && twos>0){
    	output++;
    	twos = 0;
    }

    cout<<output<<endl;
}
