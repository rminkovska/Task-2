#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    srand(time(0));
    int comp= rand()%3;
    int n;
    cout<<"scissor (0), rock (1), paper (2):";
    cin>>n;
    if(comp==0)
    {
           cout<<"The computer is scissor"<<endl;
    }
     if(comp==1)
    {
           cout<<"The computer is rock"<<endl;
    }
    if(comp==2)
    {
           cout<<"The computer is paper"<<endl;
    }
    if(n==0)
    {
           cout<<"You are scissor"<<endl;
    }
     if(n==1)
    {
           cout<<"You are rock"<<endl;
    }
    if(n==2)
    {
           cout<<"You are paper"<<endl;
    }
    for(int i=0; i<n; i++)
    {
        if(n==comp)
        {
            cout<<"It is a draw!";
            break;
        }
        if(comp==0)
        {
            if(n==1)
            {
                cout<<"You win!";
                break;
            }
            if(n==2)
            {
                cout<<"You lose!";
                break;
            }
        }
        if(comp==1)
        {
            if(n==0)
            {
                cout<<"You lose!";
                break;
            }
            if(n==2)
            {
                cout<<"You win!";
                break;
            }
        }
        if(comp==2)
        {
            if(n==0)
            {
                cout<<"You win!";
                break;
            }
            if(n==1)
            {
                cout<<"You lose!";
                break;
            }
        }
    }
return 0;
}
