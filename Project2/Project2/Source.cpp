#include <iostream>
using namespace std;

class counter
{
private:
	unsigned int count; 

public: 
	//constructer
	counter() :count(0) { };
	//functions
	void incCount()
	{
		count++;
	}
	int getCount()
	{
		return count; 
	}

};
int main()
{
	counter c1,c2;

	cout << "\nc1= " << c1.getCount();
	c1.incCount();
	cout << "\nc1= " << c1.getCount();
	cout << "\nc2= " << c2.getCount();
	c2.incCount();
	cout << "\nc2= " << c2.getCount();

	


	
	system("pause");
	return 0; 
}