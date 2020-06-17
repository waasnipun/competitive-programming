#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int p,int q,int r){
    int l1 = q-p+1;
    int l2 = r-q;
    int left[l1],right[l2],i,j,k;
    for(i=0;i<l1;i++){
        left[i] = a[p+i];
    }
    for(i=0;i<l2;i++){
        right[i] = a[q+1+i];
    }
    i=0;j=0;
    for(k=p; i<l1 && j<l2 ;k++){
        if(left[i]<right[j]){
            a[k] = left[i++];
        }
        else{
            a[k] = right[j++];
        }
    }
    while(i<l1){
        a[k++] = left[i++];
    }
    while(j<l2){
        a[k++] = right[j++];
    }
}

void mergeSort(int a[],int p, int r){
    int q;
    if(p<r){
        q = (p+r)/2;
        mergeSort(a,p,q);
        mergeSort(a,q+1,r);
        merge(a,p,q,r);
    }
}
int main(){
    int index,n,k;
    cin>>index;
    for(int i=0;i<index;i++){
        cin>>n>>k;
        int dogs[n];
        int diff[n-1];
        for(int j=0;j<n;j++){
            cin>>dogs[j];
        }
        mergeSort(dogs,0,n-1);
        for(int j=0;j<n-1;j++){
            diff[j] = dogs[j+1] - dogs[j];
        }
        mergeSort(diff,0,n-2);
        int size = *(&diff + 1) - diff;
        int answer = diff[0];
        if(size-k == -1){
            answer = 0;
        }
        else{
            for(int p=1;p<size-k+1;p++){
                answer+=diff[p];
            }
        }
        cout<<"\nanswer is : "<<answer<<endl;
        /*for(int i=0;i<n-1;i++){
            cout<<diff[i]<<" ";
        }
        cout<<""<<endl;*/
    }
    
    
}