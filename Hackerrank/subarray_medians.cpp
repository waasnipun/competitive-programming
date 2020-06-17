#include <bits/stdc++.h> 
using namespace std; 
void swap(long long *a, long long *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void quicksort(long long arr[], long long l, long long r)
{
    if (l >= r)
    {
        return;
    }
    long long pivot = arr[r];
    long long cnt = l;
    for (int i = l; i <= r; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(&arr[cnt], &arr[i]);
            cnt++;
        }
    }
    quicksort(arr, l, cnt-2); // Recursively sort the left side of pivot
    quicksort(arr, cnt, r);   // Recursively sort the right side of pivot
}
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    long long output = 0;
    while(count<n){
        //cout<<"f: "<<count<<endl;
        for(int i=count;i<n;i=i+2){
            //cout<<i<<" ";
            vector<long long> temp_vect(arr+count,arr+i+1);
            //cout<<""<<endl;
            long long* temp = &temp_vect[0];
            //long long temp[i-count+1];
           // int count_temp = 0;
            //for(int j=count;j<i+1;j++){
                //temp[count_temp] = arr[j];
                //count_temp++;
            //}
            if(i!=count){
                quicksort(temp,0,i-count);
            }
            
            output = output + ((count+1)*(i+1)*temp[(i-count)/2]);
            //break;
           // cout<<count+1<<i+1<<temp[(i-count)/2]<<endl;
           temp_vect.clear();
           
           
        }
       // cout<<""<<endl;
        count++;
        //break;
   }
cout<<output;

}