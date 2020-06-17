#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int em;
    cin>>em;
    int n[10];
    for(int i=0;i<em;i++){
      *(n+i) = i;
      
    }
    for(int i=0;i<em;i++){
      cout<<n[i];
    }
    cout<<"\n"<<sizeof(n)/sizeof(n[0])<<endl;
    
}

