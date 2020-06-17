#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool is_in_array(char arr[],int n,char chr,int strt){
    bool isin = false;
    for(int i=n-1;i>strt-1;i--){
        if(arr[i]==chr){
            isin = true;
            break;
        }
    }
    return isin;
}

int placeInArr(char arr[],int n,char chr){
    int place;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==chr){
            place = i;
            break;
        }
    }
    return place;
}
int main(){
    string word;
    cin>>word;
    int n = word.length();
    //cout<<n;
    char *in = new char[word.length()];
    strcpy(in,word.c_str());
    int placeNew = n;
    int output = 0;
    int Reverse[n];
    //Reverse = reverse(in,in+n);
    for(int i=0;i<placeNew;i++){
        char temp = in[i];
        if(is_in_array(in,placeNew-1,temp,i+1)==1){
            placeNew = placeInArr(in,n,temp);
            //cout<<temp;
            output++;
        }
    }
    //cout<<is_in_array(in,n,'s');
    /*for(int i=0;i<n;i++){
        cout<<in[i];
    }*/
    cout<<2*output;
}