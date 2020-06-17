#include<bits/stdc++.h> 
using namespace std;

double distanceM(double cx,double cy,int x,int y){
  double distnace = sqrt(pow(cx-(double)x,2)+pow(cy-(double)y,2));
  //cout<<cx<<" "<<cy<<" "<<distnace<<endl;
  return distnace;

}
void check(int w,int h,int r,int xc,int yc){
  int square=0;
  for(int i=1;i<=h;i++){
      bool rowCheck = false;
    for(int j=1;j<=w;j++){
      double cy = i-0.5;
      double cx = j-0.5;
      if(distanceM(cx,cy,xc,yc)<=(double)r){
        rowCheck = true;
        square++;
        //cout<<cx<<" "<<cy<<endl;
      }
      else{
          if(rowCheck == true){
              break;
          }
      }
    }

  }
  cout<<square<<endl;

}
int main() {
  int w,h,xc,yc,r,n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>w>>h;
    cin>>xc>>yc>>r;
    check(w,h,r,xc,yc);
  }
   
}