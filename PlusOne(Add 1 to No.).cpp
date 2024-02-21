#include<iostream>
using namespace std;
class Solution{
public:
vector<int> plusOne(vector<int>& digits)
{
  int n=digits.size();
// 123 case..
for(int i=n-1;i>=0;i--)
{
if(digits[i]!=9)
{
digits[i]++;
break;
}
  // 999
else{
digits[i]=0;
}
}
// 999 
if(digits[0]==0)
{
vector<int> res(n+1,0);
res[0]=1;
return res;
}
return digits;
}
};
