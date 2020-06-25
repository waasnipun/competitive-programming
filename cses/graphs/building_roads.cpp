#include <bits/stdc++.h>
using namespace std;

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

int main(){
    cin>>n>>m;
    id = new int[n+1];
    sz = new int[n+1];
    for(int i=1;i<=n;i++){
        id[i] = i;
        sz[i] = 1;
    }
    while(m--){
        int a,b;
        cin>>a>>b;
        unionn(a,b);
    }
    vector<int> output;
    for(int i=1;i<=n;i++){
        if(i==id[i]){
            output.push_back(i);
        }
    }
    cout<<output.size()-1<<endl;
    for(int i=0;i< output.size()-1;i++)
        cout << output[i] << " " << output[i+1] <<endl;
}

