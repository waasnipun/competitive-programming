#include<bits/stdc++.h>
using namespace std;

const int maximum_val = 100005;
const int mod = pow(10,9)+7;

int a[maximum_val];
long two[maximum_val];
int n;
int p[maximum_val],display[10005];

vector<int> merge(vector<int> left, vector<int> right)
{
   vector<int> result;
   while ((int)left.size() > 0 || (int)right.size() > 0) {
      if ((int)left.size() > 0 && (int)right.size() > 0) {
         if ((int)left.front() <= (int)right.front()) {
            result.push_back((int)left.front());
            left.erase(left.begin());
         } 
   else {
            result.push_back((int)right.front());
            right.erase(right.begin());
         }
      }  else if ((int)left.size() > 0) {
            for (int i = 0; i < (int)left.size(); i++)
               result.push_back(left[i]);
            break;
      }  else if ((int)right.size() > 0) {
            for (int i = 0; i < (int)right.size(); i++)
               result.push_back(right[i]);
            break;
      }
   }
   return result;
}

vector<int> mergeSort(vector<int> m)
{
   if (m.size() <= 1)
      return m;
 
   vector<int> left, right, result;
   int middle = ((int)m.size()+ 1) / 2;
 
   for (int i = 0; i < middle; i++) {
      left.push_back(m[i]);
   }

   for (int i = middle; i < (int)m.size(); i++) {
      right.push_back(m[i]);
   }
 
   left = mergeSort(left);
   right = mergeSort(right);
   result = merge(left, right);
 
   return result;
}

int find_gcd(int a,int b)
{
    if(b==0){
        return a;
    }
    return find_gcd(b,a%b);
}
int add(int a,int b){
    a+=b;
    if(a>=mod)a-=mod;
    return a;
}
vector<int>vect;
map<int,int> dou;
int main()
{
    cin>>n;
    memset(display,0,sizeof(display));
    for(int i=1;i<=n;i++){
        cin>>p[i];
        vect.push_back(p[i]);
    }
    vect = mergeSort(vect);
    //sort(vect.begin(),vect.end());
    vect.erase(unique(vect.begin(),vect.end()),vect.end());
    for(int i=0;i<vect.size();i++)
        dou[vect[i]]=i;
    for(int i=1;i<=n;i++)
        a[dou[p[i]]]++;
    two[0]=1;
    for(int i=1;i<=n;i++)
        two[i]=two[i-1]*2LL%mod;
    for(int i=0;i<vect.size();i++)
    {
        for(int j=1;j<=10000;j++)
            display[find_gcd(j,vect[i])]=add(display[find_gcd(j,vect[i])],1LL*(two[a[i]]-1)*display[j]%mod);
        display[vect[i]]=add(display[vect[i]],(two[a[i]]-1));
    }
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int x;
        cin>>x;
        cout<<display[x]<<endl;
    }
}