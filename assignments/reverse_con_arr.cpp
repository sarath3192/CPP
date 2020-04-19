#include<iostream>
using namespace std;
class a
{
	int *p;
	int i;
	public:
	a()
	{
		cout << "enter the number of ele"<< endl;
		cin >> i;
		p=new int[i];
	}

	void set_data(){
		cout << "enter the data" << endl;
		for(int j=0;j<i;j++)
		{
			cin >> p[j];
		}
	}

	void get_data()
	{
		cout << "printing the data " <<endl;
		for(int j=0;j<i;j++)
		{
			cout << p[j] <<"  ";


		}
		cout << endl;
	}

	void rev_cont()
	{
		int temp,l=i;
		l--;
		for(int j=0;j<l;j++,l--)
		{
			temp=p[j];
			p[j]=p[l];
			p[l]=temp;
		}
	}

	~a(){
		cout << "dest"<< endl;
		delete [] p;
	}



};

int main()
{
 a o1;
 o1.set_data();
 o1.get_data();
 o1.rev_cont();
 o1.get_data();

}

