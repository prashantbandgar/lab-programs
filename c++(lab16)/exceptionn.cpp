#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"two no"<<endl;
	cin>>a>>b;
	try{
		if(b!=0)
		{
			cout<<a/b;
		}
		else{
			throw"divided by zero";
		}}
		catch(const char*g)
		{
			cout<<g<<endl;
		}

}
