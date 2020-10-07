#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int i ,j,n,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    vector<vector<int> > dp(n+1,vector<int>(sum+1,0));
    dp[0][0]=1;
    int count =0;
    for(i=1;i<=n;i++){
        for(j=0;j<=sum;j++){
            if(j==0){
                dp[i][j]=1;
                continue;
            }
            dp[i][j]=dp[i-1][j];
            if(dp[i][j]==0){
                if(j>=a[i-1]){
                    if(dp[i-1][j-a[i-1]]==1){
                        dp[i][j]=dp[i-1][j-a[i-1]];
                    }
                }
            }
            if(i==n && dp[i][j]==1){
                count++;
            }
        }
    }
    cout<<count<<endl;
    // for( i=1;i<=n;i++){
    //     cout<<a[i-1]<<"    ";
    //     for(j=0;j<=sum;j++){
    //         cout<<dp[i][j]<< " ";
    //     }
    //     cout<<endl;
    // }
    for(i=1;i<=sum;i++){
        if(dp[n][i]==1)
        cout<<i<<" ";
    }
    return 0;
}
 
