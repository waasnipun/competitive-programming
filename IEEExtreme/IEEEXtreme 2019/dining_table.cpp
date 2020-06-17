#include<bits/stdc++.h>
using namespace std;

int main(){
    long p,q,r;
    cin>>p;
    cin>>q;
    cin>>r;
    int id[p];
    for(int i=0;i<p;i++){
        cin>>id[i];
    }
    vector<int> idnew;
    for(int i=0;i<p;i++){
        idnew.push_back(id[i]);
    }
    for(int i=0;i<q-1;i++){
        idnew.push_back(id[i]);
    }
    vector<int> minID;
    vector<int> temp;
    for(int i=0;i<p;i++){
        for(int j=i;j<i+q;j++){
            temp.push_back(idnew[i]);
        }
        //temp(minID.begin()+i,minID.begin()+i+q);
        //cout<<temp[0];
        sort(temp.begin(),temp.end()); 
        //cout<<temp[0];
        minID.push_back(temp[r-1]);
        temp.erase (temp.begin(),temp.end());
    }
    int min = minID[0];
    //cout<<min;
    for(int i : minID) {
        if(i<min){
            min = i;
        }
    }
    
    cout<<min;
}