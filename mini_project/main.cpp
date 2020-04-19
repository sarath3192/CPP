#include<iostream>
#define color "\033[36;41;1;4m"
#define reset "\033[0m"
using namespace std;

template <class type>
class stack
{
	type stak[5];
	int top;

	public:
	stack()
	{
		top=-1;
	}
	void push()
	{
		if(top==4)
		{
			cout<<"stack is over flow"<<endl;
			return ; 
		}	   
		else
		{
			++top;
			cout << "pushing the data to "<<"stak["<<top<<"]"<<endl;	   
			cin >> stak[top];
		}
	}

	void pop()
	{

		if(top==-1)
		{
			cout<<"stack is underflow"<<endl;
			return ; 
		}	   
		else
		{
			cout <<"poping the data from "<<"stak["<<top<<"]" << endl;	   
			cout << stak[top]<<endl;
			--top;
		}
	}


void display()
{
	int i;
	cout<<"data in the stack"<<endl;
	for(i=0;i<=top;i++)
	{
		cout<< i <<" " << stak[i] <<endl;
	}

}
void stack_stat()
{
	cout << top <<endl;     
}

~stack()
{
}

};



int main()
{
	int opt,opt1;
	int opt_count=0;
	stack<int> int1;
	stack<char> char1;
	stack<float> float1;
	stack<double> double1;
	//	cout << color;
lable1:
	while(1)
	{
		cout << "select the manu: " <<endl<<endl;

		cout << "1)int stack"<<endl<<"2)char stack"<<endl<<"3)float stack"<<endl<<"4)double stack"<<endl<<"5)stack_states"<<endl<<"6)exit"<<endl;

		cin>>opt;

		switch(opt)
		{
			case 1:
				cout<< "integer stack is ready to use"<<endl<<endl;
				break;
			case 2:
				cout<< "char stack is ready to use"<<endl<<endl;
				break;
			case 3:
				cout<< "float stack is ready to use"<<endl<<endl;
				break;
			case 4:
				cout<< "double stack is ready to use"<<endl<<endl;
				break;
			case 5:
				cout<<"enter which stack status you need "<<endl<<endl;     
				cout << "1)int"<<endl<<"2)char"<<endl<<"3)float"<<endl<<"4)double"<<endl<<endl;
				cin>>opt;
				switch(opt)
				{
					case 1:
						cout<< "int stack status"<<endl;
						int1.stack_stat();
						break;
					case 2:
						cout<< "char stack status"<<endl;
						char1.stack_stat();
						break;
					case 3:
						cout<< "float stack status"<<endl;
						float1.stack_stat();
						break;
					case 4:
						cout<< "double stack status"<<endl;
						double1.stack_stat();
						break;
					default:
						cout <<"wrong entry"<<endl<<" please enter proper option in B/w 1 to 4"<<endl;
				}
				break;
			case 6:
				cout<<"thank you for using the application"<<endl;
				break;
			default:
				if(opt_count < 3)
				{		
					if(opt_count<=1)
					{
						cout <<"invalid option entry"<<endl;
						cout <<"please read the options carefully enter the option from 1 to 7"<<endl;
					}
					else
					{
						cout<< "last one more chance please enter right choice"<<endl;
						cout<< "other wise application will be closed"<<endl;
					}
					opt_count++;

				}
				else
				{
					cout<<"sorry for the inconvinience"<<endl<<"try again after some time"<<endl;
				        cout<<"thank you for using the application"<<endl;
					return 0;
				}

		}

		//	system("clear");
		if(opt==1|opt==2|opt==3|opt==4)
		{
			break;
		}
		if(opt==6)
		{
			return 0;
		}

	}


        opt_count=0;
	while(1)
	{
		
		cout <<"1) push"<<endl<<"2) pop"<<endl<<"3) display"<<endl<<"4) main menu"<<endl<<endl;
		cout<<"enter the option"<<endl;
		cin >> opt1;
		switch(opt1-48)
		{
			case 1:
				switch(opt)
				{	 
					case 1:
						int1.push();
						break;		    
					case 2:
						char1.push();
						break;		    
					case 3:
						float1.push();	
						break;	    
					case 4:
						double1.push();
						break;		    
				}
				break;
			case 2:
				switch(opt)
				{	 
					case 1:
						int1.pop();
						break;		    
					case 2:
						char1.pop();
						break;		    
					case 3:
						float1.pop();	
						break;	    
					case 4:
						double1.pop();
						break;		    

				}
				break;

			case 3:
				switch(opt)
				{	 
					case 1:
						int1.display();
						break;		    
					case 2:
						char1.display();
						break;		    
					case 3:
						float1.display();	
						break;	    
					case 4:
						double1.display();
						break;		    

				}
				break;

			case 4:
	                        goto lable1;		  
				break ;
			default:


				if(opt_count<3)
				{
					if(opt_count<=1)
					{
						cout <<"Read the options carefully enter the option b/w 1 to 4"<<endl;
					}
					else
					{
						cout<<"Last chance to select the option"<<endl;
						cout<<"next time you goto main menu"<<endl;
						
					}
					++opt_count;
				}
				else
				{ 
					opt_count=0;
	                                goto lable1;
				}


		} 



	}
}
