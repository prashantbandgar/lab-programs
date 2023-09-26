#include<iostream>
using namespace std;
class add {
	int  a,b;
	public:
		add(){
			a=1;
			b=4;
		}
		void dispaly(){
			cout<<a<<endl;
			cout<<b<<endl;
			cout<<a+b;
		}
};
int main(){
//	int a,b;
//	cin>>a>>b;
//	try{
//		if(b!=0){
//			cout<<a/b<<endl;
//			
//		}
//		else{
//		
//			throw"gberb";
//	}}
//	catch (const char* f){
//			cout<<f<<endl;
//		
//	}
add a;
a.dispaly();
}
