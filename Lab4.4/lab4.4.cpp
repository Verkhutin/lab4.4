#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double x, x2, dx, y, R;

	double Pi = 4 * atan(1.); // число Пі

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "x2 = "; cin >> x2;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;


	for (x; x <= x2; x += dx) {

		if (x <= -7 - R) // умова 1
			y = R;
		else // умова 2
			if (x > -7 - R && x <= -7 + R)
				y = R - sqrt(R * R - pow((x + 7), 2));
			else // умова 3
				if (x > -7 + R && x <= -4)
					y = R;
				else // умова 4
					if (x > -4 && x <= 0)
						y = R - ((R * (x + 4)) / 4);
					else // умова 5
						if (x > 0 && x <= Pi)
							y = sin(x);
						else // // умова 6
							y = x - Pi;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(2) << y
			<< " |" << endl;

	}

	cout << "---------------------------" << endl;

	cin.get();
	return 0;
}