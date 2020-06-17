#include <bits/stdc++.h> 
using namespace std; 

string repeat(string s, int n) 
{  
    string s1 = s; 
  
    for (int i=1; i<n;i++) 
        s += s1; 
  
    return s; 
} 

int main(){
    int n,ncopy;
    cin>>n;
    ncopy = n;
    while(true){
        n = n/2;
        if(n%2==1){
            break;
        }
    }
    int init = n;
    int count = 0;
    string out = "";
    int check = 1;
    int val = ncopy/n;
    int iter = 0;
    while(true){
        if(count%2==check){
            for(int i=0;i<init;i++){
                out = out+"Y";                
            }   
            count ++;         
            check = 1;
        }
        else{
            for(int i=0;i<init;i++){
                out = out+"y";
            }     
            check = 0;
        }
        iter++;
        if(iter==val){
            break;
            }
            
    }
    cout<<out;
}