#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }        
    }
    while(true){
        if(n%2==0){
            n=n/2;
        }
        else if(n%2==1 || n==2){
            break;
        }
    }
    while(true){
        int count = 0;
        for(int j=0;j<n;j++){
            if(matrix[0][j] == matrix[j][n]){
                count++;
            }            
        }
        if(count==n){
            cout<<n<<endl;
            break;
        }
        else{
            n = n*2;
        }
    

    }

}