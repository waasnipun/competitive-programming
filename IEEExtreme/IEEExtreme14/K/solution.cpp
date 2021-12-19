#include <bits/stdc++.h>

using namespace std;

int hammingDist(string string1, string string2)
{
    int i = 0, count = 0;
    if((string1).size() != strlen(string2).size())
    {
        return 0;
    }
    
    //finding Hamming distance
    for(int i=0; string1[i]!=0; i++)
        if(string1[i] != string2[i])
            count++;
      return count;

int main() {
    int t;
    cin>>t;
    vector<string> ar;
    while(t--){
        string s;
        cin>>s;
        ar.push_back(s);
    }
    int output = 0 ;
    for(int i=0;i<(int)ar.size()-1;i++){
        for(int j=i+1;j<(int)ar.size();j++){
            if(hammingDist(ar[i],ar[j])==1){
                output++;
            }
        }
    }
    cout<<output<<endl;
}