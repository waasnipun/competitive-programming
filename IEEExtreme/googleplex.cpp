#include <bits/stdc++.h> 
#include <cmath>
using namespace std; 


long long dmod(long long x, long long y) {
    return x - (int)(x/y) * y;
}

int main(){
    long long google = (1000);
    //cout<<x;
    int t;
    cin>>t;
    long long min = 1e+100;
    for(int i=0;i<t;i++){
        long long x,y;
        cin>>x>>y;
        for(long long T=4;T<50;T++){
            long long answer = pow(x,T);
            long long temp = pow(10,y);
            answer = dmod(answer,temp);
            if(answer<min){
                min = answer;
            }
        }
        cout<<min<<endl;

    }
}