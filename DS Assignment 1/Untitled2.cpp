#include<bits/stdc++.h>
using namespace std;


#define f(x) 3 * x - cos(x) - 1


#define d(x) 3 + sin(x)
int main(){
    float x0, x1, f0, f1, d0, e;


    int step = 1, N;
    up:
    cout << "Enter initial guess value: ";
    cin >> x0;
    cout << "Enter initial guess value: ";
    cin >> x1;
    cout << "Enter tolerable error : ";
    cin >> e;
    cout << "Enter maximum number of iterations: ";
    cin >> N;

    f0 = f(x0);
    f1 = f(x1);
    if (f0 * f1 > 0.0) {
        cout << "Incorrect initial guess" << endl;
        goto up;
    }


    do {
        f0 = f(x0);
        d0 = d(x0);


        if (d0 == 0.0) {
            cout << "Mathematical error" << endl;
            return 0;
        }
        x1 = x0 - (f0 / d0);
        cout << "Iteration - "  << step << ":\t x1 = " << setw(10) << x1 << " and f(x1) = " << setw(10) << f(x1) << endl;
        x0 = x1;
        step++;
        if (step > N) {
            break;
        }
        f1 = f(x1);
    } while (fabs(f1) > e);
    return 0;
}
