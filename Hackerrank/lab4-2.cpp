#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 
bool sortbysec(const pair<int, int>& a, 
			const pair<int, int>& b) 
{ 
	return (a.second < b.second); 
} 
void maxDisjointIntervals(vector<pair<int, int> > list) 
{ 
    int count = 1;
	sort(list.begin(), list.end(), sortbysec); 
	//cout << "[" << list[0].first << ", "
	//	<< list[0].second << "]" << endl; 
	int r1 = list[0].second; 

	for (int i = 1; i < list.size(); i++) { 
		int l1 = list[i].first; 
		int r2 = list[i].second; 
		if (l1 > r1) { 
			//cout << "[" << l1 << ", "
              //   << r2 << "]" << endl; 
            count++;
			r1 = r2; 
		} 
	} 
    cout<<count<<endl;
} 


int main() 
{ 
	int N,t,a,b;
    cin>>t;
	vector<pair<int, int> > intervals; 
    for(int i=0;i<t;i++){
        cin>>N;
        for(int j=0;j<N;j++){
            cin>>a>>b;
            intervals.push_back({a,b});
            //intervals[j][1] = b;
        }
        maxDisjointIntervals(intervals);
       // for(int k=0;k<intervals.size();k++){
         //   cout<<intervals[k].first<<" "<<intervals[k].second<<endl;
        //}
	    //maxDisjointIntervals(intervals); 
        intervals.clear();
    }
    //maxDisjointIntervals(intervals); 
	return 0; 
} 
