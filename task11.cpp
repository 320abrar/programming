#include<iostream>
using namespace std;
bool symmetrical(int number);
main()
{
    int number;
    cout<<"enter the number";
    cin>>number;
    bool truee;
    truee=symmetrical(number);
    cout<<truee;
    

}
bool symmetrical(int number)
{
    if(number%10==number/100)
    {
   return 1; 
    }
    return 0;
}