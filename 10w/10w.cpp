#include <iostream>
#include <math.h>
#include "MuSoenMath.h"

using namespace std;

int main()
{
    // 삼각함수
    const float PI = 3.1415926;
    double s = sin(30 * PI / 180);
    double c = cos(30 * PI / 180);

    // 좌표값을 (1,1,1)로 초기화
    vec3 v = vec3(1, 1, 1);

    // (3,5,0) 이동행렬
    mat3 Translate = mat3(1.0, 0.0, 0.0,
        0.0, 1.0, 0.0,
        3.0, 5.0, 1.0);

    // 30도 회전행렬
    mat3 Rotate = mat3(c, -s, 0.0,
        s, c, 0.0,
        0.0, 0.0, 1.0);

    // 스케일 x2 행렬
    mat3 Scale = mat3(2.0, 0.0, 0.0,
        0.0, 2.0, 0.0,
        0.0, 0.0, 1.0);

    // p의 좌표 = v의 좌표 x 이동행렬 x 회전행렬 x 스케일행렬
    vec3 p = v * Translate * Rotate * Scale;
    
    // p의 좌표값 출력
    std::cout << p.vec[0] << " " << p.vec[1] << " " << " " << p.vec[2] << endl;
    return 0;
}