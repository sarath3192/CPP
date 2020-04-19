#include<iostream>
#include<cstring>
using namespace std;
class shallow
{
	char *name;
	public:
	//shallow(){}
/*	shallow(const char *p="surpise"){
                name=new char[strlen(p)+1];
                strcpy(name,p);
        }*/

	void modif()
	{
		 name=0;
	 }
	void get_data(){
		cout <<*(this->name) << endl;

	}
};
int main()
{

	shallow s1;
//	cout<< s1 <<endl;
	s1.get_data();
	s1.modif();
	s1.get_data();

}

