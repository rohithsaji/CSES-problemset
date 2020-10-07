#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
 
using namespace std;
int main(){
    // long long MOD=1000000007,temp;
    int i,j,n,x;
    cin>>n;
    // vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    // dp[0][0]=1;
    vector<int> a(n+1,-1);
    a[n]=0;
    // vector<long long> dp(x+1);
    // dp[0]=1;
    for(i=n;i>0;i--){
        x=i;
        if(a[i]==-1)
            continue;
        while(x!=0){
            // cout<<"ok";
            j=x%10;
            x/=10;
            if(j==0)
                continue;
            if(a[i-j]>a[i]+1)
            a[i-j]=a[i]+1;
            else if(a[i-j]==-1)
            a[i-j]=a[i]+1;
           
        }
    }
    cout<<a[0];
    return 0;
