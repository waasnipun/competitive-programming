//
// Created by nipun waas on 2021-09-02.
//

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;


string stringSort(string input){
    sort(input.begin(),input.end());
    return input;
}
//solution starts here
void solution(){
    int t;
    cin>>t;
    while(t--){
        string in;
        cin>>in;
        map<string, int> rec;
        int output = 0;
        string temp_string;
        vector<string> combinations;
        for(int i=0;i<in.size();i++){
            temp_string = "";
            for(int j=i;j<in.size();j++){
                temp_string+=in[j];
                combinations.push_back(stringSort(temp_string));
            }
        }
        for(int i=0;i<combinations.size()-1;i++){
            for(int j=i+1;j<combinations.size();j++){
                if(combinations[i]==combinations[j])
                    output++;
            }
        }
        cout<<output<<endl;

    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
