#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

class Lab3 
{
	public:
float x, y;
int c;
string s;

double z(double x)
{
	double y;
	 if (x<-4)
        {y=0; }
    else if (x>=-4 && x<=-2)
        {y=x+3 ; } 
    else if (x>-2 && x<=4)
        {y=(x * -1)/2 ; }
    else if (x>4 && x<=6)
        { y=-2 ; }
    else if (x>6 && x<=10)
        { y=sqrt(-(x-10)*(x-6))-2 ; }
    else if (x>10)
        { y=0;}
	return y;
}

    void vvod(double y)
    {
        ofstream prout("text.txt");
        x = -4;
        c = 0;
        for (x; x < 11; x++)
            {
            prout << c << " ";
            c++;
            y = z(x);
            prout << y << "\n";
            }
        prout.close();
    }
    void vivod (string s)
    {
        ifstream prin("text.txt");
        while (getline(prin, s))
        {
            cout << s;
            cout << "\n";
        };
        prin.close();
    }
};

int main()
{
	Lab3 test;
	
	string s;
	double y;
	double x;
   test.z(x);
   test.vvod(y);
	test.vivod(s);
    
}