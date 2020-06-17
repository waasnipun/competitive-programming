#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[9];
    for(int i=0;i<t;i++){
        int oddSum=0,evenSum=0,oddCount=0,evenCount=0,zeroCount=0;
        vector<int> temp;
        for(int j=0;j<9;j++){
            cin>>arr[j];
            if((j+1)%2==1 && arr[j]>0){
                oddSum = oddSum + arr[j]*(j+1);
                oddCount = oddCount + arr[j];
                for(int h=0;h<arr[j];h++){
                    temp.push_back((j+1));
                }
                
            } 
            else if(arr[j]>0){
                evenSum = evenSum + arr[j]*(j+1);
                evenCount = evenCount + arr[j];
                for(int h=0;h<arr[j];h++){
                    temp.push_back((j+1));
                }
            }         
            else{
                zeroCount++;
            }  
        }
        if(zeroCount==8 && (oddCount+evenCount)%2==0){
            cout<<"Case #"<<i+1<<": "<<"YES"<<endl;
            continue;
        }
        else if(zeroCount==8 && (oddCount+evenCount)%2==1){
            cout<<"Case #"<<i+1<<": "<<"NO"<<endl;
            continue;
        }
        if(oddCount%2==1){
            cout<<"Case #"<<i+1<<": "<<"NO"<<endl;
            continue;
        }
        if(abs(oddSum-evenSum)==0){
            cout<<"Case #"<<i+1<<": "<<"YES"<<endl;
            continue;
        }
        int sum = 0;
        for(int k=0;k<temp.size();k++){
            for(int k=0;k<temp.size();k++){
                
        }
        }
        if(sum==8){
            cout<<"Case #"<<i+1<<": "<<"YES"<<endl;
            continue;
        }
        else{
            cout<<"Case #"<<i+1<<": "<<"NO"<<endl;
        }

    }
}