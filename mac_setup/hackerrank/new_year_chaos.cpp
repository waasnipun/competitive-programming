//
// Created by nipun waas on 2021-08-27.
//

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//solution starts here
void solution(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int output = 0;
        bool isChaotic = false;
        for(int i=n-1;i>=0;i--){
           if(arr[i]!=(i+1)){
               if(arr[i-1]==(i+1)){
                   swap(&arr[i],&arr[i-1]);
                   output++;
               }
               else if(arr[i-2]==(i+1)){
                   swap(&arr[i],&arr[i-2]);
                   swap(&arr[i-1],&arr[i-2]);
                   output+=2;
               }
               else{
                   cout<<"Too chaotic"<<endl;
                   isChaotic = true;
                   break;
               }

           }
        }
        if(!isChaotic)
            cout<<output<<endl;


    }

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}

