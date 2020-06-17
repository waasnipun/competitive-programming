#include <bits/stdc++.h>
using namespace std;

long n;
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
    cin>>n;
    id = new long[n];
    for(long i=0;i<n;i++){
        id[i] = i;
    }
    unionn(1,4);
    unionn(1,3);
    unionn(1,2);
    unionn(2,8);
    unionn(2,3);
    cout<<connected(2,3);
    cout<<connected(4,5);
}

