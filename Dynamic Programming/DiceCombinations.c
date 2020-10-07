#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long MOD=1000000007,k=0;
    int i,j,n;
    cin>>n;
    vector<long long> dp(n+1);
    dp[0]=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=min(i,6);j++){
            dp[i]=(dp[i]+dp[i-j])%MOD;
    }
    }
    cout<<dp[n];
    return 0;
