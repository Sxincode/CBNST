/* Write a program to implement Newton's Raphson method*/

#include<bits/stdc++.h>
#include<iostream>
#define f(x) (x*x*x - 4*x -9)
#define d(x) (3*x*x - 4)
#define e 0.0001
using namespace std;
void newton(double x)
{
    double h = f(x)/ d(x);
    while(fabs(h)>=e)
    {
        h= f(x)/d(x);
        x=x-h;
    }
    cout<<"Root is :"<<x<<endl;
}
int main()
{
    double x0;
    cout<<"Enter Assumed value:"; //2.5
    cin>>x0;
    newton(x0);
    return 0;
}