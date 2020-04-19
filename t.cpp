#include<iostream>
using namespace std;
class a
{
	public:
	int x;
	a(int z):x(z)
	{
		cout << "constructor"<<endl;
    	}

};


int main()
{
 a b={10};
 
 cout << b.x<< endl;
}
