#include<iostream>
using namespace std;
class a
{
	int *p;
	public:
	a()
	{
		int i;
		cout << "enter the number of ele"<<endl;
		cin >> i;
		p=new int[i+1];
		p[i]=-1;
	}

	void set_data()
	{
		cout << "enter the ele"<< endl;
		for(int i=0 ;p[i]!=-1;i++)
			cin >> p[i];
	}

	void get_data()
	{
		cout << endl;
		for(int i=0;p[i]!=-1;i++)
			cout << p[i] <<endl;
	}

	void even()
	{
		for(int i=0;p[i]!=-1;i++)
		{
			if(p[i]%2==0)
			{
				cout << p[i] << " even number" << endl;
			}
			else
			{
				cout << p[i] << " odd number"<< endl;
			}
		}		 
	}
	~a(){
		cout << "constructor"<<endl;
		delete [] p;
	}

};

int main()
{

	a o1;
        o1.set_data();
        o1.get_data();
	o1.even();
}



