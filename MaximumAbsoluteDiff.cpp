int Solution::maxArr(vector<int> &A) {
    int n=A.size();
    // int max1=INT_MIN;
    // int min1=INT_MAX;
    // int max2=INT_MIN;
    // int min2=INT_MAX;
    
    
    // int res1,res2;
    // for(int i=0;i<A.size();i++)
    // {
    //     max1=max(max1,A[i]-i);
    //     min1=min(min1,A[i]-i);
    // }
    
    // for(int i=0;i<A.size();i++)
    // {
    //     max2=max(max1,A[i]+i);
    //     min2=min(min2,A[i]+i);
    // }
    
    // res1=max1-min1;
    //  res2=max2-min2;
    
    // return max(res1,res2);
    // ..................................both are same
    
    
    
    
     int min1=INT_MAX,max1=INT_MIN;
    int max2=INT_MIN,min2=INT_MAX;
    int maxx,maxxe;
        for(int i=0;i<A.size();i++){
            max1=max(max1,A[i]-i);
            min1=min(min1,A[i]-i);
        }
        for(int i=0;i<A.size();i++){
            min2=min(min2,A[i]+i);
            max2=max(max2,A[i]+i);
        }
         maxx=max1-min1;
         maxxe=max2-min2;
         return max(maxx,maxxe);
}
