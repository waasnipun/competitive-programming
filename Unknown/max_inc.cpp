#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int  main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int output = 1,count = 1;
    for(int i=1;i<t;i++){
        if(arr[i]>arr[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        output = max(output,count);
    }
    cout<<output<<endl;
}

