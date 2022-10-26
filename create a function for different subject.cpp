//createa  a different function for different subject

#include<iostream>
using namespace std ;
//create a function 
void area ();
void celcious ();
void circle();


int main(){
   char ch ;
   cout <<"enter the value of character \n ";
   scanf("%c" , &ch);
   if (ch == 'm')
   {
    area();
   }
   else if (ch == 'n')
   {
     celcious();
   }
   else if (ch == 'b')
   {
     circle();
   }
   
   
   
    
    return 0;
}
//first funcion
void area (){
    int leangth ;
    int breadth;
    cout <<"enter the value of leanght ";
    scanf("%d" , &leangth);
    cout <<"enter the value of breadth ";
    scanf("%d" , &breadth);
    int area ;
    area = leangth*breadth;
    cout <<"enter the value of area is %d\n "<<area ;

}
void celcious (){
    int cel;
    cout <<"enter the value of cel ";
    scanf("%d" ,&cel);
    int fer;
    fer = cel*9/5+32;
    cout <<"the value of fernhite  is %d\n "<<fer ;

}
void circle(){
    int radious =23;
    int circle ;
    circle = radious*radious *3.14 ;
    cout <<"the value of circle is %d \n "<<circle;


}