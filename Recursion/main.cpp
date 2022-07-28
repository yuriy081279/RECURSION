#include<iostream>
using namespace std;
void elevator(int floor);
void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello World";
	//main();
	int floor;
	cout << "Введите номер этажа: ";
	cin >> floor;
	elevator(floor);
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на" << floor << "этаже\n";
	elevator(floor-1);
	cout << "Вы на" << floor << "этаже\n";

}