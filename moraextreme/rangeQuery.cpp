#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  


int answer(int l,int array[],int one,int two){
    int out=0;
    int max = (one>two)?one:two;
    int min = (one<two)?one:two;
    for(int i=0;i<l;i++){
        cout<<array[i]<<" ";
  }
    for(int i=0;i<l;i++){
        if(array[i]<min){
            continue;
        }
        if(array[i]>max){
            return out;
        }
        if(one<=array[i] && array[i]<=two){
            out++;
        }
    }
    return out;
}
int main(){
  int a,b;
  int n,m,q;
  std::string input_str,input_str1;
  std::vector<int> vect;

  std::getline( std::cin, input_str );

  std::stringstream ss(input_str);
  int i;

  while (ss >> i)
  {
    vect.push_back(i);
    if (ss.peek() == ','){
    ss.ignore();}
  }
  n = vect[0];m=vect[1];q=vect[2];
  int arr[m];
  //cout<<n<<m<<q;
  for(int i=0;i<m;i++){
    cin>>arr[i];
  }
  mergeSort(arr,0,m-1);
  vector<string> objects;
  for(int i=0;i<q;i++){
    string a,input;
    int c,d;
    cin>>input;
    for(stringstream sst(input); getline(sst, a, ','); )  // that's all ! 
        objects.push_back(a);
    c = stoi(objects[0]);
    d = stoi(objects[1]);
    //cout<<c<<d;
    cout<<answer(m,arr,c,d)<<endl;
    objects.clear();
    
    }
    

    
  
}