
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(const double x);

int main() {
	double yp, yk, z;
	int n;

	cout << "yp = "; cin >> yp;
	cout << "yk = "; cin >> yk;
	cout << "n = "; cin >> n;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(7) << "yp" << " |"
		<< setw(10) << "yk" << " |"
		<< setw(10) << "z" << " |"
		<< setw(10) << "y" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	;

	double dy = (yk - yp) / n;
	double y = yp;

	while (y <= yk) {
		z = f(1 + sqrt(y) + y) + pow(f(1 + f(1) + pow(f(sqrt(y)), 2)), 2);
		cout << "|" << setw(7) << setprecision(2) << yp << " |"
			<< setw(10) << setprecision(5) << yk << " |"
			<< setw(10) << z << " |"
			<< setw(10) << y << " |"
			<< endl;
		y += dy;
	}

	return 0;
}


double f(const double x)
{
	if (abs(x) >= 1)
		return sin(x / 2) / 1 + pow(cos(x), 2);
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = x * x / ((3 * i - 2) * (3 * i - 1) * 3 * i);
			a *= R;
			S += a;
		} while (i < 6);	
		return S;
	}
}