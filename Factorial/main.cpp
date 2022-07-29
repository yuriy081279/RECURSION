#include<iostream>
using namespace std;
#define tab "\t"
int factorial(int x, int y, int c);
int power(int x, int z, int d);
void fib(int predel, int s, int r);
void fibbon(int x, int s, int r);
void main()
{
	setlocale(LC_ALL, "");
    int x;	
	int y=1;
	int c=y;
	int z;
	int predel;
	int s = -1;
	int r = 1;
	
	cout << "Введите число факториал которого необходимо вычислить: ";
	cin >> x;
	int d = x*x;
	cout << "Введите степень, в которую необходимо возвести это же число: ";
	cin >> z;	
	cout << "Введите предельное число, которое не должен превысить ряд Фибоначчи: ";
	cin >> predel;

	factorial(x,y,c);
	cout << "Факториал = " << factorial(x, y, c)<<endl;
	power(x, z, d);
	cout << " Возведение в степень " << endl;
	cout << x << " ^ " <<  z << " = " << power (x, d, z)<<endl;
	cout << " Ряд чисел Фибоначчи со значениями не превышающими число " << predel<<endl;
	fib(predel, s, r);
	cout << endl<<endl;
	cout << " Первые "<< x <<" чисел из ряда Фибоначчи" << endl;
	fibbon(x, s, r);	
}

int factorial(int x, int y, int c)
{	
	if (c >= x)
	{			
		return y;
	}		
    factorial(x, y*c, ++c);	
}
int power (int x, int d, int z)
{
	if ( z < 0)
	{			
		return d/x/x/x;
	}
	power(x, d*x, --z);
}
void fib(int predel, int s, int r)
{	
	if ((s + r) >= predel)
	{
		return;
	}
	cout << s+r << tab;
	fib(predel, r, s = s+r);	
}
void fibbon(int x, int s, int r)
{
	if (x<=0)
	{
		return;
	}
	cout << s + r << tab;
	fibbon(--x, r, s = s+r);
}