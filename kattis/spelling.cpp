/**
	@author - nipun waas
**/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
	string aa;
	getline(cin,aa);
	int n = (int)aa[0]-48;
	int Case = 1;
	while(n--){
		string a;
		getline(cin,a);
		string output = "";
		map<char,char>  dic;
		dic['a'] = '2';dic['d']='3';dic['g']='4';
		dic['j'] = '5';dic['m']='6';dic['p']='7';
		dic['t'] = '8';dic['w']='9';dic[' ']= '0';
		char last;
		for(int count=0;count<a.size();count++){
			char i = a[count];
			if(i==' '){
				if(last == ' '){
					output+=' ';
				}
				output+='0';
				last = ' ';
				continue;
			}
			if(dic.find(i)!=dic.end()){
				if(last == dic.at(i)){
					output+=' ';
				}
				output+=dic[i];
				last = dic.at(i);
				continue;
			}
			for(int j=(int)i;j>=97;j--){
				if(dic.find((char)j)!=dic.end()){
					if(last == dic.at(j)){
						output+=' ';
					}
					for(int k=0;k<=(int)i-j;k++)
						output+=dic.at(j);
					last = dic.at(j);
					break;
				}
			}
		}
		cout<<"Case #"<<Case<<": "<<output<<endl;Case++;
	}
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}