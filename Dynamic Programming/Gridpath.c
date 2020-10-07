#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    int n ,i,j;
    cin>>n;
    vector<vector<char> > plot(n,vector<char>(n,0));
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>> plot[i][j];
        }
    }
    vector<vector<long long> > dp(n+1,vector<long long>(n+1,0));
    // dp[0][0]=0;
    long long MOD=1000000007;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 && j==1 && plot[i-1][j-1]=='.'){
                dp[i][j]=1;
                continue;
            }
            else{
                if(plot[i-1][j-1]=='.'){
                    dp[i][j]=(dp[i-1][j]+dp[i][j-1])%MOD;
                }
            }
            
        }
    }
    cout<<dp[n][n]%MOD;
    return 0;
}
 