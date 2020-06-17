#include<bits/stdc++.h>
using namespace std;

using ll =long long;


int main(){
  string s;
  cin>>s;
  vector<char> arr;
  for(int i=0;i<s.size();i+=2){
  	arr.push_back(s[i]);
  }
  sort(arr.begin(),arr.end());
  for(int i=0;i<arr.size()-1;i++){
  	cout<<arr[i]<<'+';
  }
  cout<<arr[arr.size()-1];
}
