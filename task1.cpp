#include<iostream>
using namespace std;
char cal(int marks);
main()
{
    int marks;
    cout<<"Apny marks bataoo";
    cin>>marks;
    char result=cal(marks);
    cout<<result;

}
char cal(int marks)
{
     char grade;
    if(marks>85)
    {
       
        grade='A';
        cout<<"your grade is";
    }
    else if(marks<85 && marks>=81)
    {
        grade='B';
        cout<<"your grade is";
    }
    else if(marks<81 && marks>=71)
    {
        grade='C';
        cout<<"your grade is";
    }
    else if(marks<70 && marks>=61)
     {

        grade='D';
        cout<<"your grade is";
     }
     else if(marks<60 && marks>=50)
     {
        grade='E';
        cout<<"your grade is";
     }
     else 
     {
        grade='F';
        cout<<"your grade is";
     }
     return grade;
}