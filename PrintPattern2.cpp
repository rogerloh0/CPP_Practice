#include<iostream>

/*
To print out pattern
  A
 AAA
AAAAA
 AAA
  A 
*/

using namespace std;

int main(){
	int n1 = 5;
	int n2 = n1/2;
	int n3 = n1 - 2;
	int i2 = n2;
	int i4 = 1;
	for(int i1 = 1; i1 <= n1; i1+=2)
	{
		int flag = 0;
		for(int a = i1; a > 0; a--)
		{
			for(int s = i2; s > 0; s--)
			{
				if(flag==0)
				{
					cout << " ";
				}
				else
				{
					break;
				}
			}
			flag = 1;
			cout << "A";
		}
		cout << endl;
		i2--;
	}
	for(int i3 = n3; i3 > 0; i3-=2)
	{
		int flag = 0;
		for(int a2 = i3; a2 > 0; a2--)
		{
			for(int s2 = i4; s2 > 0; s2--)
			{
				if(flag==0)
				{
					cout << " "; 
				}
			}
			flag = 1;
			cout << "A";
		}
		cout << endl;
		i4++;
	}
	
	return 0;
}
