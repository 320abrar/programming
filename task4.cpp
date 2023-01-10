#include<iostream>
#include<cmath>
using namespace std;
void work(float neededhours,float days,float workers);
main()
{
    float neededhours;
    cout<<"input the hours neede";
    cin>>neededhours;
    float days;
    cout<<"input the days firm has";
    cin>>days;
    float workers;
    cout<<"input the workers";
    cin>>workers;
    work(neededhours,days,workers);
}
    void work(float neededhours,float days,float workers)
     {
        float hoursget;
        float daysnotused=(days*10)/100;
        days=days-daysnotused;
        floor(days);
        hoursget=(days*10)*workers;
        if(hoursget<neededhours)
        {
            cout<<"not enough time more hours are neede";
            float h;
            h=neededhours-hoursget;
            cout<<"you need "<<h<<"hours more";
        }
        if(hoursget>neededhours)
        {
            cout<<"hours left";
            float g;
            g=hoursget-neededhours;
            cout<<"you have"<<g<<"hours more";

        }
    }





