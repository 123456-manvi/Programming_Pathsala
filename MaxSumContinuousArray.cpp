int Solution::maxSubArray(const vector<int> &A) {    
     int maxi = INT_MIN; // maximum sum
    int sum = 0;
    int n=A.size();

    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for (int i = 0; i < n; i++) {

        if (sum == 0) start = i; // starting index

        sum +=A[i];

        if (sum > maxi) {
            maxi = sum;

            ansStart = start;
            ansEnd = i;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }


    return maxi;
}
