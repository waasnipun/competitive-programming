#include<bits/stdc++.h>
using namespace std;

int countBits(int a) 
{ 
    int count = 0; 
    while (a) 
    { 
        if (a & 1 ) 
            count+= 1; 
        a = a>>1; 
    } 
    return count; 
} 
  
vector<int> sortBySetBitCount(int arr[],int n) 
{ 
    vector<vector<int> > count(32); 
    int setbitcount = 0; 
    for (int i=0; i<n; i++) 
    { 
        setbitcount = countBits(arr[i]); 
        count[setbitcount].push_back(arr[i]); 
    } 
  
    int j = 0; 
    vector<int> out; 
    for (int i=0; i<=31; i++) 
    { 
        vector<int> v1 = count[i]; 
        sort(v1.begin(),v1.end());
        for (int i=0; i<v1.size(); i++) 
        	out.push_back(v1[i]); 
    } 

    return out;
} 


int main(){
	vector<int>vect = {1024,512,256,128,64,32,16,8,4,2,1};
	int n = vect.size();
	int arr[n];	
	copy(vect.begin(),vect.end(),arr);
	vector<int> arrrr;
	arrrr = sortBySetBitCount(arr,n);
	for(auto i:arrrr){
		cout<<i<<" ";
	}
	return 0;
}