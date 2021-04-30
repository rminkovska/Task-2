#include <iostream>
using namespace std;
int main ()
{
    cout<<"Enter a year:"<<endl;
    int n;
    cin>>n;
    if(n%4==0 && n%100!=0 or n%400==0)
    {
        cout<<"\nThis year is leap\n\n";
    }
    else
    {
        cout<<"\nThis year in NOT leap\n\n";
    }

return 0;
}

