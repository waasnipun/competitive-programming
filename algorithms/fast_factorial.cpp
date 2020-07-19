
const int mxn = 1e6, mod = 1e9+7;
int fac_dp[mxn+1],f1[mxn+1],f2[mxn+1];

void cal_factorial(){
    //finding the factorial
    fac_dp[1] = 1;
    for(int i=2;i<=mxn;i++)
        fac_dp[i] = mod-mod/i*fac_dp[mod%i]%mod;
    f1[0] = f2[0] = 1;
    for(int i=1;i<=mxn;i++){
        f1[i] = f1[i-1]*i%mod;
        f2[i] = f2[i-1]*fac_dp[i]%mod;
    }
}

//f1 = numerator f2 = denominator