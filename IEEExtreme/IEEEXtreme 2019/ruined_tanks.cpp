#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int cost(int x,int y, int len){
    if(x<y){
        return x*len;
    }
    else{
        return y*len;
    }
}
int main(){
    int n;
    cin>>n;
    int max_value = 0;
    int values[n];
    for(int i=0;i<n;i++){
        cin>>values[i];
    }
    int length = n-1;
    for(int i = length; i>0 ; i--){
        for(int j=0;j<n;j++){
            if(j+i==length){
                if(max_value<cost(values[j],values[i+j],i)){
                    max_value = cost(values[j],values[i+j],i);
                }
                break;
            }
            else{
                if(max_value<cost(values[j],values[i+j],i)){
                    max_value = cost(values[j],values[i+j],i);
                }
            }
        }
    }
    cout<<max_value;
}