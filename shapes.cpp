#include<iostream>
#include<math.h>
using namespace std;

class Shapes
 {
  public:
  float area=314,l=2,h=4,hp=0,sp=9999,pi=22/7;
  string hps,sps;

  void check(float peri, string s)
   {
    if(peri>hp)
     {
      hp=peri;
      hps=s;
     }
    else if(peri<sp)
     {
      sp=peri;
      sps=s;
     }
   }

  void rectangle()
   {
    float b=area/l;
    float peri=2*(l+b);
    check(peri,"rectangle");
   }

  void square()
   {
    float peri=4*sqrt(area);
    check(peri,"square");
   }

  void triangle()
   {
    float b=2*area/h;
    float peri=h+b+sqrt((b*b)+(h*h));
    check(peri,"triangle");
   }

  void circle()
   {
    float peri=2*pi*sqrt(area/pi);
    check(peri,"circle");
   }
 };

int main()
 {
  Shapes obj;
  obj.rectangle();
  obj.square();
  obj.triangle();
  obj.circle();
  cout<<"The shape with the largest perimeter is the "<<obj.hps;
  cout<<"\nThe shape with the smallest perimeter is the "<<obj.sps<<"\n\n";
  return 0;
 }
