#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   bool canReach(int k, int start) {
      queue <int> q;
      q.push(start);
      set <int> visited;
      visited.insert(start);
      while(!q.empty()){
         int curr = q.front();
         q.pop();
         if(curr + k < n && !visited.count(curr + k)){
            q.push(curr + k);
            visited.insert(curr + k);
         }
         if(curr - k >= 0 && !visited.count(curr - k)){
            q.push(curr - k);
            visited.insert(curr - k);
         }
      }
      return false;
   }
};
int main(){
   vector<int> v = {4,2,3,0,3,1,2};
   Solution ob;
   cout << (ob.canReach(k, 5));
}
