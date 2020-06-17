#include <bits/stdc++.h> 
using namespace std; 

int n,m,s;

int solve(int ,int ,int [][3] , int [][2]);

int main() {
	cin>>n>>m>>s;
	int uni1[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>uni1[i][j];
		}
	}
	int power1[m][3];
	for(int i=0;i<m;i++){
		for(int j=0;j<3;j++){
			cin>>power1[i][j];
		}
	}
	/*for(int i=0;i<m;i++){
		for(int j=0;j<3;j++){
			cout<<power1[i][j];
		}
		cout<<""<<endl;
	}*/
	vector<int> out;	
	for(int k=0;k<n-1;k++){
		int temp = 0;
		for(int q=k+1;q<n;q++){
				int min = uni1[k][0];
				int max = uni1[q][1];
				temp = temp + (solve(min,max,power1,uni1));
				//cout<<temp<<endl;
		}
		out.push_back(temp);
	}
	int costnewtemp = 0;
	for(int k=0;k<n;k++){		
		costnewtemp = costnewtemp+(solve(uni1[k][0],uni1[k][1],power1,uni1));
	}
		//cout<<costnewtemp<<endl;	
	out.push_back(costnewtemp);
	cout<<*min_element(out.begin(), out.end())<<endl;
}

int solve(int first,int second,int power[][3] , int uni[][2]){
	int c1,c2;
	vector<int> cost;
	int out;
	bool isTrue = false;
	for(int k=0;k<n;k++){
		for(int i=0;i<m;i++){
			if(power[i][0]<=first && second<=power[i][1]){
				c1 = power[i][2];
				cost.push_back(c1);
				//cout<<c1<<"dd"<<endl;
				//cout<<"valc1 "<<c1<<endl;
				continue;
			}
			else if(power[i][0]<=first){
				c2 = power[i][2];
				int index = power[i][1];
				for(int l=0;l<m;l++){
					if(index<=uni[k][0] && l!=i && second<=power[l][1]){
							int temp = c2;
							temp = temp+power[l][2];
							isTrue = true;
							//cout<<"val"<<temp<<endl;
							cost.push_back(temp);
					}
				}
				if(isTrue){
										
					isTrue = false;
					c2 = 0;
				}
				else{
					c2 = 0;
					continue;
				}			
			}
		}	
	}
	return *min_element(cost.begin(), cost.end());
}
