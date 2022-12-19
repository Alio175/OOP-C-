#include <iostream>
using namespace std;

class point{

 private:
  int x,y;
 public:
 point(){
    x=0;
    y=0;
 } 
 point (int x1, int y1) {
    x=x1;
    y=y1;

 }
 void setx(int x2){ 
    x=x2;
 }
 int getx(){
    return x;
 }
 void sety(int y2){
     y=y2;
 }
 int gety(){
    return y;
 }
void display(){

    cout<<"The coordinates of P are: ("<<x<<","<<y<<")"<<endl;
}

};

int main(){
 point p1;
 cout<<"Point p1:"<<endl;
p1.display();
 p1.setx(6);
 p1.sety(9);
 p1.display();

 cout<<"Point p2:"<<endl;
  point p2(5,2);
 p2.display();
    

return 0;
}