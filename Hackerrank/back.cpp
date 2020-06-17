#include <bits/stdc++.h> 
using namespace std; 

int temp[64];
int newArray[8][8];
int startXY[2] = {7,0};
int lastDirection;
void path(int startX,int startY,int number){
    int indexX,indexY;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(newArray[i][j]==number){
                indexX = i;
                indexY = j;
            }
        }
    }
    int moveMent[abs(indexX-startX)+abs(indexY-startY)+2];
    ///1 --->  up 2--->right  3--->down  4--->left 0---> dont move
    for(int i=0;i<=abs(indexX-startX);i++){
        if((indexX-startX)>0){
            moveMent[i] = 1;
        }
        else if((indexX-startX)<0){
            moveMent[i] = 3;
        }
        else{
            moveMent[i] = 0;
        }
    }
    for(int i=abs(indexX-startX)+1;i<=abs(indexX-startX)+abs(indexY-startY)+1;i++){

        if((indexY-startY)>0){
            moveMent[i] = 4;
        }
        else if((indexY-startY)<0){
            moveMent[i] = 2;
        }
        else{
            moveMent[i] = 0;
        }
    }    
    if(lastDirection==moveMent[abs(indexX-startX)+1]){
        moveMent[abs(indexX-startX)+1] = 0;
    }
    lastDirection = moveMent[abs(indexX-startX)+abs(indexY-startY)+1];
    for(int i=0;i<abs(indexX-startX)+abs(indexY-startY)+2;i++){
        cout<<moveMent[i]<<" ";
    }
    startXY[0] = indexX; startXY[1] = indexY;
}

void backpath(int firstNumber,int secondNumber,int thirdNumber){
    int step=0;
    for(int i=0;i<64;i=i+8){
        if(step%2==0){
            for(int j=0;j<8;j++){
                newArray[step][j] = i+j+1;
                
            }
            step++;
        }
        else{
            for(int j=7;j>=0;j--){
                newArray[step][7-j] = i+j+1;
            }
            step++;
        }
    
    }
    for(int i = 0 ;i<8;i++){
        for(int j = 0 ;j<8 ; j++){
            cout << newArray[i][j]  ;
        }
        cout << "" << endl ;
    }
    //path(startXY[0],startXY[1],firstNumber);
    //cout<<"\n";
    //path(startXY[0],startXY[1],secondNumber);
    //cout<<"\n";
    //path(startXY[0],startXY[1],thirdNumber);
    
    
}


int main(){

    for(int i=1;i<65;i++){
        temp[i-1] = i;
        //cout<<temp[i];
    }
    backpath(8,5,1);
}