#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> output;
int n;
cin>>n;
int matrix[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>matrix[i][j];
    }
}
int main_diagonal=0;
int anti_diagonal=0;
int rows[n],columns[n];
for(int i=0;i<n;i++){
    rows[i]=0;
    columns[i]=0;
}
int isY = n-1;
int isX = 0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        rows[i]+=matrix[i][j];
        columns[j]+=matrix[i][j];
        if(i==j){
            main_diagonal+=matrix[i][j];
        }
        if(i==isX && j==isY){
            anti_diagonal+=matrix[i][j];
            isX++;
            isY--;
        }


    }
}


if(main_diagonal!=anti_diagonal){
    output.push_back(0);
}
for(int i=0;i<n;i++){
    if(columns[i]!=main_diagonal){
        output.push_back(-1*(i+1));
    }
}
reverse(output.begin(),output.end());
for(int i=0;i<n;i++){
    if(rows[i]!=main_diagonal){
        output.push_back(i+1);
    }
}
//cout<<main_diagonal<<" "<<anti_diagonal;
cout<<output.size()<<endl;
for(int i=0;i<output.size();i++){
            cout<<output[i]<<endl;
        }

}
