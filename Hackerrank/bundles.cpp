#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int n;
    cin>>n;
    vector<int> pos;
    vector<int> h;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        pos.push_back(t);
    }
    int max = *max_element(pos.begin(), pos.end());
    for(int i=0;i<max;i++){
        h.push_back(0);
    }
    for(int i=0;i<n;i++){
        int temp ;
        cin>>temp;
        h[pos[i]-1] = temp;
    }
    /*for(int i=0;i<8;i++){
        cout<<h[i]<<" ";
    }*/
    int count = 0;
    int leftTrue = 0;
    while(true){
        int left = pos[count]+h[count];
        if(count>=pos[n-1]){
            leftTrue = 1;
            //cout<<"LEFT";
            break;
        }
        else{
            count = count + left;
        }
        
    }
    int count_new = max-1;
    int rihtTrue = 0;
    while(true){
        int right = pos[count_new]-h[count_new];
        if(count_new>=pos[0]){
            if(leftTrue = 1){
                leftTrue = 2;
                rihtTrue = 5;
            }
            //cout<<"RIGHT";
            break;
        }
        else{
            count_new = count_new - right;
        }        
    }
    if(leftTrue == 1){
        cout<<"LEFT"<<endl;
    }
    else if(leftTrue == 2){
        cout<<"BOTH"<<endl;
    }
    if(rihtTrue == 1){
        cout<<"RIGHT"<<endl;
    }
}