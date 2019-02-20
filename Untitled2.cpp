#include <stdio.h>
#include <iostream>
#include <math.h>

#include <graphics.h>

using namespace std;

void figure(int x,int y,int r,int k){
   
   if(k % 2 ==0){  
   circle(x,y,r);
}
 else{
   int a1=x-r/sqrt(2);
   int b1=y-r/sqrt(2);
   int a2=x+r/sqrt(2);
   int b2=y+r/sqrt(2);
   rectangle(a1,b1,a2,b2);
}
   setfillstyle(SOLID_FILL,k%5);
   floodfill(x,y,WHITE);
   if(k!=0){
   if(k % 2 != 0){
    k--;
    figure(x,y,r/sqrt(2),k);
    }
    else{
         k--;
    figure(x,y,r,k);
         }
}
}        
   
int main( )
{
	initwindow( 640 , 480 , "WinBGIm" );
	figure(250,250,100,8);
	while( !kbhit() ); 
    closegraph( );
    return( 0 );
}

