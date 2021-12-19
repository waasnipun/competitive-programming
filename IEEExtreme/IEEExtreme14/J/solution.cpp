#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int unsigned int

int poweroftwo(int n,int count_){
  if(n==1)
    return count_;
  count_++;
  return poweroftwo(n/2,count_);
}
int nextPowerOf2(int n){  
    unsigned count = 0;  
    if (n && !(n & (n - 1)))  
        return n;  
    while( n != 0){  
        n >>= 1;  
        count += 1;  
    }  
    return 1 << count;  
} 
vector<int> seperate_numbers(int n){
  vector<int> vect;
  while(true){
    int next_value = nextPowerOf2(n);
    if(n==next_value)
      break;
    n = next_value-n;
    vect.pb(next_value);
  }
  return vect;
} 
//solution starts here
void solution(){
  long t;
  cin>>t;
  vector<string> str = {"MOV R0, R0, LSL #","ADD Rd, Rb, Ra, LSL #","SUB Rd, Rb, Ra, LSL #","RSB Rd, Rb, Ra, LSL #"};
  for(int i=0;i<t;i++){
    int n;
    cin>>n;
    string output = "";
    int nextint = nextPowerOf2(n);
    if(nextint==n){
      int co = 0;
      co = poweroftwo(nextint,co);
      output+=(str[0]+to_string(co));
      output+="\nEND";
    }
    else{
      vector<int> additions = seperate_numbers(n);
      for(int i=(int)additions.size()-1;i>=0;i--){
        int x = additions[i];
        output+=(str[0]+to_string(x));
      }
      output+="\nEND";
    }
    cout<<output<<endl;
  }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
