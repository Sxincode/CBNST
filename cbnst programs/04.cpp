/* Write a program to implement Regular Falsi method*/

#include<bits/stdc++.h>
#include<iostream>
# define f(x) x*x*x-4*x-9
# define e 0.0001
using namespace std;
int main()
{
    double x0,x1,x2 , f0,f1,f2;
    cout<<"Enter x0 and x1:"; // 2,3
    cin>>x0>>x1;
    do
    {
        f0=f(x0);
        f1=f(x1);

        x2= (x0 * f1 - x1 * f0) / (f1- f0);
        f2 = f(x2);

        if(f2*f0<0)
        {
            x1=x2;
            f1=f2;
        }
        else
        {
            x0=x2;
            f0=f2;
        }
    }while(fabs(f2)>e);
    cout<<"Root is :"<<x2<<endl;
    return 0;
}