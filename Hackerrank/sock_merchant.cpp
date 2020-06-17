#include <bits/stdc++.h> 
using namespace std; 


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void quicksort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int pivot = arr[r];
    int cnt = l;
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    int temp = arr[0];
    int count = 1;
    int output = 0;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<""<<endl;
    for(int i=1;i<n;i++){
        if(arr[i]==temp){
            count++;
        }
        else{
            output = output + count/2;
            //cout<<output<<" "<<count<<" ";
            temp = arr[i];
            count = 1;
        }
        
    }
    output = output + count/2;
    cout<<"\n"<<output;
}