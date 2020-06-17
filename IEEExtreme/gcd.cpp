#include <bits/stdc++.h> 
using namespace std; 
  
// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
// Function to find gcd of array of 
// numbers 
int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
} 

  
void combinationUtil(int arr[], int data[],  
                    int start, int end,  
                    int index, int r,int x);  
  
// The main function that prints  
// all combinations of size r  
// in arr[] of size n. This function 
// mainly uses combinationUtil()  
void printCombination(int arr[],int x, int n, int r){  
    // A temporary array to store 
    // all combination one by one  
    int data[r];  
    vector<int> div;
    for(int i=0;i<n;i++){
        if(arr[i]%x==0){
            div.push_back(arr[i]);
        }
    }
    // Print all combination using 
    // temprary array 'data[]' 
    int* divN = div.data(); 
    for(int k=1;k<=div.size();k++){
    combinationUtil(divN, data, 0, div.size()-1, 0, k,x);  
    }
}  
  
/* arr[] ---> Input Array  
data[] ---> Temporary array to  
store current combination  
start & end ---> Staring and 
Ending indexes in arr[]  
index ---> Current index in data[]  
r ---> Size of a combination to be printed */
int out=0;
void combinationUtil(int arr[], int data[],  
                    int start, int end,  
                    int index, int r,int x)  
{  
    // Current combination is ready 
    // to be printed, print it  
    if (index == r)  
    {  
    if(findGCD(data,r)==x){
        ////for (int j = 0; j < r; j++)  
            //cout << data[j] << " ";  
        //cout << endl; 
        out++;
         }
         
        return;  
    }  
    
    // replace index with all possible  
    // elements. The condition "end-i+1 >= r-index" 
    // makes sure that including one element  
    // at index will make a combination with  
    // remaining elements at remaining positions  
    for (int i = start; i <= end &&  
        end - i + 1 >= r - index; i++)  
    {  
        data[index] = arr[i];  
        combinationUtil(arr, data, i+1,  
                        end, index+1, r,x);  
    }  
}  





int main(){
    int n;
    cin>>n;
    int labels[n];
    for(int i=0;i<n;i++){
        cin>>labels[i];
    }
    int q,x;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x;
        printCombination(labels,x,n,2);
        cout<<out<<endl;
        out=0;
    }
}