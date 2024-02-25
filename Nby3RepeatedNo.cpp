// N/3 Repeat Number
int Solution::repeatedNumber(const vector<int> &A) {
    // std::vector<int> repeatedNumber(const std::vector<int>& A){

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   
    int n=A.size();
 int cnt1 = 0, cnt2 = 0; // counts
    int el1 = INT_MIN; // element 1
    int el2 = INT_MIN; // element 2

    // applying the Extended Boyer Moore's Voting Algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt1 == 0 && el2 !=A[i]) {
            cnt1 = 1;
            el1 = A[i];
        }
        else if (cnt2 == 0 && el1 != A[i]) {
            cnt2 = 1;
            el2 = A[i];
        }
        else if (A[i] == el1) cnt1++;
        else if (A[i] == el2) cnt2++;
        else {
            cnt1--, cnt2--;
        }
    }
    cnt1 = 0, cnt2 = 0;
    for (int num : A) {
        if (num == el1)
            cnt1++;
        else if (num == el2)
            cnt2++;
    }

    int mini = n / 3 + 1;
    if (cnt1 >= mini)
        return el1;
    else if (cnt2 >= mini)
        return el2;
    else
        return -1; // No majority element found
}
