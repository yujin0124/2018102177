#include<iostream>
using namespace std;

int main()
{
	int i,j;

	for(i=1;i<=9;i++){
		cout<<i<<"단"<<endl;
		for(j=1;j<=9;j++){
			cout<<i<<"x"<<j<<"="<<i*j<<endl;
		}
	}
}