#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int  main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        ll n,m;
        cin>>n>>m;
        ll arr[n];
        ll m_m = m;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        ll output = 0;
        ll counter = 0;
        for(int j=1;j<n;j++){
            if(arr[j]==arr[j-1]-1){
                counter++;
            }
            else{
                counter = 0;
            }
            if(arr[j]==1 && counter>=m-1){
                output++;
            }
        }
        
        cout<<"Case #"<<i+1<<": "<<output<<endl;   
    }
}