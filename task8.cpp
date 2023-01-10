#include<iostream>
using namespace std;
void evenorodd(int num);
main()
{
    int num;
    cout<<"enter number";
    cin>>num;
    evenorodd(num);

}
void evenorodd(int num)
{
    int a;
    a=num%10;
    int b;
    b=num/10;
    int c;
    c=b%10;
    int d;
    d=b/10;
    int e;
    e=d%10;
    int f;
    f=d/10;
    int g;
    g=f%10;
    int h;
    h=f/10;
    int i;
    i=h%10;
    int total;
    total=a+c+e+g+i;
    if(total%2==0)
    {
        cout<<"the number is evenish";
    }
    else
    {
    cout<<"the number is oddish";
}

}