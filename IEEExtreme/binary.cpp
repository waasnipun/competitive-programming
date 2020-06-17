#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int n;
    int mode = pow(10,9)+7;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int connection[n+1];
    int distance[n+1];
    for(int i=0;i<n+1;i++){
        connection[i] = i+1;
        distance[i] = 0;
    }
    for(int i=0;i<n-1;i++){
        connection[arr[i][1]] = arr[i][0];
        distance[arr[i][1]] = arr[i][2];
    }
    
    int distanceOut = 0;
    connection[1] = 0;
    for(int i=1;i<n+1;i++){
        for(int j=i+1;j<n+1;j++){
                int temp = j;
                while(true){
                    distanceOut = distanceOut + distance[temp];
                    temp = connection[temp];
                    if(connection[temp]==1 || temp ==1){
                       // cout<<"broke"<<endl;
                        break;
                    }
                    
                }
                //break;
            
            
        }
        
    }
    cout<<distanceOut%mode;
   /* for(int i=0;i<n+1;i++){
        cout<<connection[i];
    }*/
}