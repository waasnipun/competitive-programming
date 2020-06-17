#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &values, int left, int right) {
    int pivotIndex = left + (right - left) / 2;
    int pivotValue = values[pivotIndex];
    int i = left, j = right;
    int temp;
    while(i <= j) {
        while(values[i] < pivotValue) {
            i++;
        }
        while(values[j] > pivotValue) {
            j--;
        }
        if(i <= j) {
            temp = values[i];
            values[i] = values[j];
            values[j] = temp;
            i++;
            j--;
        }
    }
    return i;
}
void quicksort(vector<int> &values, int left, int right) {
    if(left < right) {
        int pivotIndex = partition(values, left, right);
        quicksort(values, left, pivotIndex - 1);
        quicksort(values, pivotIndex, right);
    }
}
int hIndex(vector<int> vect ){
    int len = vect.size();
    int max =0;
    int count =1;
    for(int it=len-1;it>=0; it--) {
        //cout << vect[it] << " ";
        int min;
        if(vect[it]>count){
            min = count;
            }
        else{
            min = vect[it];
            }
        if(min>max){
            max = min;
        }
        count++;
    }
 return max;
}
int main(){
    int t,n,temp;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        vector<int> arr;
        cout<<"Case #"<<i+1<<": ";
        for(int j=0;j<n;j++){
            cin>>temp;
            arr.push_back(temp);
            vector<int> copyvect(arr);
            quicksort(copyvect, 0, copyvect.size() - 1);
           cout<< hIndex(copyvect)<<" ";
           /*for(vector<int>::iterator it = copyvect.begin(); it != copyvect.end(); it++) {
                cout << *it << " ";
                }*/
            copyvect.clear();            
        }
    
    cout<<""<<endl;
   /* for(vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
        cout << *it << endl;
        }*/
    }
}