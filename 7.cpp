#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"enter the charachter:";
	cin>> c;
	if(c == 'a'||c =='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		cout<< " vowels: ";
	}
	else
	{
		cout<< "consonant";
	}
	return 0;
}
