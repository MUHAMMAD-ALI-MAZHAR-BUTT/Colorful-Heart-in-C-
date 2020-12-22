#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
    int i, j, n;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<endl;
    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            cout<<" ";
        }

        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }

        for(j=1; j<=n-i; j++)
        {
            cout<<(" ");
        }

        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }

        cout<<"\n";
    }

    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            cout<<" ";
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            cout<<"*";
        }

        cout<<"\n";
    }

    return 0;
}
