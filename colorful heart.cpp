#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
HANDLE colors=GetStdHandle(STD_OUTPUT_HANDLE);
	
    int i, j, n;
    SetConsoleTextAttribute(colors,5);
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<endl;
    for(i=n/2; i<=n; i+=2)
    {	
	
        for(j=1; j<n-i; j+=2)
        {
        	SetConsoleTextAttribute(colors,0);
            cout<<" ";
        }

        for(j=1; j<=i; j++)
        {
		 SetConsoleTextAttribute(colors,j);
            cout<<"*";
        }

        for(j=1; j<=n-i; j++)
        {
        	SetConsoleTextAttribute(colors,0);
            cout<<(" ");
        }

        for(j=1; j<=i; j++)
        {
        	SetConsoleTextAttribute(colors,j);
            cout<<"*";
        }
       SetConsoleTextAttribute(colors,0);
        cout<<"\n";
    }

    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
        	SetConsoleTextAttribute(colors,0);
            cout<<" ";
        }

        for(j=1; j<=(i*2)-1; j++)
        {
        	SetConsoleTextAttribute(colors,j);
            cout<<"*";
        }
          SetConsoleTextAttribute(colors,0);
        cout<<"\n";
    }
   

    return 0;
}
