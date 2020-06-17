#include<bits/stdc++.h>
using namespace std;

int  compute(int scale,int arr[],int m,int n){
    int check = 0;
    for(int i=0;i<m;i++){
        if(arr[i]%scale==0){
            check++;
        }
    }
    return (n/scale)-check;
}

int main(){
    int t,n,m,q;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m>>q;
        int rem[m];
        for(int j=0;j<m;j++){
            cin>>rem[j];
        }
        int out=0;
        for(int j=0;j<q;j++){
            int temp;
            cin>>temp;
            out = out +compute(temp,rem,m,n);
        }
        cout<<out<<endl;
    }
}