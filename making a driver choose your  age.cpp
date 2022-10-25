//making a traffic sysytem 

#include <iostream>
using namespace std ;
int main (){
    int age ;
    cout <<"enter the value of age is ";
    scanf("%d" , &age );
    if (age >18 )
    {
        cout <<"you can drive it \n ";

    }
    else if (age <18 )
    {
        cout <<"no you can not driive it \n ";

    }

    else if (age == 18)
    {
        cout <<"you can not drive it because you are just 18 \n ";
        
    }
    
    
    
    return 0;

}