#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    vector<vector<int> > dp(a+1,vector<int>(b+1,0));
    // vector<int> a(n);
    int i,j,k;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            if(i!=j){
                dp[i][j]=999999;
                for(k=1;k<=i;k++){
                    dp[i][j]=min(dp[i][j],dp[i-k][j]+dp[k][j]+1);
                }
                for(k=1;k<=j;k++){
                    dp[i][j]=min(dp[i][j],dp[i][j-k]+dp[i][k]+1);
                }
            }
        }
    }
    // for(i=0;i<=a;i++){
    //     for(j=0;j<=b;j++){
    //     cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<dp[a][b];
    
    return 0;
}
 
 
 
