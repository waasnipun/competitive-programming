#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
  int c,n,p,w;
  cin>>c>>n>>p>>w;
  if(c>w)
    cout<<0<<endl;
  else{
     int freeslots = 0;
     int tables = 0;
     if(w%p==0)
       freeslots+=(n-w/p);
     else
       freeslots+=(n-(w/p)-1);
     while(w>0){
       if(freeslots>0 && c*freeslots<w){
        w-=(c*freeslots);
        tables+=freeslots;
        freeslots= 0;
        continue;
       }
       if(w%p==0){ 
         if(c<p){
            w-=c;
            if(freeslots<=0){
              break;
            }
            else{
              freeslots--;
            }
            tables++;
          }
          else{
            freeslots+=(c/p);
            w-=c;
            if(w<0)
              break;
            if(freeslots<=0)
              break;
            else
              freeslots--;
            tables++;
          }
       }
       else{
          int wood_last_slot = w%p;
          if(wood_last_slot>c){
            w-=c;
            if(freeslots<=0)
              break;
            else
              freeslots--;
            tables++;
          }
          else{
            w-=wood_last_slot;
            freeslots++;
            freeslots+=((c-wood_last_slot)/p);
            w-=(c-wood_last_slot);
            if(w<0)
              break;
            if(freeslots<=0)
              break;
            else
              freeslots--;
            tables++;
          }
       }
     }
     cout<<tables<<endl;
  }

}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
