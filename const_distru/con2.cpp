#include<iostream>
using namespace std;
class A
{
 int x,y;
 public:
  A(){
   x=10,y=20;
        }
 /*  A(const A &temp)
  {
    cout <<"hello"<<endl;
  }*/
  void get_data(){
	  cout<< x<<" "<< y << endl;
  }
};   

int main()
{
  A obj1,obj2(obj1);
  obj1.get_data();
  obj2.get_data();
}


