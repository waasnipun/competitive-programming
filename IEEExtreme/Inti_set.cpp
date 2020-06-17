// C++ implementation of program 
#include <bits/stdc++.h> 
using namespace std; 

// Function to calculate gcd of two numbers 
int gcd(int a, int b) 
{ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 
int commDiv(int a, int b) 
{ 
    // find gcd of a, b 
    int n = gcd(a, b); 
  
    // Count divisors of n. 
    int result = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        // if 'i' is factor of n 
        if (n % i == 0) { 
            // check if divisors are equal 
            if (n / i == i) 
                result += 1; 
            else
                result += 2; 
        } 
    } 
    return result; 
} 
int main() 
{ 
	int n,a,b,N;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>N>>a>>b;
        for(int j=a;j<=b;j++){
            if(commDiv(j,N)==1){
                    sum+=j;
            }
        }
    cout<<sum%1000000007<<endl;
    sum=0;    
    }
    
	return 0; 
} 
