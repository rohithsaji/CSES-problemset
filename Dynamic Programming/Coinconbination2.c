#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long MOD=1000000007,temp;
    long i,j,n,x;
    cin>>n>>x;
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    dp[0][0]=1;
    vector<int> a(n);
    // vector<long long> dp(x+1);
    // dp[0]=1;
    
    for(i=0;i<n;i++)
    cin>>a[i];
 
    // sort(a.begin(),a.end());
    for(i=1;i<=n;i++){
        for(j=0;j<=x;j++){
            if(j==0)
                dp[i][j]=1;
            else{
                dp[i][j]=dp[i-1][j];
                if(j>=a[i-1] && dp[i][j-a[i-1]]!=0){
                    // if(dp[i][j]!=0)
                        // if(j!=n)
                        temp= (long long)(dp[i][j]+dp[i][j-a[i-1]]);
                        temp%=MOD;
                        dp[i][j]=temp;
                        
                }
            }
        }
    }
    cout<<dp[n][x];
    return 0;
}