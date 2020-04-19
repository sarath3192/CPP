#include<iostream>
using namespace std;
template <class type1>
class a
{
 type1 c;
 public:
 
  void fun(type2);

};

template <typename type2>
void fun(type2 k)
{
  cout << k <<endl;
}
int main()
{
 a<char> b;
 b.fun('a');

 
}
/*int main()
{
int x=10,y=1;
int *p;
p=new int;
   if(x=10)
   y=2;
  cout<<y<<endl;
 }*/
