#include<iostream>
using namespace std;
int checknum(int x){
	if(x>0){
		return 1;
	}
	else if(x<0){
		return -1;
	}
	else{
		return 0;
	}
}
main(){
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	int result=checknum(n);
	if(result==1){
	cout<<"positive"<<result<<endl;
}
else if(result==-1){
	cout<<"negative"<<result<<endl;
}
else{
	cout<<"zero"<<result<<endl;
}
}
