#include <iostream>
using namespace std;

class point
{
private:
	double x, y; 
public:
	point():x(0),y(0) {  };
	void setPoint(double p1, double p2)
	{
		x = p1;
		y = p2;
	}
	
	
	void showPoint()
	{
		cout << "(x,y) = " << x << "," << y << endl;
	}
};
int main()
{
	
	point p1;
	p1.showPoint();
	p1.setPoint(2, 32.3);
	p1.showPoint();
	
	system("pause");
	return 0; 
}