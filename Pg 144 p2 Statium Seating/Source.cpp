//This program is going to calculate statium seating
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	const int classA = 15;//cost of class A tickets 
	const int classB = 12;//cost of class B tickets 
	const int classC = 9;// cost of class C tickets 
	int a;//tickets sold of class A 
	int b;// tickets sold of class B
	int c; // tickets sold of class C
	float totalA; // total cost after class A tickets sold
	float totalB;// total cost after class B tickets sold 
	float totalC; // total cost after class C tickets sold
	cout << "How many class A tickets were sold? \n";
	cin >> a;
	cout << "How many class B tickets were sold? \n";
	cin >> b;
	cout<<"How many class C tickets were sold?\n";
	cin >> c;
	totalA = classA * a;
	totalB = classB * b;
	totalC = classC * c;
	cout << fixed << setprecision(9);
	cout << "Class A ticket sales is $" << totalA << endl;
	cout << "Class B ticket sales is $" << totalB << endl;
	cout << "Class C ticket sales is $" << totalC << endl;

	system("PAUSE");
	return 0;
}