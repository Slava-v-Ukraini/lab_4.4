#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, y, xp, xk, R, dx;
	cout << " R = ";  cin >> R;
	cout << " xp = ";  cin >> xp;
	cout << " xk = ";  cin >> xk;
	cout << " dx = ";  cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	
	x = xp;
	x <= xk;

	if (x <= -2)
		y = x + 3;
	else
		if (-2 < x && x <= 4)
			y = ((-R * -1) / 6) * x - ((R - 2) / 3);
		else
			if (4 < x && x <= 8 - R)
				y = -R;
			else
				if (8 - R < x && x <= 8 + R)
					y = sqrt(R * R - (x - 8) * (x - 8));
				else
					y = -R;
	x += dx;

	cout << "|" << setw(7) << setprecision(2) << x
		<< " |" << setw(10) << setprecision(3) << y
		<< " |" << endl;
	cout << "---------------------------" << endl;
	return 0;
}