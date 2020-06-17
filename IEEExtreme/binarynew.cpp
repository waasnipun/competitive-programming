#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int distance = 0;
    for(int i=0;i<n-1;i++){
        distance = distance + (arr[i][2]*arr[i][2]);
    }
    cout<<distance;
    
}