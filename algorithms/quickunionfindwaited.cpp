#include <bits/stdc++.h>
using namespace std;

#define int long long int

int n,m;
int* id;
int* sz;
int root(int i){
    while (i != id[i]){
        id[i] = id[id[i]];
        i = id[i];
    } 
    return i;    
}
bool connected(int p,int q){
    return root(p) == root(q);
}
void unionn(int p, int q){
    int i = root(p);
    int j = root(q);
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
