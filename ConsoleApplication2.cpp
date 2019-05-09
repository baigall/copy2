#include "stdafx.h"
#include<iostream>
using namespace std;
class CTestCopy
{
private:
	int x;
	int y;
public:
	CTestCopy();
	CTestCopy(int a, int b);
	CTestCopy(CTestCopy&om);
	void setXY(int a, int b);
	void display();
};
CTestCopy::CTestCopy()
{

}
CTestCopy::CTestCopy(int a, int b)
{
	x = a;
	y = b;
}
CTestCopy::CTestCopy(CTestCopy&om)
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "**************" << endl;
}
void CTestCopy::setXY(int a, int b)
{
	x = a;
	y = b;
}
void CTestCopy::display()
{
	cout << "x=" << x << "y=" << y << endl;
}
void myTest(CTestCopy temp)
{
	temp.display();
}
int main()
{
	CTestCopy ot(20, 30);
	myTest(ot);
	return 0;
}


