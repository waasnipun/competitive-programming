#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

bool isprime(int number){
    if(number==1)
        return true;
    for(int i=2;i<number;i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}
//solution starts here
void solution(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int number_of_digits = s.length();
    map<int,int> f;
    for (int i = 0; i < number_of_digits; i++) {
        if (isprime(s[i]-48)){
            f[s[i] - 48] += 1;
        }
        if (s[i] == '4') {
            f[2] += 2;
            f[3]++;
        }
        if (s[i] == '6') {
            f[5]++;
            f[3]++;
        }

        if (s[i] == '8') {
            f[7]++;
            f[2] += 3;
        }
        if (s[i] == '9') {
            f[7]++;
            f[3] += 2;
            f[2]++;
        }
    }
    string out = "";
    if (f[1] == number_of_digits || f[0] == number_of_digits || (f[0] + f[1]) == number_of_digits) {
        cout<<s<<endl;
    }
    else {
        for (int i = 9; i >= 2; i--) {
            int ctr = f[i];
            while (ctr--) {
                out+= (char)(i + 48);
            }
        }

        cout<<out<<endl;
    }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
