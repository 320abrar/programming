#include<iostream>
#include<windows.h>
using namespace std;
void printmaiz();
void gotoxy(int x,int y);
char getcharAtxy(short int x,short int y);
void erase(int x,int y);
void printpac(int x,int y);
main()
{  
 system("cls");
 int x = 30, y = 17;
//  int x,y;
//  cout<<"enter X";
//  cin>>x;
//  cout<<"enter Y";
//  cin>>y;
 bool gameRunning=true;
  printmaiz();
printpac(x,y);
 erase(x,y);
 while(gameRunning)
 {
    if(GetAsyncKeyState(VK_LEFT))
    {
        char nextLocation=getcharAtxy(x-1,y);
        if(nextLocation == ' '|| nextLocation == '.')
        {
        erase(x,y);
        x=x-1;
        printpac(x,y);
        }
    }
     if(GetAsyncKeyState(VK_RIGHT))
    {
        char nextLocation=getcharAtxy(x+ 1,y);
        if(nextLocation == ' '|| nextLocation == '.')
        {
        erase(x,y);
        x=x+1;
        printpac(x,y);
        }
    }
     if(GetAsyncKeyState(VK_UP))
    {
        char nextLocation=getcharAtxy(x,y-1);
        if(nextLocation == ' '|| nextLocation == '.')
        {
        erase(x,y);
        y=y-1;
        printpac(x,y);
        }
    }
     if(GetAsyncKeyState(VK_DOWN))
    {
        char nextLocation=getcharAtxy(x,y+1);
        if(nextLocation == ' '|| nextLocation == '.')
        {
        erase(x,y);
        y=y+1;
        printpac(x,y);
        }

    }
    if(GetAsyncKeyState(VK_ESCAPE))
    {
        gameRunning=false;
    }
        Sleep(200);
}

 }
 

void printmaiz()
{
cout<<"    #################################################################################################"<<endl;                                                                                                                                                                                     
cout<<"    ||.. ...............................................................................   .....   ||"<<endl;                                                                                                                                                  
cout<<"    ||.. %%%%%%%%%%%%%%%%%%%%%%%            ...          %%%%%%%%%%%%%%%%%%%%%%%   |%|..   %%%%    ||"<<endl;                                                                                                                                             
cout<<"    ||..              |%|    |%|         |%|...          |%|                 |%|   |%|..    |%|    ||"<<endl;                                                                                                               
cout<<"    ||..              |%|    |%|         |%|...          |%|                 |%|   |%|..    |%|    ||"<<endl;                      
cout<<"    ||..              %%%%%%%%%%%    . . |%|...          %%%%%%%%%%%%%%%%%%%%%%%      ..   %%%%.   ||"<<endl; 
cout<<"    ||..              |%|            . . |%|...          .......................  |%| ..       .   ||"<<endl; 
cout<<"    ||..              %%%%%%%%%%%%%%%. . |%|...          %%%%%%%%%%%%%%%%%%%%     |%| ..   %%%%.   ||"<<endl; 
cout<<"    ||..                          |%|.                   |%|..............        |%| ..    |%|.   ||"<<endl; 
cout<<"    ||..           .............. |%|.                   |%|..............|%|         ..    |%|.   ||"<<endl; 
cout<<"    ||..|%|        |%|%%%%%%%%|%|.|%|. |%|                  ..............|%|         ..|%| |%|.   ||"<<endl; 
cout<<"    ||..|%|        |%|        |%|..    %%%%%%%%%%%%%%%%%%   ..............|%|          .|%|.       ||"<<endl; 
cout<<"    ||..|%|        |%|        |%|..                ...|%|           %%%%%%%%%         . |%|.       ||"<<endl; 
cout<<"    ||..|%|                       .                ...|%|                         |%| ..|%|.       ||"<<endl; 
cout<<"    ||..|%|        %%%%%%%%%%%%%%%%%%%             ...|%|%%%%%%%%%%%%%%%%%%       |%| ..|%|%%%%%   ||"<<endl; 
cout<<"    ||........................................................................    |%| ..........   ||"<<endl; 
cout<<"    ||..     .................................................................           .......   ||"<<endl; 
cout<<"    ||..|%|        |%|        |%|..   %%%%%%%%%%%%%%%%%%%    .............|%|     |%| ..|%|.       ||"<<endl; 
cout<<"    ||..|%|        |%|        |%|..                ...|%|         %%%%%%%%%%%     |%| ..|%|.       ||"<<endl; 
cout<<"    ||..|%|                       .                ...|%|                         |%| ..|%|.       ||"<<endl; 
cout<<"    ||..|%|        %%%%%%%%%%%%%%%                 ...|%|%%%%%%%%%%%%%%%          |%| ..|%|%%%%%   ||"<<endl; 
cout<<"    ||........................................................................    |%| ..........   ||"<<endl; 
cout<<"    ||........................................................................           .......   ||"<<endl; 
cout<<"    ################################################################################################"<<endl;
 }
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
 
    void printpac(int x,int y)
{

 gotoxy(x,y);
 cout<<"p";
 Sleep(500);
    
}
 void erase(int x,int y)
 {

 gotoxy(x,y);
 cout<<" ";
 y=y-1;

 }

 
 char getcharAtxy(short int x,short int y)
 {
    CHAR_INFO ci;
    COORD xy={0,0};
    SMALL_RECT rect={x,y,x,y};
    COORD coordBufsize;
    coordBufsize.X=1;
    coordBufsize.Y=1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci,coordBufsize,xy,&rect) ? ci. Char.AsciiChar : ' ';
 }