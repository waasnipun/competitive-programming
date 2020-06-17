#include <bits/stdc++.h> 
using namespace std; 

vector<char> vect;
void combinations(int n,vector<char> characters,int index){
    //cout<<"special ;"<<(characters[0])<<endl;   
    for(int i=0;i<n;i++){
            vect.push_back(characters[i]);
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            vect.push_back(characters[i]);
            vect.push_back(characters[j]);
            }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                vect.push_back(characters[i]);
                vect.push_back(characters[j]);
                vect.push_back(characters[k]);
                }
            }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                for(int l=0;l<n;l++){
                    vect.push_back(characters[i]);
                    vect.push_back(characters[j]);
                    vect.push_back(characters[k]);
                    vect.push_back(characters[l]);
                    }
                }
            }
        }
    cout<<vect[index]<<endl;
    /*for(int i=0;i<25;i++){
        cout<<vect[i]<<" ";
    }*/
    
}
int main(){
    int k;
    cin>>k;
    vector<char> charac;
    for(int i=0;i<k;i++){
        int n,a;
        cin>>n>>a;
        for(int i=97;i<97+n;i++){
            charac.push_back(char(i));            
        }   
        //cout<<"special ;"<<(charac[0])<<endl;     
        combinations(n,charac,a);
        charac.clear();
        vect.clear();
    }
}