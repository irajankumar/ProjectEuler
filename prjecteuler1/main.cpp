#include <iostream>
using namespace std;
int main()
{   int sum=0;
    for(int n=0;n<1000;n++)
    {  if((n%3==0)||(n%5==0))
        sum=sum+n;
    }
    cout<<sum;
    return 0;
}
