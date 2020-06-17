#include <iostream>
#include <vector>
using namespace std;

void nextMove(int n, int r,int c,vector <string> grid){
    int mcoordinates[2];
    int pcoordinates[2];
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j] == 'm'){
                mcoordinates[0] = i;
                mcoordinates[1] = j;
            }
            if(grid[i][j] == 'p'){
                pcoordinates[0] = i;
                pcoordinates[1] = j;
            }
        }
    }
    
    int y = mcoordinates[0]-pcoordinates[0];
    int x = mcoordinates[1]-pcoordinates[1];
    vector <string> movess;
    if(x>0){
        for(int i=0;i<x;i++){
            movess.push_back("LEFT");
        }
        }
    else{
        for(int i=x;i<0;i++){
            movess.push_back("RIGHT");
        }
        
        }
    if(y>0){
        for(int i=0;i<y;i++){
            movess.push_back("UP");
        }
        }
    else{
        for(int i=y;i<0;i++){
            movess.push_back("DOWN");
        }
        
        }
    for(auto i = movess.begin();i!=movess.end();++i){
        cout<<*i<<endl;
        break;
    }

}



int main(void) {
int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}