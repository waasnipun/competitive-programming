#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> out;
    for(int i=0;i<t;i++){
        string at,bt,ct;
        cin>>at>>bt>>ct;
        string s(at);
        string x(bt);
        string y(ct);
        int possible = 0;
        vector<char> a(s.begin(), s.end());
        vector<char> b(x.begin(), s.end());
        vector<char> c(y.begin(), s.end());
        for(int j=0;j<a.size();j++){
            if(c[j]==a[j] || c[j]==b[j]){
                possible++;
            }
        }
        if(possible==a.size()){
            out.push_back("YES");
            //cout<<"YES"<<endl;
        }
        else{
            out.push_back("NO");
            //cout<<"NO"<<endl;
        }
    }
    for(int i=0;i<out.size();i++){
        cout<<out[i]<<endl;
    }
}