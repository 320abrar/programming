#include<iostream>
using namespace std;
float pool(float volume,float p1,float p2,float hours);
float contribution(float result,float p,float volume,float hours);
void overflow(float filled,float volume,float hours);
main()
{
    float volume;
    cout<<"eneter volume";
    cin>>volume;
    float p1;
    cout<<"enter the flow rate of pipe 1:";
    cin>>p1;
    float p2;
     cout<<"enter the flow rate of pipe 2:";
     cin>>p2;
     float hours;
     cout<<"enter the hours during the worker is absent:";
     cin>>hours;
     float result;
     result=pool( volume, p1, p2,hours);
     cout<<result<<"%";
     float filled=((p1+p2))*hours;
   
     float result1=contribution(result,p1,volume,hours);
     cout<<"contribution of pipe 1 is:"<<result1<<endl;
     
     float result2=contribution(result,p2,volume,hours);
     cout<<"contribution of pipe 2 is:"<<result2;
     
    overflow(filled ,volume,hours);
}
     float pool(float volume,float p1,float p2,float hours)
     {
     float poolfilled;
     float filled;
     filled=((p1+p2))*hours;
      poolfilled=((p1+p2)/volume)*hours*100;
     
     return poolfilled;
     }
     void overflow(float filled,float volume,float hours)
     {
     if(filled>volume)
     {
      cout<<"the pool has overflown with "<<filled<<"litters"<<"in "<<hours<<"hours";
     
     }

     }
     float contribution(float result,float p,float volume ,float hours)
     {
      
        float contribution1;
        cout<<result<<"test"<<p<<endl;
     contribution1=((hours*p)/(result))*10;
     return contribution1;
     


     }
