#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float x, y, xp, xk, dx;
    
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    
    cout << fixed;
    cout << "---------------------------" << endl;
        cout << "|" << setw(7) << "x" << " |"
            << setw(10) << "y" << " |" << endl;
        cout << "---------------------------" << endl;
        x = xp;
        while (x <= xk)
        {
            if (x <= -7)
                y = 0;
            else
                if (-7<x && x<=-3)
                    y = -x-7;
                else
                    if (-3<x && x<=-2)
                        y = 4;
                    else
                        if (-2<x && x<=2)
                            y = x*x;
                        else
                            if (2<x && x<=4)
                                y = -2*x+8;
                            else
                                y = 0;
                
            cout << "|" << setw(7) << setprecision(7) << x
                << " |" << setw(10) << setprecision(7) << y
                << " |" << endl;
            x += dx;
        }
        cout << "---------------------------" << endl;
        return 0;
    }

    
    

