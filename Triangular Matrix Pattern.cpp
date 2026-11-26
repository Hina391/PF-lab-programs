#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the number";
cin>>n;
for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
		if(i==j){
			cout<<"D\t";
		}
		else if(i<j){
			cout<<"U\t";
	}
		else{
			cout<<"L\t";
		}
	}
	cout<<endl;
}
system("pause");	
}
