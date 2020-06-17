#include<bits/stdc++.h>
using namespace std;
int n;

bool isPositive(int number){
    if(number>=0){
        return true;
    }
    else{
        return false;
    }
    return 0;
}
int find(int array[]){
    bool isPossible = false;
    int a,b,k;
    int count = 0;
    while(k<10){
    for(int i=0;i<n;i++){
        if(i==0){
            a = array[1];
            b = array[n-1];

        }
        else if(i==n-1){
            a = array[0];
            b = array[n-2];
        }
        else{
            a = array[i+1];
            b = array[i-1];
        }
        if(a<=0 && b<=0 && array[i]<=0){
            isPossible = false;
            continue;
        }
        else if(a>=0 && b>=0 && array[i]>=0){
            isPossible = false;
            continue;
        }
        else{
            if(a>array[i]){
            if(abs(a)>abs(array[i])){
                int div = abs(a)-1/abs(array[i]);
                array[i] = array[i]*div+a;
                if(array[i]==1){
                    isPossible = true;
                    count++;
                }
                break;
            }}
            else if(a<array[i]){
                if(abs(a)<abs(array[i])){
                    int div = abs(array[i])-1/abs(a);
                    array[i] = array[i]+a*div;
                    if(array[i]==1){
                        isPossible = true;
                        count++;
                    }
                }
                break;
            }
            if(b>array[i]){
                if(abs(b)>abs(array[i])){
                    int div = abs(b)-1/abs(array[i]);
                    array[i] = array[i]*div+b;
                    if(array[i]==1){
                        isPossible = true;
                        count++;
                    }
                }
                break;
                }
            else if(b<array[i]){
                if(abs(b)<abs(array[i])){
                    int div = abs(array[i])-1/abs(b);
                    array[i] = array[i]+b*div;
                    if(array[i]==1){
                        isPossible = true;
                        count++;
                    }
                }
            }
            break;

            }
        }
        if(count==n-1){
            return 1;
        }
        k++;   
        
    } 
    return 0;
    
}
int main(){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int answer = find(arr);
    if(answer==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

}