/*Write a program to find Absolute error, Relaive error and percentage error*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double true_value, app_val;
    cout<<"Enter True value:";
    cin>>true_value;
    cout<<"Enter Approximate value:";
    cin>>app_val;

    // Absolute value
    double absolute_error = abs(true_value-app_val);

    // Relative value
    double relative_error = absolute_error/true_value;

    // Percentage error;
    double percentage_error = relative_error * 100;

    cout<<"Absolute Error:"<<absolute_error<<endl;
    cout<<"Relative Error:"<<relative_error<<endl;
    cout<<"Percentage Error:"<<percentage_error<<endl;
    
    return 0;
}