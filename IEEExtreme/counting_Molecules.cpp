#include<bits/stdc++.h>
using namespace std;

int main(){
    int c,h,o;
    bool exception = false;
    cin>>c>>h>>o;
    int output[3] = {0,0,0};
    if(o==0){
        cout<<"ERROR";
        exception = true;
        cout<<output[0]<<" "<<output[1]<<" "<<output[2]<<endl;
    }
    else if(c==0){
        if(h%2==0){
            if(o==h/2){
                output[0] += o;
                exception = true;
                cout<<output[0]<<" "<<output[1]<<" "<<output[2]<<endl;
            }
            else{
                cout<<"ERROR";
            }
        }
        else{
            cout<<"ERROR";
        }
    }
    else if(h==0){
        if(o%2==0){
            if(c==o/2){
                output[1] += c;
                exception = true;
                cout<<output[0]<<" "<<output[1]<<" "<<output[2]<<endl;
            }
            else{
                cout<<"ERROR";
            }
        }
        else{
            cout<<"ERROR";
        }
    }
    else{
        ///////////////////////////////////////
        if(c%6==0){
            if(h%12==0){
                if(o%6==0){
                    output[2] += o/6;
                    c -= (6*(o/6));
                    h -= (12*(o/6));
                    o -= 6*(o/6);
                }
                else{
                    output[2] = 0;
                }
            }
        else{
            output[2] = 0;
        }
        }
        else{
            output[2] = 0;
        }
        //////////////////////////////////////
        if(h%2==0){
            if(o==h/2){
                output[0] += o; 
                h -= o*2;
                o -= o;
            }
            else{
                output[0] = 0;
            }
        }
        else{
            output[0]=0;
        }
        ////////////////////////////////////
        if(o%2==0){
            if(c==o/2){
                output[1] += c; 
                o -= c*2;
                c -= c;
            }
            else{
                output[1] = 0;
            }
        }
        else{
            output[1]=0;
        }
    }

    if(!exception){
        if(c==0 && h && o==0){
            cout<<output[0]<<" "<<output[1]<<" "<<output[2]<<endl;
        }
        else{
            cout<<output[0]<<" "<<output[1]<<" "<<output[2]<<endl;
            cout<<"dfdfERROR";
        }
    }
}