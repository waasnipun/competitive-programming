#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n){
  vector<int> x;
  vector<int> y{30};
  int last_elementx,last_elementy;
  x.push_back(arr[0]);
  int answer;
  bool isInX,isInY;

  for(int i=1;i<n;i++){
    last_elementx = x.back();
    last_elementy = y.back();
   // cout<<"x->"<<last_elementx;
   // cout<<"y->"<<last_elementy<<endl;
    for(int j=i;j<n;j++){
      if(arr[j]==last_elementx){
        isInX = true;
        break;
      }
      if(arr[j]==last_elementy){
        isInY = true;
        break;
      }
    }

    if(arr[i]!=last_elementx && arr[i]!=last_elementy){
      if(isInX==true){
        y.push_back(arr[i]);
        continue;
        }
      else{
        x.push_back(arr[i]); 
        continue; 
      }
      if(isInY==true){
        x.push_back(arr[i]);        
        continue;
        }
      else{
        y.push_back(arr[i]);  
        continue;
        }
      }
    isInX = false;
    isInY = false;
  }
  answer  = x.size()+y.size()-1;
  return  answer;
}

int main() {
  int k,n;
  cin>>k;
  for(int i=0;i<k;i++){
    cin>>n;
    int array[n];
    for(int j=0;j<n;j++){
      cin>>array[j];
    }
    int answerFinal = solve(array,n);
    cout<<answerFinal<<endl;
  }
}