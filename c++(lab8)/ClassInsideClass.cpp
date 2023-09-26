#include<iostream>
using namespace std;
class Parent{
	public:
		int parentAge;
		Parent(){
			parentAge = 60;
		}
		void display(){
					cout<<"Age of Parent : "<<parentAge<<endl;
				}
		class Child{
			public:
				int childAge;
				Child(){
					childAge = 30;
				}
				void display(){
					cout<<"Age of Child : "<<childAge<<endl;
				}
		};
};
int main(){
	Parent p1;
	p1.display();
	Parent::Child c1;
	c1.display();
}
