#include <bits/stdc++.h> 
using namespace std; 

int fact(int n); 

int nCr(int n, int r) 
{ 
	return fact(n) / (fact(r) * fact(n - r)); 
} 

int fact(int n) 
{ 
	int res = 1; 
	for (int i = 2; i <= n; i++) 
		res = res * i; 
	return res; 
} 

int main() 
{ 
	int a,b,A,B,a1,b1,a2,b2;
    cin>>a>>b;
    A=a;
    B=b;
    a1=a;
    b1=b;
    a2=a;
    b2=b;
    if(a==0 || b==0){
        cout<<0;
    }
    else if(a==1 && b>=2){
        cout<<1;
    }
    else if(b==1 && a>=2){
        cout<<1;
    }
    else if(a>=2 && b>=2){
        int out1=0;
        while(true){
            a=a-2;
            b = b-1;
            out1++;
            if(a==1 && b==1){
                break;
            }
            else if((a==1 && b>=2) || (b==1 && a>=2)){
                out1++;
                break;
            }
            else if(a==0||b==0){
                break;
            }
            else if(a>=2 && b>=2){
                a=a-1;
                b = b-2;
                out1++;
                if(a==1 && b==1){
                    break;
                }
                else if((a==1 && b>=2) || (b==1 && a>=2)){
                    out1++;
                    break;
                }
                else if(a==0||b==0){
                    break;
                }
            }
        }
        int out2=0;
        while(true){
            A=A-1;
            B = B-2;
            out2++;
            if(A==1 && B==1){
                break;
            }
            else if((A==1 && B>=2) || (B==1 && A>=2)){
                out2++;
                //cout<<"awa"<<out2<<endl;
                break;
            }
            else if(A==0||B==0){
                break;
            }
            else if(A>=2 && B>=2){
                A=A-2;
                B = B-1;
                out2++;
                if(A==1 && B==1){
                    break;
                }
                else if((A==1 && B>=2) || (B==1 && A>=2)){
                    out2++;
                    break;
                }
                else if(A==0||B==0){
                    break;
                }
            }
        }
        int out3 = 0;
        while(true){
            a1=a1-1;
            b1 = b1-2;
            out3++;
            if(a1==1 && b1==1){
                break;
            }
            else if((a1==1 && b1>=2) || (b1==1 && a1>=2)){
                out3++;
                //cout<<"awa"<<out2<<endl;
                break;
            }
            else if(a1==0||b1==0){
                break;
            }
            else if(a1>=2 && b1>=2){
                a1=a1-1;
                b1 = b1-2;
                out3++;
                if(a1==1 && b1==1){
                    break;
                }
                else if((a1==1 && b1>=2) || (b1==1 && a1>=2)){
                    out3++;
                    break;
                }
                else if(a1==0||b1==0){
                    break;
                }
            }
        }
        //cou
        int out4 = 0;
        while(true){
            a2=a2-2;
            b2 = b2-1;
            out4++;
            if(a2==1 && b2==1){
                break;
            }
            else if((a2==1 && b2>=2) || (b2==1 && a2>=2)){
                out4++;
                //cout<<"awa"<<out2<<endl;
                break;
            }
            else if(a2==0||b2==0){
                break;
            }
            else if(a2>=2 && b2>=2){
                a2=a2-2;
                b2 = b2-1;
                out4++;
                if(a2==1 && b2==1){
                    break;
                }
                else if((a2==1 && b2>=2) || (b2==1 && a2>=2)){
                    out4++;
                    break;
                }
                else if(a2==0||b2==0){
                    break;
                }
            }
        }
        int a[4] = {out1,out2,out3,out4};
        int max=0;
        for(int i=0;i<4;i++){
            if(a[i]>max){
                max = a[i];
            }
        }
        cout<<max;
    }
    else{
        cout<<0;
    }

} 
