#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter age of an user: \t";
	cin>>age;
	
	while(age>=18){
		cout<<"The person is eligible for voting";
		break;
	}
	
	while(age<18){
		cout<<"The petraon is not eligible for voting";
		break;
	}
	return 0;
}
