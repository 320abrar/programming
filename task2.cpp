#include<iostream>
using namespace std;
float pyrmidvolume(float length,float hieght,float width, float volume,string unit);
main()
{
  float length,hieght,width;  
  cout<<"enter the length:";
  cin>>length;
  cout<<"enter the hieght";
  cin>>hieght;
  cout<<"enter the width";
  cin>>width;
  string unit;
  cout<<"enter the unit";
  cin>>unit;
  float result;
  float volume;
  result=pyrmidvolume(length,hieght,width,volume,unit);
  cout<<result;
  }
   float pyrmidvolume(float length,float hieght,float width, float volume,string unit)
  {
    volume=(length*hieght*width)/3;
    if(unit=="millimeter")
    {
        float a=(1000*1000*1000);
        volume=(volume*1000)*a;
        volume=volume/1000;
    }
    if(unit=="centimeter")
    {
        float b=(100*100*100);
        volume=(volume*100)*b;
        volume=volume/100;
    }
    if(unit=="kilometer")
    {
        float a=(1000*1000*1000);
        volume=(volume/1000)/a;
        volume=volume/1000;
    }
    return volume;
  } 
