#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    vector<string> arr;
    string temp;
    while(!getline(cin,temp)){
        arr.push_back(temp);
    }
    for(int i=0;i<200;i++){
        for(int j=i+1;j<200;j++){
            int a = stoi(arr[i]);
            int b = stoi(arr[j]);
            if(a+b==2020){
                cout<<a*b<<endl;
            }
        }
    }
    cout<<arr.size()<<endl;

}
