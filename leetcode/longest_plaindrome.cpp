//expand around center method


class Solution {
public:
    string intestPalindrome(string s) {
        int n = s.size();
        int startIndex=0,endIndex=0;
        for(int i=0;i<n;i++){
            int length1 = expandFromMiddle(s,i,i,n);
            int length2 = expandFromMiddle(s,i,i+1,n);
            int length = max(length1,length2);
            if(length>(endIndex-startIndex)){
                startIndex = i-(length-1)/2;
                endIndex = i+length/2;
                cout<<startIndex<<" "<<endIndex<<" "<<length<<" "<<s.substr(startIndex,endIndex-startIndex+1)<<endl;
            }            
        }
        return s.substr(startIndex,endIndex-startIndex+1);
    }
    int expandFromMiddle(string s,int left,int right,int n){
        while(0<=left && right<n && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
};




//dynamic programming
class Solution {
public:
    string intestPalindrome(string s) {
        int n = s.size();
        vector<vector<int>> dp(n,vector<int>(n));
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(i==j){
                    dp[i][j]=1;
                    continue;
                }
                if(s[i]==s[j] && (dp[i+1][j-1]!=0)){
                    dp[i][j] = dp[i+1][j-1]+2;
                }
                else if(s[i]==s[j] && (j-i)==1){
                    dp[i][j] = dp[i+1][j-1]+2;
                }
            }
        }
        int max = 0;
        int start = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dp[i][j]>max){
                    max = dp[i][j];
                    start = i;
                }
            }
        }
        return s.substr(start,max);
    }
   
};
