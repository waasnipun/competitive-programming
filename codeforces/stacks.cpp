#include<bits/stdc++.h>
using namespace std;

int fx(int x ,vector<long long> vect){
   int pos = -1;
   long long max = vect[x-1];
   for(int i=x;i<vect.size();i++){
      if(vect[i]>max){
         pos = i;
         long long min = vect[pos];
         for(int j=pos+1;j<vect.size();j++){
            if(vect[j]<min){
              return j;
            }
         }
         break;
      }
   }
   return -1;
}
// int gx(int x ,vector<long long> vect){
//    int pos = -1;
//    long long min = vect[x-1];
//    for(int i=x;i<vect.size();i++){
//       if(vect[i]<min){
//          pos = i;

//          break;
//       }
//    }
//    return pos;
// }
vector<long long> solution (vector<long long> A) {
   // Write your code here
   vector<long long> sol;
   for(int i =1;i<A.size()+1;i++){
      int f = fx(i,A);
      if(f!=-1){
         sol.push_back(A[f]);
      }
      else{
         sol.push_back(-1);
      }
   }
   return sol;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
      cin >> A[i_A];
    }

    vector<long long> out_;
    out_ = solution(A);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
      cout << " " << out_[i_out_];
    }
}