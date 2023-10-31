#include <iostream>
#include <complex>
using namespace std;
int power(int base, int po);
int factorial(int base);
double square(double side);
float trianglearea(float side1, float side2, float angle);
int resp = 1;
int resf = 1;
float const pi = 3.14159265;
int main() {
	int base;
	float l;
	float w;
	float deg;
	int c1;
	int c2;
	int shape;
	int side;
	double con1;
	double con2;
	double num1;
	double num2;
	double num[20];
	int c;
	int total = 0;
	int po;
	char op;
	char calc;
	char cont;
	cout << "Calculator Key code" << endl;
	cout << "Factorial >> !" << endl;
	cout << "Addition >> +" << endl;
	cout << "Subtraction >> -" << endl;
	cout << "Divission >> /" << endl;
	cout << "Multiply >> *" << endl;
	cout << "Power >> ^" << endl;
	cout << "length to length converter >> C" << endl;
	cout << "Area calculator >> A" << endl;

	do {
		cout << endl;
		cout << "choose operator " << endl << "! + - / * ^ C" << endl;
		cin >> op;
		switch (op) {
		case '^': {
			cout << "enter power " << endl;
			cin >> po;
			cout << "enter base " << endl;
			cin >> base;
			int pwr = power(base, po);
			cout << "Result = " << pwr << endl; break;
		}
		case '!': {
			cout << "enter number " << endl;
			cin >> base;
			int fact = factorial(base);
			cout << "Result  = " << fact << endl; break;

		}
		case'+': {
			cout << "how many number to add" << endl;
			cin >> c;

			for (int i = 0; i < c; i++)
			{
				cout << "enter number" << ' ' << i + 1 << endl;
				cin >> num[i];


			}
			for (int i = 0; i < c; i++)
			{
				total += num[i];
			}
			cout << "Result = " << ' ' << total << endl; break;
		}
		case'-': {
			cout << "how many number to subtract" << endl;
			cin >> c;

			for (int i = 0; i < c; i++)
			{
				cout << "enter number" << ' ' << i + 1 << endl;
				cin >> num[i];


			}
			for (int i = 0; i < c; i++)
			{
				total -= num[i];
			}
			cout << "Result = " << ' ' << total << endl; break;
		}
		case'*': {cout << "how many number to multiply" << endl;
			cin >> c;

			for (int i = 0; i < c; i++)
			{
				cout << "enter number" << ' ' << i + 1 << endl;
				cin >> num[i];


			}
			for (int i = 0; i < c; i++)
			{
				total *= num[i];
			}
			cout << "Result = " << ' ' << total << endl; break;
		}
		case'/': {cout << "enter number 1" << endl;
			cin >> num1;
			cout << "enter number 2" << endl;
			cin >> num2;
			if (num2 == 0)
			{
				cout << "can't devide by zero" << endl; break;
			}
			else
			{
				total = num1 / num2;
				cout << "Result = " << ' ' << total << endl; break;
			}}
		case'C':
		case'c': {cout << "convert from " << "choose a Converting code " << endl << "1:KM" << endl << "2: M" << endl << "3:Cm" << endl;
			cin >> c1;
			cout << "convert to" << " choose a Converting code " << endl << "1:KM" << endl << "2: M" << endl << "3:Cm" << endl;
			cin >> c2;
			cout << "enter number 1" << endl;
			cin >> con1;
			if (c1 == c2)
				cout << "Result = " << con1 << endl;
			else if (c1 == 1 && c2 == 2)
			{
				con2 = con1 * 1000;
				cout << "Result = " << con2 << " Meter" << endl;
				break;

			}
			else if (c1 == 1 && c2 == 3)
			{
				con2 = con1 * 100000;
				cout << "Result = " << con2 << " Centi Meter" << endl;
				break;
			}

			else if (c1 == 2 && c2 == 1)
			{
				con2 = con1 / 1000;
				cout << "Result = " << con2 << " Kilo Meter" << endl;
				break;
			}
			else if (c1 == 2 && c2 == 3)
			{
				con2 = con1 * 100;
				cout << "Result = " << con2 << " Centi Meter" << endl;
				break;
			}
			else if (c1 == 3 && c2 == 1)
			{
				con2 = con1 / 100000;
				cout << "Result = " << con2 << " Kilo Meter" << endl;
				break;
			}
			else if (c1 == 3 && c2 == 2)
			{
				con2 = con1 / 100;
				cout << "Result = " << con2 << " Meter" << endl;
				break;
			}
			else
				cout << "Wrong code" << endl; break;
		}
		case'A':
		case'a': {cout << "choose geometric shape " << endl;
			cout << "1:Square" << endl;
			cout << "2:Rectangle" << endl;
			cout << "3:circle" << endl;
			cout << "4:Triangle" << endl;
			cin >> shape;
			if (shape == 1) {
				cout << "enter side" << endl;
				cin >> side;
				double s = square(side);
				cout << "Area = " << s << endl; break;
			}
			else if (shape == 2) {
				cout << "enter width " << endl;
				cin >> w;
				cout << "enter length " << endl;
				cin >> l;
				cout << "area = " << l * w << endl; break;
			}

			else if (shape == 3) {
				cout << "enter radius " << endl;
				cin >> side;
				double q = square(side);
				cout << square(side) / pi << endl; break;

			}
			else if (shape == 4) {
				cout << "Right angeled triangle ?" << endl;
				cout << "Press Y or N" << endl;
				cin >> calc;
				if (calc == 'Y' || calc == 'y')
				{
					cout << "enter Hieght" << endl;
					cin >> l;
					cout << "enter base" << endl;
					cin >> w;
					cout << "Area = " << (l * w) / 2; break;

				}
				else 
				{
					cout << "enter side 1" << endl;
					cin >> w;
					cout << "enter side 2" << endl;
					cin >> l;
					cout << "enter angel in degrees" << endl;
					cin >> deg;
					
					cout << "Area = " << trianglearea(w,l,deg) << endl;
					break;
				}
			}

		}
		default:cout << "Wrong input" << endl;
	
		

		
		}

		cout << "Do you want to continue? " << endl << "press Y " << endl;
		cin >> cont;

	}while (cont == 'Y' || cont == 'y');
	return 0;
	

}
int power(int base, int po) {
	for (int i = 1; i <= po; i++)
	{
		resp *= base;

	}
	return resp;
}
int factorial(int base) {
	for (int i = 1; i <= base; i++)
	{
		resf *= i;

	}
	return resf;

}
double square(double side) {
	int result = side * side;
	return result;
}
float trianglearea(float side1,float side2,float angle)
{
	float result = ((side1 * side2) / 2) * sin(angle);
					if (result < 0)
					result = result * -1;
					return result;
}