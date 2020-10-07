#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long MOD=1000000007;
    int i,j,n,x;
    cin>>n>>x;
    // vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    // dp[0][0]=1;
    vector<int> a(n);
    vector<long long> dp(x+1,0);
    dp[0]=1;
    
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    for(i=1;i<=x;i++){
        for(j=0;a[j]<=i && j<n;j++){
           dp[i]=(dp[i]+dp[i-a[j]])%MOD;
        }
    }
    cout<<dp[x];
    return 0;