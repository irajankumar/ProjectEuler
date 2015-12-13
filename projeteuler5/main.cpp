#include <iostream>

using namespace std;
int main()
{
    int no,ct;
    cout<<"Enter upper limit:";
    cin>>no;
    ct=no;
    while(1)
    { ct++;
        int flag=1;
     for(int i=2;i<=no;i++)
    {
        if(ct%i==0) flag++;
        else
            break;
    }
    if(flag==no)
        break;
    }
    cout<<"No is"<<ct;
    return 0;
}
