#include <cstdio>
#include <algorithm>
#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#include<bits/stdc++.h>
int arr[2001][2000];
int dp1[2000][2000];
int dp2[2000][2000],dp3[2000][2000],dp4[2000][2000];
int main()
 {
   int n,m;cin>>n>>m;
   for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++) cin>>arr[i][j];
    
    // dp1;; 
    for(int i=1;i<=n;i++)
     {
       for(int j=1;j<=m;j++)
        {
          dp1[i][j]=max(dp1[i-1][j]+arr[i][j],dp1[i][j-1]+arr[i][j]);
     }
  }
  
  for(int i=n;i>=1;i--)
     {
       for(int j=1;j<=m;j++)
        {
          dp2[i][j]=max(dp2[i+1][j]+arr[i][j],dp2[i][j-1]+arr[i][j]);
     }
  }
  
  for(int i=1;i<=n;i++)
     {
       for(int j=m;j>=1;j--)
        {
          dp3[i][j]=max(dp3[i-1][j]+arr[i][j],dp3[i][j+1]+arr[i][j]);
     }
  }
  
  
   for(int i=n;i>=1;i--)
     {
       for(int j=m;j>=1;j--)
        {
          dp4[i][j]=max(dp4[i+1][j]+arr[i][j],dp4[i][j+1]+arr[i][j]);
     }
  }

  int ans=INT_MIN;
  for(int i=2;i<n;i++)
   {
     for(int j=2;j<m;j++)
      
      {
       
       ans=max(ans,dp1[i-1][j]+dp4[i+1][j]+dp2[i][j-1]+dp3[i][j+1]);
      //  cout<<i<<" "<<j<<" ans "<<ans<<endl;
       ans=max(ans,dp1[i][j-1]+dp4[i][j+1]+dp2[i+1][j]+dp3[i-1][j]);
      //  cout<<i<<" "<<j<<" ans "<<ans<<endl;
       
    
      }
   }
    cout<<ans<<endl;
 }