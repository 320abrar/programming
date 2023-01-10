#include<iostream>
using namespace std;
float cal(float price,char type,float taxamount);
main()
{
char type;
cout<<"enter the type";
cin>>type;
float price;
cout<<"enter price";
cin>>price;
float taxamount;
float result;
result=cal(price,type,taxamount);
cout<<result<<endl;
float finalprice=result+price;
 cout<<"the final price on vehical of type     " <<   type   <<"    after adding the tax   "<<    result  <<"     "<<finalprice    <<"    with the final price";

}
float cal(float price,char type,float taxamount)
{
    if(type=='m')
    {
        taxamount=(price*6)/100;
    }
     if(type=='e')
    {
        taxamount=(price*8)/100;
    }
     if(type=='s')
    {
        taxamount=(price*10)/100;
    }
     if(type=='v')
    {
        taxamount=(price*12)/100;
    }
     if(type=='t')
    {
        taxamount=(price*15)/100;
    }
    
    return taxamount;
}
