// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h" 
#include "iostream"
 using namespace std;
 class CTestCopy
 {
	int x;
 	int y;
    public:
 	CTestCopy()
			 	{
			

			 	}
	CTestCopy(int a, int b)
			 	{
			 		x = a;
			 		y = b;
			 	}
	CTestCopy(CTestCopy & om)
			 	{
			 		x = om.x * 2;
			 		y = om.y * 2;
			 		cout << "*******************************" << endl;
				}
		

		 	void setXY(int a, int b)
		 	{
			 		x = a;
			 		y = b;
		 	}
		 	void disPlay()
			 	{
			 		cout << "x=" << x << "y=" << y << endl;
			 	}
		 };


int main()
{
	 	CTestCopy ocpy(500, 800);
	 	ocpy.disPlay();
	 	CTestCopy omyobj(ocpy);
    	omyobj.disPlay();
	     return 0;
	 }
