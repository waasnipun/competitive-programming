#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string alice,bob;
string strategy[10][2]= {{"Scissors","Paper"},{"Paper","Rock"},{"Rock","Lizard"},{"Lizard","Spock"},{"Spock","Scissors"},{"Scissors","Lizard"},{"Lizard","Paper"},{"Paper","Spock"},{"Spock","Rock"},{"Rock","Scissors"}};
int aliceWon=0,bobWon=0,tied=0;

string bobChoose(string lastMove,int won){
    if(won==1 && lastMove=="Spock"){
        return "Rock";
    }
    else if(won==0 && lastMove=="Spock"){
        return "Lizard";
    }
    else if(won==-1 && lastMove=="Spock"){
        return "Paper";
    }
    else{
        return "Spock";
    }
    return "";
}
string aliceChoose(string lastMove){
    string a,b; int count=0;
    for(int j=0;j<10;j++){
        if(lastMove==strategy[j][1]){
            if(count==0){
            a = strategy[j][0];count++;}
            else{
                b = strategy[j][0];
                break;
            }
        }

    }
    for(int j=0;j<10;j++){
        if(a==strategy[j][0] && b==strategy[j][1]){
            return a;
            }
        else if(b==strategy[j][0] && a==strategy[j][1]){
                return b;
            }
    }

    return "";
}
void game(int games){
    for(int i=0;i<games;i++){
        for(int j=0;j<10;j++){
            if(alice==strategy[j][0] && bob==strategy[j][1]){
                aliceWon++;
                alice = strategy[j][0];
                bob = bobChoose(bob,-1);
                break;
            }
            else if(bob==strategy[j][0] && alice==strategy[j][1]){
                bobWon++;
                alice = aliceChoose(bob);
                bob = bobChoose(bob,1);
                break;
            }
            else if(bob==alice){
                tied++;
                alice = aliceChoose(alice);
                bob = bobChoose(bob,0);
                break;

            }
            else{
                continue;
            }
        }
    }
    //cout<<"alice won: "<<aliceWon<<" bob won: "<<bobWon<<" ties: "<<tied<<endl;
    if(aliceWon>bobWon){
        cout<<"Alice"<<" wins, by winning "<<aliceWon<<" game(s) and tying "<<tied<<" game(s)"<<endl;
    }
    else if(aliceWon<bobWon){
        cout<<"Bob"<<" wins, by winning "<<bobWon<<" game(s) and tying "<<tied<<" game(s)"<<endl;
    }
    else{
        cout<<"Alice and Bob tie, each winning "<<aliceWon<<" game(s) and tying "<<tied<<" game(s)"<<endl;
    }
    aliceWon=0;bobWon=0;tied=0;
}
int main(){
    int n,games;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>alice>>bob;
        cin>>games;
        game(games);
    }
}