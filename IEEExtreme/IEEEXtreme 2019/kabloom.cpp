#include<bits/stdc++.h>
using namespace std;

int count(char one[],char second[],int s,int e,int n){
    for(int i=s;i<=e;i++){
        
    }
}
int search(char arr[], int l, int r, char x) 
{ 
    int index = -1;
    for(int i=l;i<=r;i++){
        if(x==arr[i]){
            index = i;
            break;
        }
    }
    return index;
    
} 

int main(){
    int n=1;
    while(n!=0){
        cin>>n;
        if(n==0){
            break;
        }
        char first[n],second[n];
        for(int i=0;i<n;i++){
            cin>>first[i];
        }
        for(int i=0;i<n;i++){
            cin>>second[i];
        }

        if(search(first,0,n-1,'R')!= -1 && search(second,0,n-1,'R')!= -1){
            int a = search(first,0,n-1,'R');
            int b = search(second,0,n-1,'R');
            int min = (a>b)?b:a;
            cout<<min;
        }
        
    }

}