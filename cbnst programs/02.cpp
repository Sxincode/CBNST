/* Bisection method */

/*
 function f(x) = (x)^3 - 4*(x) - 9
 a = 2
 b= 3
 ans = 2.7s
*/

#include<bits/stdc++.h>
#include<iostream>
# define epsilon 0.01
using namespace std;
/*Let the function be f(x)=(x)^3- 4*(x) -9  */
double func(double x)
{
    return x*x*x-4*x-9;
}
void bisection(double a,double b)
{
    if(func(a)*func(b)>=0)
    {
        cout<<"You have assumed wrong a and b"<<endl;
        return ;
    }
    double c =a;
    while((b-a)>=epsilon)
    {
        /*Finding middle point*/
        c = (a+b)/2.0;

        /*Check if middle point is root*/
        if(func(c)==0.0)
        {
            break;
        }
        else if(func(c)*func(a)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
    }
    cout<<"The Value of root is:"<<c<<endl;

}
int main()
{
    double a=2 , b=3;
    bisection(a,b);
    return 0;
}

