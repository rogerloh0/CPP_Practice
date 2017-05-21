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
	for(int i1 = 1; i1 <= n1; i1+=2)
	{
		//cout << "i1 = " << i1 << endl;
		for(int i2 = n2; i2 >=0; i2--)
		{
			//cout << "i2 = " << i2 << endl;
			for(int a = i1; a > 0; a--)
			{
				//cout << "a = " << a << endl;
				for(int s = i2; s > 0; s--)
				{
					//cout << "s = " << s << endl;
					cout << " ";
				}
				cout << "A";
			}
			cout << endl;
		}
	}
	return 0;
}
