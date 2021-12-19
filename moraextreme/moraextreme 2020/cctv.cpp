#include<bits/stdc++.h>
using namespace std;


int X[] = {0, 0, 1, 1, 1, -1, -1, -1};
int Y[] = {1, -1, 0, 1, -1, 0, 1, -1};

string solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F)
{
    int rect[A+1][B+1];
    memset(rect, 0 , sizeof(rect));

    for(int i=0;i<=A;i++)
        for(int j=0;j<=B;j++)
            for(int k=0;k<C;k++)
                if(sqrt(pow(E[k]-i, 2) + pow(F[k]-j, 2)) <= D)
                {
                    rect[i][j] = 1;
                    break;
                }

    queue<pair<int,int> > q;
    q.push({0,0});
    rect[0][0] = 1;
    for(int i=0;i<A;i++)
        rect[0][i] = 1;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x==A && y==B/2)
            return "CAN";

        for(int i=0;i<8;i++)
        {
            int newx = x + X[i];
            int newy = y + Y[i];
            if(newx>=0 && newx<=A && newy>=0 && newy<=B && rect[newx][newy]==0)
            {
                rect[newx][newy] = 1;
                q.push({newx,newy});
            }
        }
    }
    return "CAN'T";
}

// Driver Program
int main() {

    int t,w,h;
    cin>>t>>w>>h;
    while(t--){
        int n,r;
        cin>>n>>r;
        vector<int> X1(n,0);
        vector<int> Y1(n,0);
        for(int i=0;i<n;i++)
           cin>>X1[i];
       for(int i=0;i<n;i++)
          cin>>Y1[i];
       cout<<solve(w, h, n, r, X1, Y1);
    }

}

