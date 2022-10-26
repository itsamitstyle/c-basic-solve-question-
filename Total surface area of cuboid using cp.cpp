// Total surface area of cuboid
// 2(l×b + b×h + l×h)
#include<iostream>
using namespace std ;
int main (){
    int leanght ;
    int breadth ;
    int height;
    cout <<"enter the value of leanght";
    scanf("%d", &leanght);
    cout <<"enter the value of breadth";

    scanf("%d", &breadth);
    cout <<"enter the value of height";
    scanf("%d", &height);
    int cubde ;
    cubde = 2*leanght*breadth+breadth*height+leanght*height ;
    cout <<"the cubde is %d \n  : "<<cubde<<endl;
    return 0;
    
}