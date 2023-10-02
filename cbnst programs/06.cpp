/*Write a program to implement Newton Forward Interpolation.*/

/* Forward interpolation */
/*
 f(x) = f(a+uh)= f(a) + u ⨺f(a) +  u(u-1)/ 2!* ⨺^2f(a) + u(u-1)(u-2) / 3! ⨺^3f(a) 
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Calculating u mentioned in the formula

float u_cal(float u, int n)
{
    float temp =u;
    for(int i=1;i<n;i++)
    {
        temp = temp * (u-i);
    }
    return temp;
}

//  Calculating factorial of given number n
int fact(int n)
{
    int f=1;
    for(int i=2;i<=n;i++) f*=i;
    return f;
}

int main()
{
    // Number of values given
    int n=4;
    float x[] = {45,50,55,60};
    // y[][] is used for difference table
    // y[][0] is used for input

    float y[n][n];
    y[0][0]=0.7071;
    y[1][0]=0.7660;
    y[2][0]=0.8192;
    y[3][0]=0.8660;

    /* Calculating the forward difference table*/
    for(int i=1;i<n;i++)  // column
    {
        for(int j=0;j<n-i;j++)  // row
        {
            y[j][i] = y[j+1][i-1] - y[j][i-1]; 
        }
    }

    /* Displaying the table*/
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<"\t";
        for(int j=0;j<n-i;j++)
        {
            cout<<y[i][j]<<"\t";
        }
        cout<<endl;
    }

    /* Value to interpolate at*/
    float value=52;

    /*Initializing u and sum */
    float sum = y[0][0];
    float u = (value - x[0])/(x[1]-x[0]);
    for(int i=1;i<n;i++)
    {
        sum=sum+ (u_cal(u,i)*y[0][i])/fact(i);
    }

    cout<<endl<<"Value at:"<<value<<" is: "<<sum<<endl;
    return 0;
}