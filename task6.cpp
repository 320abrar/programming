#include<iostream>
using namespace std;
float num(int number);
main()
{
    int number;
     cout<<"enter the number";
     cin>>number;
     float result;
     result=num(number);
   cout<<"the number multiplied by 5 is :"<<result;
}
float num(int number)
{
    float mul;
    mul=number*5;
    return mul;
}