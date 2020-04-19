#include<iostream>
#include<cstdio>
using namespace std;
class A
{
	int x,y;
	public:
         A(){
	 cout<<"constructor"<<endl;
	 cout<< x << y<<endl;
	 };
        void get_data();	
};

void A::get_data()
{
  cout<<x<<" "<<y<<endl;
}
//{
  

int main()
{
	A obj1,obj2,obj3;

//obj1.printf();
obj2.get_data();
obj3.get_data();
}
