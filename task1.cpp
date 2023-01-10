#include<iostream>
#include<windows.h>
using namespace std;
int add(int number1,int number2);
float division(int number1,int number2);
main()
{
system("cls");
int number1;
int number2;
float result;
cout<<"enter first no";
cin>>number1;
cout<<"enter second no";
cin>>number2;
result=add(number1,number2);
cout<<result<<endl;
result=division(number1,number2);
cout<<result;
}
int add(int number1,int number2)
{
int sum;
sum=number1+number2;

return  sum;
}
float division(int number1,int number2)
{
float divide;
divide=number1/number2;

return divide;
}