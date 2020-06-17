#include<iostream>
#include<vector>
using namespace std;

void next_move(int posr, int posc, vector <string> board) {
    vector <int> positiond;
    bool breaking = false;
    for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
            if(board[i][j] == 'd'){
                positiond.push_back(i);
                positiond.push_back(j);
                breaking = true;
                break;
            }
       }
       if(breaking == true){
                break;
            }
        
    }
    int x = posr - positiond[0];
    int y = posc - positiond[1];
    if(x ==0 && y==0){
        cout<<"CLEAN";
    }
    if(x>0){
        cout<<"UP";
        return ;
    }
    else if(x<0){
        cout<<"DOWN";
        return ;
    }
    if(y>0){
        cout<<"LEFT";
        return ;
    }
    else if(y<0){
        cout<<"RIGHT";
        return ;
    }
}

int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}