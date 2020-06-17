#include<bits/stdc++.h>
using namespace std;
int main(){
	array<int,5> arr = {1,2,10,4,5};
	//making a heap
	// make_heap(arr.begin(),arr.end());

	//stable sort O(nlogn^2 complexity)
	// stable_sort(arr.begin(),arr.end());

	//checking is_
	cout<<is_sorted(arr.begin(),arr.end())<<endl;
	cout<<is_heap(arr.begin(),arr.end())<<endl;

	//checking is_ _until
	cout<<*is_sorted_until(arr.begin(),arr.end())<<endl;

	//permutation of a vectpr
	prev_permutation(arr.begin(),arr.end());

	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}

	cout<<""<<endl;
	// int n;
	// for(int j =0;j<4;j++){
	// 	cin>>n;
	// 	arr.push_back(n);

	//  re arranging the heap after insertion
	// 	push_heap(arr.begin(),arr.end());

	// 	for(int i=0;i<arr.size();i++){
	// 		cout<<arr[i]<<" ";
	// 	}

	//getting the maximum valueto the last index
	// 	pop_heap(arr.begin(),arr.end());

	// 	arr.pop_back();
	// 	cout<<""<<endl;
	// 	for(int i=0;i<arr.size();i++){
	// 		cout<<arr[i]<<" ";
	// 	}
	// }

	//queries

	cout<<count(arr.begin(),arr.end(),5)<<endl;
	int summ[arr.size()];
	int mul[arr.size()];
	//summation of numbers from he beginning
	partial_sum(arr.begin(),arr.end(),summ);

	//multiplication of numbers
	partial_sum(arr.begin(),arr.end(),mul,multiplies<int>());

	for(int i=0;i<arr.size();i++){
		cout<<mul[i]<<" ";
	}

	//finding an element
	cout<<"\n"<<*find(arr.begin(),arr.end(),52);

	///sets
	//merge function merges two sorted collections into one collection

}