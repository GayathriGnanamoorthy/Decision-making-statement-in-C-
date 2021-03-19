#include<iostream>
using namespace std;
int main()

{
	int age;
	cout<<"Enter ur age to confirm ur voting eligiblity: ";
	cin>>age;
	
	if(age<18)
	{
		cout<<"You are not eligible to vote.\n Minimum age required for voting is 18 yrs.";
		
	}
	else
	{
		cout<<"You are eligible to vote.";		
	}
	return 0;
}
