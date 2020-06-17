#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int newarray[] = {1,6,7,4,5,23,22,17,900,4,1,2};
    vector <int> myvector(newarray,newarray+12);
    sort(myvector.begin(),myvector.end());
    for(int i=0;i<myvector.size();i++){
        cout<<myvector[i]<<" ";
    }

    
}
