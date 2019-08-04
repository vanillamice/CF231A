#include <iostream>
 
using namespace std;
 
int main()
{
	int bigasscounter = 0;
	int n;
	int petya;
	int vasya;
	int tonya;
 
	cin >> n;
 
	for (int i = 0; i < n; i++) {
		int c = 0;
		cin >> petya >> vasya >> tonya;
		if (petya == 1) {
			c++;
 
		}
		else {
			cout <<endl;
		}
 
		if (vasya == 1)
		{
			c++;
		}
		else {
 
			cout << endl;
 
		}
 
		if (tonya == 1) {
 
			c++;
		}
		else {
			cout <<endl;
		}
 
		if (c >= 2) {
			bigasscounter++;
		}
 
 
 
 
	}
	cout << bigasscounter << endl;
	return 0;
}
