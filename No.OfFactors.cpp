#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            c++;
            if(n/i!=i)
            {
                c+=1;
            }
        }
        }
        cout<<c;
    return 0;

    }
    

