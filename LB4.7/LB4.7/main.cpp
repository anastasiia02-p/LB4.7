#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double PI = 4 * atan(1.0);
    double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
    int n = 0;


    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-----------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(10) << "atan(x)" << " |"
        << setw(7) << "S" << "    |"
        << setw(5) << "n" << " |" << endl;
    cout << "-----------------------------------------" << endl;

    x = xp;


    while (x <= xk)

    {

        if (x <= -1) {



            n = 0;
            a = -(PI / 2);
            S = a;

            do {

                R = (1 - 2 * n) / (2 * n * x * x + x * x);
                a *= R;
                S += a;
                n++;
            } while (fabs(a) >= eps);


            cout << "|" << setw(7) << setprecision(2) << x << " |"
                << setw(10) << setprecision(5) << atan(x) << " |"
                << setw(10) << setprecision(5) << S << " |"
                << setw(5) << n << " |" << endl;

            x += dx;
        }
else
        {

            cout << "Error: x must be [x <= - 1]" << endl;
            break;
        }
       

    } 
    
    
    cout << "-----------------------------------------" << endl;
    return 0;
}
