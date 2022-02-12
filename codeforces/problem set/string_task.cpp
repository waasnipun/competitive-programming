#include<bits/stdc++.h>
using namespace std;

using ll =long long;

bool isVowel(char s){
  vector<char> v = {'a','o','y','e','u','i'};
  for(char i:v){
    if(i==s){
      return true;
    }
  }
  return false;
}
int main(){
  string input;
  cin>>input;
  string output = "";
  for(char i:input){
    if(!isVowel(char(tolower(i)))){
      cout<<"."<<char(tolower(i));
    }
  }
}
