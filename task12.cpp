#include <iostream>
using namespace std;
string numten(int tens);
string numone(int ones);
main()
{
    int num;
    string result1;
    string result2;
    int ones,tens;
    cout <<"Enter any two num from 1 to 99 (except 11-19)";
    cin>>num;
    ones=num%10;
    tens=num/10;
    if (num==10)
    {
        cout <<"ten";
    }
    if (tens==0)
    {
        cout<<numone(ones);
         return 0; 
    }
    result1=numten(tens);
    result2=numone(ones);
    cout <<result1;
    cout <<result2;

    
}
string numten(int tens)
{
   string twenty="twenty" , thirty="thirty",forty="forty",fifty="fifty",sixty="sixty",
   seventy="seventy",eighty="eighty",ninty="ninty";
   if (tens==0)
   {
    cout<<" ";
   }
   if (tens==2)
   {
    return twenty;
   }
   if (tens==3)
   {
    return thirty;
   }
   if (tens==4)
   {
    return forty;
   }
   if (tens==5)
   {
    return fifty;
   }
   if (tens==6)
   {
    return sixty;
   }
   if (tens==7)
   {
    return seventy;
   }
   if (tens==8)
   {
    return eighty;
   }
   if (tens==9)
   {
    return ninty;
   }
    return "0"; 

}
string numone(int ones)
{
    string one="one",two="two",three="three",four="four",five="five",six="six",
    seven="seven",eight="eight",nine="nine";
    if (ones==1)
    {
        return one;
    }
    if (ones==2)
    {
        return two;
    }
    if (ones==3)
    {
        return three;
    }
    if (ones==4)
    {
        return four;
    }
    if (ones==5)
    {
        return five;
    }
    if (ones==6)
    {
        return six;
    }
    if (ones==7)
    {
        return seven;
    }
    if (ones==8)
    {
        return eight;
    }
    if (ones==9)
    {
        return nine;
    }
    return "0";
}