#include <bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp)
{
     if(xp == yp)
         return;
     *xp = *xp + *yp;
     cout<<"\n1. During swap x = "<<*xp<<" y = "<<*yp;
     *yp = *xp - *yp;
     cout<<"\n2. During swap x = "<<*xp<<" y = "<<*yp;
     *xp = *xp - *yp;
     cout<<"\n3. During swap x = "<<*xp<<" y = "<<*yp;
}

int main()
{
     int x = 10;
     int y = 33;
     cout<<"\nBefore swap x = "<<x<<" y = "<<y;
     swap(&x,&y);
     cout<<"\nAfter swap x = "<<x<<" y = "<<y<<endl;

     /*   
     x = INT_MAX;
     y = INT_MIN;

     cout<<"\nBefore swap x = "<<x<<" y = "<<y;
     swap(&x,&y);
     cout<<"\nAfter swap x = "<<x<<" y = "<<y<<endl;
     */
     /*
     x = INT_MIN;
     y = INT_MIN;

     cout<<"\nBefore swap x = "<<x<<" y = "<<y;
     swap(&x,&y);
     cout<<"\nAfter swap x = "<<x<<" y = "<<y<<endl;
     */
     x = INT_MAX;
     y = INT_MAX;

     cout<<"\nBefore swap x = "<<x<<" y = "<<y;
     swap(&x,&y);
     cout<<"\nAfter swap x = "<<x<<" y = "<<y<<endl;
     
     return 0;
}

