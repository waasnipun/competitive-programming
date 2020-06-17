#include<bits/stdc++.h>
using namespace std;


void pathfind(int connect[],int ver[],int a,int b){
    vector<int> path;
    vector<int> path2;
    int index = a-2;
    while(true){
        path.push_back(index+2);
        if(a==1){
            break;
        }
        if(connect[index]==1 ){
            path.push_back(1);
            break;
        }
        index = connect[index]-2;
    }
    index = b-2;
    while(true){
        path2.push_back(index+2);
        if(b==1){
            break;
        }
        if(connect[index]==1 ){
            path2.push_back(1);
            break;
        }
        index = connect[index]-2;
    }
    while(true){
        if(path[path.size()-2]==path2[path2.size()-2]){
            path.pop_back();
            path2.pop_back();
            continue;
        }
        else if(path[path.size()-2]!=path2[path2.size()-2]){
            break;
        }
        else{
           break; 
        }
    }
    path2.pop_back();
    int out=0;
    for(int i=0; i<path2.size(); i++){
            if(ver[path2[i]-1]==1){
                out++;
            }
    }
    for(int i=0; i<path.size(); i++){
            if(ver[path[i]-1]==1){
                out++;
            }
    }
    path.clear();
    path2.clear();
  cout<<out<<endl;
  /*for(int i=0; i<path.size(); i++){
        cout<<path[i];
    }
    cout<<""<<endl;
    for(int i=0; i<path2.size(); i++){
        cout<<path2[i];
    }
    cout<<""<<endl;*/

}
int main(){
    int n,q;
    cin>>n>>q;
    int ver[n];
    int connect[n-1];
    for(int i=0;i<n;i++){
        cin>>ver[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>connect[i];
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        pathfind(connect,ver,a,b);
    }
}