#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	srand(time(NULL));
	for (int i = 1; i <= 30; i++)
	{
		int a = rand()%25+1;
		int b = rand()%25+1;
		int c = rand() % 25 + 1;
		int d = rand() % 25 + 1;
		int e = a % 2;
		int f = b % 4;
		int x[4] = { '+', '-', '*', '/' };
		int y = 0;
		if (e == 1 && b < a&&d < c)
		{
			if (f == 1)

				cout << b << '/' << a << ' ' << '+' << ' ' << d << '/' << c << "=" << endl;

			else if (f == 2)

				cout << b << '/' << a << ' ' << '-' << ' ' << d << '/' << c << "=" << endl;

			else if (f == 3)

				cout << b << '/' << a << ' ' << '*' << ' ' << d << '/' << c << "="  << endl;

			else

				cout << b << '/' << a << ' ' << '/' << ' ' << d << '/' << c << "=" << endl;
		}
	
		else
		{
			if (f == 1)
			{
				y = a + b;
				cout << a << '+' << b << "=" << endl;
			}
			else if (f == 2)
			{
				y = a - b;
				cout << a << '-' << b << "=" << endl;
			}
			else if (f == 3)
			{
				y = a * b;
				cout << a << '*' << b << "=" <<  endl;
			}
			else
			{
				y = b / a;
				cout << b << '/' << a << "=" << endl;
			}
		}
	
	}
}