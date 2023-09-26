#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int p;
	int n;
	float r;
	cout<<"Enter the value of principal"<<endl;
	cin>>p;
	cout<<"Enter the value of rate"<<endl;
	cin>>r;
	cout<<"Enter the number "<<endl;
	cin>>n;
	float CI =(p*pow((1+r/100),n))-p;
	cout<<CI;
}
