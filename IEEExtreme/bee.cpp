#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int n,m;
    cin>>n>>m;
    int bee[n][m];
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>bee[i][j];
        }
    }
    for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<bee[i][j];
            }
            cout<<""<<endl;
        }
    /*int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int p,i1,i2;
        cin>>p>>i1>>i2;
        if(p=='k'){
            //do this
        }
        else if(p=='a'){
            bee[i1-1][i2-1] = 1; 
        }*/
        
    }

