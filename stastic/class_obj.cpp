#include<iostream>
using namespace std;
class a
{
 int i;
 public:
   a(){
	   cout << " con" << endl;
       i=10;
   }

   void set_data(){
	    
	   cout << "enter the data"<< endl;
	   cin >> i;
              }
   void get_data(){
	    
            a obj;
	    obj.get_data();
	   cout << i <<endl;
   }
};

int main()
{
 a obj1;
obj1.set_data();
obj1.get_data();

}

