#include <iostream>

using namespace std;

int main()
{  long int current=1,sum=0,pre=1,next=0;
    while(next<=4000000)
    {
        next=current+pre;
        pre=current;
        current=next;
        if(next%2==0)
            sum=sum+next;
    }
    cout<<sum;
    return 0;
}
