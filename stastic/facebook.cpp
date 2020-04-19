#include<iostream>
using namespace std;
class facebook
{
  char fid[20];
  int mid;
public:
   static int count;
   facebook(){
	   cout << "enter login details"<<endl;
	   cin >> fid >> mid;
	   count++;
            }

            void get_ccount(){
	    
	    cout <<"fbid: "<< fid << endl;
	    cout <<"mid: " << mid << endl;
	    }

   ~facebook()
   {
	    count--;
   }

};

int facebook::count;
int main()
{

   facebook obj1,obj2,obj3;
   {
      int i;
      facebook obj4,obj5,obj2;
   
   }
   cout << obj1.count << endl;
   facebook::get_ccount();

} 
    	 

