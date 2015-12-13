#include <iostream>
#include<inttypes.h>
#include<vector>
using namespace std;
uint32_t seq_size(uint64_t n)
{
    vector<uint64_t>sequence;
    while(n>1)
    {
    if(n%2==0)
        n=n/2;
    else
        n=((3*n)+1);
    sequence.push_back(n);
    }
 return sequence.size()+1;
}
int main()
{
    cout << "Okay let's play with collatz problem!"<< endl;
    // We are given with limit of number of 1 million so
    uint64_t limit=1;
    uint64_t seqsize=0;
    while(limit<1000000)
    {
        uint64_t temp=seq_size(limit);
        if(temp>seqsize)
        {
         seqsize=temp;
       cout<<" We are now at "<<limit<<" seq size of this is "<<temp<<endl;
        }
        limit++;
    }
return 0;
}
