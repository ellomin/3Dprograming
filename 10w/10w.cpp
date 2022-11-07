#include <iostream>
#include <math.h>
#include "MuSoenMath.h"

using namespace std;

void vec3::printvec3()
{
    cout << x << " " << y << " " << z << " ";
    cout << endl;
}
int main()
{

    const float PI = 3.1415926;
    double a = sin(30 * PI / 180);
    double b = cos(30 * PI / 180);

    vec3 v = vec3(1, 1, 1);

    mat3 Tr = mat3(1.0, 0.0, 0.0,
        0.0, 1.0, 0.0,
        3.0, 5.0, 1.0);

    mat3 Ro = mat3(b, -a, 0.0,
        a, b, 0.0,
        0.0, 0.0, 1.0);
    mat3 Sc = mat3(2.0, 0.0, 0.0,
        0.0, 2.0, 0.0,
        0.0, 0.0, 1.0);

    vec3 p = v * Tr * Ro * Sc;
    p.printvec3();

}