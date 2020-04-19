#include<iostream>
using namespace std;
class a
{
  public:   //members are in public
  int a,b;
  void set(){
        	cout << "enter the data"<<endl;
	        cin >> a>> b;
           }
  void get()
         {
	    cout <<"a-"<< a << endl;
            cout << "b-"<< b<<endl;
            }

};

class b:public a //mode of inheritance is public
{
public:
int x;
  void set(){
        	cout << "enter the data"<<endl;
	        cin >>x; 
           }
  void get()
         {
	    cout <<"x-"<< x << endl;
            }

};

int main()
{
b o;
o.a::set();
o.a::get();
cout << "o.a" << o.a<<endl;
cout << "o.b7" << o.a::b<<endl;


}

