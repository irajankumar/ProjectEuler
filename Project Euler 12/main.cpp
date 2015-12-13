#include <iostream>
#include<inttypes.h>
#include<math.h>
using namespace std;

int no_of_factors(uint64_t no)
{
    uint64_t n=sqrt(no)+1;
    int counter=0;
    for(uint64_t i=1;i<=n;i++)
    {
        if(no%i==0)
            counter++;
    }
    return (2*counter)+1;
}
int main()
{
    cout << "okay I am calculating triangle numbers" << endl;
    uint64_t n=1;
    int big=0;
    while(1)
    {
        uint64_t tri=(((n*(n+1))/2));
        int res=(no_of_factors(tri));
        if(res>big)
        {
            big=res;
         cout<<"calculation is now at"<<res<<endl;
        }
        if(res>500)
        {
            cout<<"Required number is"<<tri;
            break;
            return 0;
        }

        n++;
    }
    return 0;
}
