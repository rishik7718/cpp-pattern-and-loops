#include<iostream>
using namespace std;
int main()
{
	int num,i,j;
	cout<<"enter the number of lines of pattern u want :";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
		cout <<char('A'+j-1);
		}
		cout<<endl;
		
	}
}