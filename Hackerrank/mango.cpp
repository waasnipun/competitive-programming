#include <bits/stdc++.h> 
using namespace std; 

void solve(long long num){
    long long answ = 1;
    long long scale = 1;
    long long mod = 1000000007;
    for(long long i=0;i<num-1;i++){
        answ = answ + scale;
        //cout<<answ<<" "<<scale;
        if(i%2==1){
            scale = scale*2;            
        }
    }
   cout<<answ%mod<<endl;
}
int main(){
    long long t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        solve(n);
    }

}