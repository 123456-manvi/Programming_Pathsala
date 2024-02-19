#include<iostream>
using namespace std;
class Solution{
public:
vector<int> getNextPermutation(vectot<int> &A)
{
  int ind=-1;
int n=A.size();
// find last index ..by traverse the array..
for(int i=n-2;i>=0;i--)
{
if(A[i]<A[i+1])
{
ind=i;
break;
}
}

// now if no brea point exist..
if(ind==-1)
{
reverse(A.begin(),A.end());
  return A;
}

// now find last 2 second index of an array..
for(int i=n-1;i>ind;i--)
{
if(A[i]>A[ind])
 {
 swap(A[i],A[ind]);
   break;
 }
}

// now reverse rem element of an array..
reverse(A.begin()+ind+1,A.end());
return A;
}
};
