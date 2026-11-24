#include<iostream>
using namespace std;
int main()
{
	int mark;
	cout<<"enter your mark"<<endl;
	cin>>mark;
	if(mark>=85&&mark<=100){
		cout<<"A"<<endl;
	}
else if(mark>=75&&mark<=84){
	cout<<"B"<<endl;
}
else if (mark>=65&&mark<=74)
{
	cout<<"C"<<endl;
}
else if (mark>=64&&mark<=74){
	cout<<"D"<<endl;
}
else if(mark>=50&&mark<=64){
	cout<<"E"<<endl;
}
else if(mark>=0 &&mark<=50){
	cout<<"F"<<endl;}
	else 
		cout<<"invalid data"<<endl;
	
}

