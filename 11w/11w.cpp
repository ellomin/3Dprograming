#include <iostream>
#include "MuSoenMath.h"

using namespace std;

void mat3::mat3print()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << m[i][j]; 
            if (j < 2) cout << " ";	
        }
        cout << endl;
    }
}

void mat4::mat4print()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << m[i][j]; 
            if (j < 2) cout << " ";	
        }
        cout << endl;
    }
}

void vec3::vec3print()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            cout << v[i][j]; 
            if (j < 2) cout << " ";	
        }
        cout << endl;
    }
}

void vec4::vec4print()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            cout << v[i][j]; 
            if (j < 2) cout << " ";	
        }
        cout << endl;
    }
}

//mat3 °ö¼À
mat3 mat3::operator*(const mat3& a)

{
    mat3 mat;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            mat.m[i][j] = m[i][j] * a.m[i][j];

    return mat;
}

//mat4 °ö¼À
mat4 mat4::operator*(const mat4& a)

{
    mat4 mat;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            mat.m[i][j] = m[i][j] * a.m[i][j];

    return mat;
}

//vec3 °ö¼À
vec3 vec3::operator*(const vec3& a)

{
    vec3 vec;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 1; j++)
            vec.v[i][j] = v[i][j] * a.v[i][j]; 

    return vec;
}

//vec4 °ö¼À
vec4 vec4::operator*(const vec4& a)

{
    vec4 vec;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 1; j++)
            vec.v[i][j] = v[i][j] * a.v[i][j];

    return vec;
}

//mat3 ³ª´°¼À
mat3 mat3::operator/(const mat3& a)

{
    mat3 mat; 

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            mat.m[i][j] = m[i][j] / a.m[i][j]; 

    return mat;
}

//mat4 ³ª´°¼À
mat4 mat4::operator/(const mat4& a)

{
    mat4 mat;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            mat.m[i][j] = m[i][j] / a.m[i][j];

    return mat;
}

//mat3 µ¡¼À
mat3 mat3::operator+(const mat3& a)
{
    mat3 mat; 
    vec3 vec;

    for (int i = 0; i < vec.v_2; i++)
        for (int j = 0; j < vec.v_1; j++)
            mat.m[i][j] = m[i][j] + vec.v[i][j];

    return mat;
}

//mat3 »¬¼À
mat3 mat3::operator-(const mat3& a)
{
    mat3 mat; 
    vec3 vec;

    for (int i = 0; i < vec.v_2; i++)
        for (int j = 0; j < vec.v_1; j++)
            mat.m[i][j] = m[i][j] - vec.v[i][j];

    return mat;
}

int main()
{
    //mat1 3x3Çà·Ä°ª ÁöÁ¤
    mat3 mat1(1, 2, 3, 1, 2, 3, 1, 2, 3); 
    //mat2 3x3Çà·Ä°ª ÁöÁ¤
    mat3 mat2(1, 1, 1, 1, 1, 1, 1, 1, 1);
    mat3 ss(3, 3, 3, 3, 3, 3, 3, 3, 3);
    mat3 mat3;
    //vec1 3x1Çà·Ä°ª ÁöÁ¤
    vec3 vec1(1, 2, 3);
    //vec2 3x1Çà·Ä°ª ÁöÁ¤
    vec3 vec2(3, 2, 1);
    vec3 vec3;

    //¸ÅÆ®¸¯½º °ö¼À
    cout << "----------------" << endl;
    mat3 = mat1 * mat2;
    mat3.mat3print();
    cout << "----------------" << endl;

    //ÀüÄ¡ ¸ÅÆ®¸¯½º °ö¼À
    cout << "----------------" << endl;
    mat3 = mat1 * mat2;//°ö¼À
    mat3.transpose();
    mat3.mat3print();
    cout << "----------------" << endl;

    //º¤ÅÍÀÇ °ö
    cout << "----------------" << endl;
    vec3 = vec1 * vec2;
    vec3.vec3print();
    cout << "----------------" << endl;

    //ÀüÄ¡ º¤ÅÍ °ö¼À
    cout << "----------------" << endl;
    vec3 = vec1 * vec2;
    vec3.transpose();
    vec3.vec3print();
    cout << "----------------" << endl;

    //Çà·Ä°ú º¤ÅÍÀÇ µ¡¼À
    cout << "----------------" << endl;
    mat3 = mat1 + vec1;
    mat3.mat3print();
    cout << "----------------" << endl;

    //Çà·Ä°ú º¤ÅÍÀÇ »¬¼À
    cout << "----------------" << endl;
    mat3 = mat1 - vec1;
    mat3.mat3print();
    cout << "----------------" << endl;

    //»ó¼ö¿Í ¸ÅÆ®¸¯½ºÀÇ °ö¼À
    cout << "----------------" << endl;
    mat3 = mat1 * ss;
    mat3.mat3print();
    cout << "----------------" << endl;

    //»ó¼ö¿Í ³ª´©±âÀÇ °ö¼À
    cout << "----------------" << endl;
    mat3 = mat1 / ss;
    mat3.mat3print();
    cout << "----------------" << endl;

    return 0;
}