#include <iostream>
#include <cmath>

using namespace std;


int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b != 0) {
            cout << -c / b;
        }
    } else {
        double discriminant = b * b - 4 * a * c;
        if (discriminant > 0) {
            cout << (-b + sqrt(discriminant)) / (2 * a) << " " << (-b - sqrt(discriminant)) / (2 * a);
        } else if (discriminant == 0) {
            cout << -b / (2 * a);
        }
    }

    return 0;
}
