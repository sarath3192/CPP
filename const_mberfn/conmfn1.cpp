#include<iostream>
using namespace std;
class st
{
 int j;
 int i;
public:
 void set_data();
 void get_data() const;
};

void st::set_data(){
  cin >>i >>j;
 }
void st::get_data const()
{
  cout<< i <<" "<< j <<endl;
 }
int main()
{
 st ob1,ob2;
