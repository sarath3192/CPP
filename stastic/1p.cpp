#include<iostream>
using namespace std;
class a
{
 int x=10;
 static int y;

    a(){
	 cout<< "con"<<endl;
     }

 
  void get_data(){
	           a o;
	           cout << x <<endl;
		   cout << y<<endl;
          
                  }
 
 };

int main()
{
 int i;
 a obj1;
 obj1.get_data();
 
  cout << "size-" << sizeof i<<endl;
  cout << "size-" << sizeof (int) << endl; 

}

