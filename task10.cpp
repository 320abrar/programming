#include<iostream>
using namespace std;
main()
{
    int hour;
    int min;
    cout<<"intput hours :";
    cin>>hour;
    cout<<"input munutes:";
    cin>>min;
     min=min+15;
  
    if(min>=60)
    {
       min=min-60; 
       hour=hour+1;
    
    }
    if(hour>23)
        {
            hour=0; 
            cout<<"df";
        }
         cout<<hour<<":"<<min;  
      }