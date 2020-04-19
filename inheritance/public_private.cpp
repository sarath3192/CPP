#include<iostream>
using namespace std;
class boss
{

 void set_sal()
 {
	 cout<<"set sal"<<endl;
	 cin>>sal;
}
 public:
 int sal;
 friend int main();
};

class emp: public boss
{
  public:
   
	void get_data()
       {
	  cout <<"sal"<<endl;
	  cout << boss::sal<<endl;
       }
    
};

int main()
{
 boss b;
 emp e;
 b.set_sal();
 e.get_data();
}

