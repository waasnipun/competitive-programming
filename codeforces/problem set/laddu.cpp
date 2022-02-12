#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		unordered_map<int, int> wordFreq; 
		vector<int>vect;
		int max = 0;
		for(int j=0;j<n;j++){
			int c_;
			cin>>c_;
			wordFreq[c_]++;
			vect.push_back(c_);
			if(wordFreq[c_]>max){
				max = wordFreq[c_];
			}
		}
		vector<int> solution;
		int last = -1;
		for(int j=0;j<n;j++){
			int freq = wordFreq[vect[j]];
			bool isTrue = false;
			if(freq==max){
				cout<<"-1"<<" ";
				continue;
			}
			if(last!=-1 && wordFreq[vect[j]]>=wordFreq[last]){
				continue;
			}
			for(int k=j+1;k<n;k++){
				if(vect[j]==vect[k]){
					continue;
				}
				if(freq<wordFreq[vect[k]]){
					// solution.push_back(vect[k]);
					cout<<vect[k]<<" ";
					last = -1;
					isTrue = true;
					break;
				}
			}
			if(!isTrue){
				cout<<"-1"<<" ";
				last = vect[j];
				// solution.push_back(-1);
			}
		}
		cout<<endl;

		// unordered_map<int, int>:: iterator p; 
	 //    for (p = wordFreq.begin(); p != wordFreq.end(); p++) 
	 //        cout << "(" << p->first << ", " << p->second << ")\n"; 
	}
}