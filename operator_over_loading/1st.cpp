#include<iostream>
using namespace std;
class a
{
 int x,y;
public:
     a()
      {
       //cout << "default constructor" << endl;
      }
     a(int b,int c)
     {  
	//cout << "parameterised con" << endl;
        x=b,y=c;
     }

     a(a &temp){
	     cout << "copy constructor" << endl;
	     x=temp.x;
	     y=temp.y;
              }

     void get_data()
     {
      cout << "x- "<< x <<endl; 
      cout << "y- "<< y <<endl; 
     }
    a operator + (a temp)
      {
        cout <<"this"<<this<<endl; 
	cout << "operator over loaded" << endl;
	a result;
	result.x=x+temp.x;
	result.y=y+temp.y;
	return result;
       
      }
    a operator = (a tem)
    {
      cout <<"assign this"<<this<<endl;
      return tem;
    }
    

  ~a()
    { 
    // cout << "destructor"<< this <<endl;
    }
      

 };

int main()
{
 a o1(10,20),o2(20,50),o3(40,10);
// o3=o1+o2;
 o1=o2;
 cout << "o2"<<&o2<<endl;
 cout << "o3"<<&o3<<endl;

 o1.get_data();

}

