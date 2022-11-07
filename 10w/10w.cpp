#include <iostream>
#include <math.h>
#include "MuSoenMath.h"

using namespace std;

int main()
{
    // �ﰢ�Լ�
    const float PI = 3.1415926;
    double s = sin(30 * PI / 180);
    double c = cos(30 * PI / 180);

    // ��ǥ���� (1,1,1)�� �ʱ�ȭ
    vec3 v = vec3(1, 1, 1);

    // (3,5,0) �̵����
    mat3 Translate = mat3(1.0, 0.0, 0.0,
        0.0, 1.0, 0.0,
        3.0, 5.0, 1.0);

    // 30�� ȸ�����
    mat3 Rotate = mat3(c, -s, 0.0,
        s, c, 0.0,
        0.0, 0.0, 1.0);

    // ������ x2 ���
    mat3 Scale = mat3(2.0, 0.0, 0.0,
        0.0, 2.0, 0.0,
        0.0, 0.0, 1.0);

    // p�� ��ǥ = v�� ��ǥ x �̵���� x ȸ����� x ���������
    vec3 p = v * Translate * Rotate * Scale;
    
    // p�� ��ǥ�� ���
    std::cout << p.vec[0] << " " << p.vec[1] << " " << " " << p.vec[2] << endl;
    return 0;
}