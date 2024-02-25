int Solution::maxArea(vector<int> &A) {
    int start=0;
    int end=A.size()-1;
    int area;
    int maxarea=0;
    
    while(start<end)
    {
        area=min(A[start],A[end])*(end-start);
        if(area>maxarea)
        maxarea=area;
        
        if(min(A[start],A[end])==A[start])
        start++;
        else
        end--;
    }
    return maxarea;
}
