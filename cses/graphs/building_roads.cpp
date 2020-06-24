#include <bits/stdc++.h>
using namespace std;

long n,m;
long* id;

long root(long i){
    while (i != id[i]) i = id[i];
    return i;    
}
bool connected(long p,long q){
    return root(p) == root(q);
}
void unionn(long p, long q){
    long i = root(p);
    long j = root(q);
    id[i] = j;
}

int main(){
    cin>>n>>m;
    id = new long[n+1];
    for(long i=0;i<n;i++){
        id[i] = i;
    }
    while(m--){
        int a,b;
        cin>>a>>b;
        unionn(a,b);
    }
    vector<pair<int,int>> output;
    for(int i=1;i<=n;i++){
        if(!connected(i,n-i)){
            output.push_back({i,n-i});
            unionn(i,n-i);
        }
    }
    cout<<output.size()<<endl;
    for(auto i:output)
        cout<<i.first<<" "<<i.second<<endl;
}

