// for N/2 element.........
// use moore voting algo..for iptimal sol..
// tc ->o(n)
// sc->o(1)..
#include<iostream>
using namespace std;
class Solution{
public:
vector<int> MajorityElement(const vector<int> &A){
  int c=0;
int el;
int n=A.size();
for(int i=0;i<n;i++)
{
if(c==0)
{
c++;
el=A[i];
}
else if(A[i]==el)
{
c++;
}
else{
c--;
}
}

// now check for n/2 element..
int c1=0;
for(int i=0;i<n;i++)
{
if(A[i]==el)
{
c1++;
}
}
if(c1>n/2)
{
return el;
}
return -1;
}
};
