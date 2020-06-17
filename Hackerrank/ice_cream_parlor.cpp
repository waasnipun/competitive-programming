#include<bits/stdc++.h>
using namespace std;

vector<int> icecreamParlor(int m, vector<int> arr) {
	std::vector<int> v;
	for(int i=0;i<arr.size();i++){
		vector<int>::iterator it = find(arr.begin()+i+1, arr.end(), m-arr[i]);
		if (it != arr.end()){
				v.push_back(i+1);
				int index = distance(arr.begin(), it);
				v.push_back(index+1);
				break;
		}			
	}
	return v;
}

int main(){
	int t,m,n;
	cin>>t;
	for(int i=0;i<t;i++){
		vector<int> vect;
		cin>>m>>n;
		for(int j=0;j<n;j++){
			int temp;
			cin>>temp;
			vect.push_back(temp);
		}
		vector<int> result = icecreamParlor(m, vect);

        for (int k = 0; k < result.size(); k++) {
            cout << result[k];
        }

	}
}