#include <iostream>
#include<math.h>
#include <inttypes.h>
using namespace std;
int isprime(int no)
{
    int flag=0;
    for(int j=2;j<=sqrt(no);j++)
    {
        if(no%j==0)
        {
            flag++;
            break;
        }

    }
    if(flag==0)
        return 1;
    else
    return 0;
}
int main()
{
    uint64_t sum=0;
   for(int i=2;i<=20;i++)
   {
       if(isprime(i))
       {
           cout<<i<<endl;
           sum+=i;
       }


   }
    cout<<"Total sum of primes upto 1 million is "<<sum;
    return 0;
}
