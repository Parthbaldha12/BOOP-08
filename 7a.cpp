#include <iostream>

using namespace std;

class objcount
{

private:
	int a,b;
	static int count;

public:
	void sum();
	void getdata();
};

int objcount ::count = 1;

void objcount ::getdata()
{
	cout << "\n\nOpration No. " << count << endl;

	cout << "Enter the value of A : ";
	cin >> a;

	cout << "Enter the value of B : ";
	cin >> b;
}

void objcount ::sum()
{

	
	cout << "Sum : " << a + b << endl
		 << endl;
	count++;
}

int main()
{

	objcount obj1, obj2;

	obj1.getdata();
	obj1.sum();
	obj2.getdata();
	obj2.sum();
}