//
// Created by nipun waas on 2021-08-31.
//

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    int m,n;
    cin>>m>>n;
    string magazine_line, note_line;
    cin.ignore();
    getline(cin,magazine_line);
    getline(cin,note_line);
    map<string, int> magazine, note;

    istringstream magazine_stream(magazine_line);
    istringstream note_stream(note_line);


    string temp;
    while(magazine_stream>>temp){
        if(magazine.find(temp)==magazine.end()){
            magazine[temp] = 1;
        }
        else{
            magazine[temp]++;
        }
    }
    bool isPossible = true;
    while(note_stream>>temp){
        if(magazine.find(temp) == magazine.end()){
            isPossible = false;
            break;
        }
        else if(magazine[temp]==0){
            isPossible = false;
            break;
        }
        else{
            magazine[temp]--;
        }
    }

    if(isPossible)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
