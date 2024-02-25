#include<iostream>
using namespace std;
int Solution::trap(const vector<int> &A) {
    int n=A.size();
    // int left[]=new int[n];
    // int right[]=new int[n];

    
    int maxfromL[A.size()];
    int maxfromR[A.size()];
    // left[0]=A[0];
    maxfromL[0]=A[0];
    for(int i=1;i<n;i++)
    {
        // left[i]=Math.max(left[i-1],A[i]);
        
        maxfromL[i]=max(A[i],maxfromL[i-1]);
    }
    // right[n-1]=A[n-1];
    maxfromR[A.size()-1]=A[A.size()-1];
    for(int i=n-2;i>=0;i--)
    {
        // right[i]=Math.max(right[i+1],A[i]);
        maxfromR[i]=max(maxfromR[i+1],A[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
    //  ans+=(Math.min(left[i],right[i])-A[i]);   
    ans+=(min(maxfromL[i],maxfromR[i])-A[i]);
    }
    return ans;
}
