/*Write a program to implement fixed point iteration method.*/

/*
    f(x) = (x)^3 - 4*(x) - 9
    g(x) = (4*x+9)^(1/3)
    inital value =2.5
    tolerance = 0.0001
    N =10
    ans = 2.70653
*/


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/* Given function f(x) */
#define f(x) x*x*x-4*x-9
/* Write f(x) as x=g(x)*/
#define g(x)  pow(4*x+9, (float)1/3)
int main()
{
    int step=1, N;
    double x0 , x1, e;
    cout<<"Enter Intial guess:";
    cin>>x0;
    cout<<"Enter Tolerance:";
    cin>>e;
    cout<<"Enter Minimum iteration:";
    cin>>N;
    cout<<endl<<"Step\tx0\tf(x0)\tx1\tf(x1)\n";
    do
    {
        x1=g(x0);
        cout<<step<<"\t"<<x0<<"\t"<<f(x0)<<"\t"<<x1<<"\t"<<f(x1)<<endl;
        step++;
        if(step>N)
        {
            cout<<"Not Convergent"<<endl;
            exit(0);
        }
        x0=x1;
    }while(fabs(f(x1))>e);
    cout<<"Root is:"<<x1;    
    return 0;
}