#include <bits/stdc++.h>
using namespace std;

long n,m;
long* id;
long* sz;
long root(long i){
    while (i != id[i]){
        id[i] = id[id[i]];
        i = id[i];
    } 
    return i;    
}
bool connected(long p,long q){
    return root(p) == root(q);
}
void unionn(long p, long q){
    long i = root(p);
    long j = root(q);
    if(i==j)return;
    if(sz[i]<=sz[j]){
        id[i]= j;
        sz[j]+=sz[i];
    }
    else{
        id[j]= i;
        sz[i]+=sz[j];
    }
}
