#include <stdio.h>

int main() {

    // solving simultaneous equation
    
    double a1 = 1.0, b1 = 1.0, c1 = 5.0;
    double a2 = 1.0, b2 = -1.0, c2 = 1.0;

    // Use elimination method to solve the system of equations
    double y = (c1 * a2 - a1 * c2) / (b1 * a2 - a1 * b2);
    double x = (c1 - b1 * y) / a1;

    printf("Solution: x = %.2lf,y = %.2lf\n", x, y);

    return 0;
}
