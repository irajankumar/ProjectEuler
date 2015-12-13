#include <iostream>
#include<vector>
//This program finds out the largest prime factor of given input
using namespace std;

int main()
{
    long int n,big;
    cin>>n;
    vector<long int>primes;
    for(long int l=2; l<n; l++)
    {    int ct=0;
        for(int m=2;m<l;m++)
        {
            if(l%m==0)
            {
                ct++;
                break;
            }
            if(ct>0) break;
        }
        if(ct==0)
            primes.push_back(l);
    }

for(int i=0; i<primes.size();i++)
{
    if(n%primes[i]==0)
        big=primes[i];
}
cout<<big;

    return 0;
}
