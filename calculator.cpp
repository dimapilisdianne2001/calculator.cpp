#include<iostream>
using namespace std;

int main()
{
	int c,b,pick,prod,sum,diff,quo;
    char op;
    do{
    cout<<"\t\t\t\tWELCOME TO YOUR CALCULATOR\t\t\t\t";
	cout<<"\n [+]ADDITION:";
	cout<<"\n [-]SUBTRACTION:";
	cout<<"\n [*]MULTIPLICATION:";
	cout<<"\n [/]DIVISION:";
    cout<<"\n SELECT AN OPERATION:";
	cin>>op;
	system("cls");
	
	if(op=='+')
	{
		cout<<"\t\t\t\t\t\t\t\t ADDITION";
		cout<<"\nEnter first number:";
		cin>>b;
		cout<<"Enter second number:";
		cin>>c;
		sum=b+c;
		cout<<"Sum ="<<b+c<<endl;
        
	}
	else if(op=='-')
	{
	    cout<<"\t\t\t\t\t\t\t\t SUBTRACTION\t\t\t\t\t\t\t\t\t";
		cout<<"\nEnter first number:";
		cin>>b;
		cout<<"Enter second number:";
		cin>>c;
		diff=b-c;
		cout<<"Difference ="<<b-c<<endl;
        
	}
	else if(op=='*')
	{
		cout<<"\t\t\t\t\t\t\t\t MULTIPLICATION \t\t\t\t\t\t\t\t\t";
		cout<<"\nEnter first number:";
		cin>>b;
		cout<<"Enter second number:";
		cin>>c;
		prod=b*c;
		cout<<"Product ="<<b*c<<endl;
       
	}
	else if(op=='/')
	{
	    cout<<"\t\t\t\t\t\t\t\t DIVISION \t\t\t\t\t\t\t\t\t";
		cout<<"\nEnter first number:";
		cin>>b;
		cout<<"Enter second number:";
		cin>>c;
		quo=b/c;
		cout<<"Quotient ="<<b/c<<endl;
        
	}
	else
	{
		cout<<"Invalid!"<<endl;
	}
	cout<<"Please select again:";
	cin>>pick;
	system("cls");	
	}while(pick==1);
	
}
