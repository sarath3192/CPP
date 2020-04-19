#include<iostream>
using namespace std;
class a
{
 static int i;
 int j;
 char ch;
};
int a::i;
int main()
{
 a p;
 cout << "static data member "<< endl;
 cout << p.i<< endl;
}

