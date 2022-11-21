#pragma once

// �ڷᱸ���� vec3
struct vec3
{
	float v[3][1];

	// �ʱⰪ
	vec3()
	{
		v[0][0] = 0;
		v[1][0] = 0;
		v[2][0] = 0;
	}

	// �ʱ�ȭ
	vec3(float x, float y, float z)
	{
		v[0][0] = x;
		v[1][0] = y;
		v[2][0] = z;
	}
};

// vec3 ����
vec3 operator+(vec3 a, vec3 b)
{
	vec3 result(a.v[0][0] + b.v[0][0], a.v[1][0] + b.v[1][0], a.v[2][0] + b.v[2][0]);
	return result;
}

// vec3 ����
vec3 operator-(vec3 a, vec3 b)
{
	vec3 result(a.v[0][0] - b.v[0][0], a.v[1][0] - b.v[1][0], a.v[2][0] - b.v[2][0]);
	return result;
}

// ���, vec3 ����
vec3 operator*(float b, vec3 a) {
	vec3 result(a.v[0][0] * b, a.v[1][0] * b, a.v[2][0] * b);
	return result;
}

// ���, vec3 ������
vec3 operator/(vec3 a, float b) {
	vec3 result(a.v[0][0] / b, a.v[1][0] / b, a.v[2][0] / b);
	return result;
}

// �ڷᱸ���� vec1x3
struct vec1x3
{
	float v[1][3];

	// �ʱⰪ
	vec1x3()
	{
		v[0][0] = 0;
		v[0][1] = 0;
		v[0][2] = 0;
	}

	// �ʱ�ȭ
	vec1x3(float x_, float y_, float z_)
	{
		v[0][0] = x_;
		v[0][1] = y_;
		v[0][2] = z_;
	}
	
};

// vec1x3 ����
vec1x3 operator+(vec1x3 a, vec1x3 b)
{
	vec1x3 result(a.v[0][0] + b.v[0][0], a.v[0][1] + b.v[0][1], a.v[0][2] + b.v[0][2]);
	return result;
}

// vec1x3 ����
vec1x3 operator-(vec1x3 a, vec1x3 b)
{
	vec1x3 result(a.v[0][0] - b.v[0][0], a.v[0][1] - b.v[0][1], a.v[0][2] - b.v[0][2]);
	return result;
}

// ���, vec1x3 ����
vec1x3 operator*(float a, vec1x3 b) {
	vec1x3 result(b.v[0][0] * a, b.v[0][1] * a, b.v[0][2] * a);
	return result;
}

// vec1x3, ��� ����
vec1x3 operator*(vec1x3 b, float a) {
	vec1x3 result(b.v[0][0] * a, b.v[0][1] * a, b.v[0][2] * a);
	return result;
}

// vec1x3, ��� ������
vec1x3 operator/(vec1x3 b, float a) {
	vec1x3 result(b.v[0][0] / a, b.v[0][1] / a, b.v[0][2] / a);
	return result;
}

// �ڷᱸ���� vec4
struct vec4
{
	float v[4][1];

	// �ʱⰪ
	vec4()
	{
		v[0][0] = 0;
		v[1][0] = 0;
		v[2][0] = 0;
		v[3][0] = 0;
	}

	// �ʱ�ȭ
	vec4(float x, float y, float z, float w)
	{
		v[0][0] = x;
		v[1][0] = y;
		v[2][0] = z;
		v[3][0] = w;
	}

};

// vec4 ����
vec4 operator+(vec4 a, vec4 b)
{
	vec4 result(a.v[0][0] + b.v[0][0], a.v[1][0] + b.v[1][0], a.v[2][0] + b.v[2][0], a.v[3][0] + b.v[3][0]);
	return result;
}

// vec4 ����
vec4 operator-(vec4 a, vec4 b)
{
	vec4 result(a.v[0][0] - b.v[0][0], a.v[1][0] - b.v[1][0], a.v[2][0] - b.v[2][0], a.v[3][0] - b.v[3][0]);
	return result;
}

// ���, vec4 ����
vec4 operator*(float b, vec4 a) {
	vec4 result(a.v[0][0] * b, a.v[1][0] * b, a.v[2][0] * b, a.v[3][0] * b);
	return result;
}

// vec4, ��� ����
vec4 operator*(vec4 a, float b) {
	vec4 result(a.v[0][0] * b, a.v[1][0] * b, a.v[2][0] * b, a.v[3][0] * b);
	return result;
}

// vec4, ��� ������
vec4 operator/(vec4 a, float b) {
	vec4 result(a.v[0][0] / b, a.v[1][0] / b, a.v[2][0] / b, a.v[3][0] / b);
	return result;
}

// �ڷᱸ���� vec1x4
struct vec1x4
{
	float v[1][4];

	// �ʱⰪ
	vec1x4()
	{
		v[0][0] = 0;
		v[0][1] = 0;
		v[0][2] = 0;
		v[0][3] = 0;
	}

	// �ʱ�ȭ
	vec1x4(float x_, float y_, float z_, float w_)
	{
		v[0][0] = x_;
		v[0][1] = y_;
		v[0][2] = z_;
		v[0][3] = w_;
	}
};

// vec1x4 ����
vec1x4 operator+(vec1x4 a, vec1x4 b)
{
	vec1x4 result(a.v[0][0] + b.v[0][0], a.v[0][1] + b.v[0][1], a.v[0][2] + b.v[0][2], a.v[0][3] + b.v[0][3]);
	return result;
}

// vec1x4 ����
vec1x4 operator-(vec1x4 a, vec1x4 b)
{
	vec1x4 result(a.v[0][0] - b.v[0][0], a.v[0][1] - b.v[0][1], a.v[0][2] - b.v[0][2], a.v[0][3] - b.v[0][3]);
	return result;
}

// ���, vec1x4 ����
vec1x4 operator*(float a, vec1x4 b) {
	vec1x4 result(b.v[0][0] * a, b.v[0][1] * a, b.v[0][2] * a, b.v[0][3] * a);
	return result;
}

// vec1x4, ��� ������
vec1x4 operator/(vec1x4 b, float a) {
	vec1x4 result(b.v[0][0] / a, b.v[0][1] / a, b.v[0][2] / a, b.v[0][3] / a);
	return result;
}

// �ڷᱸ���� mat3
struct mat3
{
	// 3x3��� ����
	float m[3][3];
	
	// �ʱⰪ
	mat3()
	{
		m[0][0] = 0;
		m[0][1] = 0;
		m[0][2] = 0;
		m[1][0] = 0;
		m[1][1] = 0;
		m[1][2] = 0;
		m[2][0] = 0;
		m[2][1] = 0;
		m[2][2] = 0;
	}

	// �ʱ�ȭ
	mat3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
	{
		m[0][0] = a;
		m[0][1] = b;
		m[0][2] = c;

		m[1][0] = d;
		m[1][1] = e;
		m[1][2] = f;

		m[2][0] = g;
		m[2][1] = h;
		m[2][2] = i;
	}
};

// mat3 ����
mat3 operator*(mat3 a, mat3 b)
{
	mat3 mat;

	mat.m[0][0] = (a.m[0][0] * b.m[0][0]) + (a.m[0][1] * b.m[1][0]) + (a.m[0][2] * b.m[2][0]);
	mat.m[0][1] = (a.m[0][0] * b.m[0][1]) + (a.m[0][1] * b.m[1][1]) + (a.m[0][2] * b.m[2][1]);
	mat.m[0][2] = (a.m[0][0] * b.m[0][2]) + (a.m[0][1] * b.m[1][2]) + (a.m[0][2] * b.m[2][2]);

	mat.m[1][0] = (a.m[1][0] * b.m[0][0]) + (a.m[1][1] * b.m[1][0]) + (a.m[1][2] * b.m[2][0]);
	mat.m[1][1] = (a.m[1][0] * b.m[0][1]) + (a.m[1][1] * b.m[1][1]) + (a.m[1][2] * b.m[2][1]);
	mat.m[1][2] = (a.m[1][0] * b.m[0][2]) + (a.m[1][1] * b.m[1][2]) + (a.m[1][2] * b.m[2][2]);

	mat.m[2][0] = (a.m[2][0] * b.m[0][0]) + (a.m[2][1] * b.m[1][0]) + (a.m[2][2] * b.m[2][0]);
	mat.m[2][1] = (a.m[2][0] * b.m[0][1]) + (a.m[2][1] * b.m[1][1]) + (a.m[2][2] * b.m[2][1]);
	mat.m[2][2] = (a.m[2][0] * b.m[0][2]) + (a.m[2][1] * b.m[1][2]) + (a.m[2][2] * b.m[2][2]);

	// ����� mat ��ȯ
	return mat;
}

// mat3 ����
mat3 operator+(mat3 a, mat3 b) {
	mat3 mat;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			mat.m[i][j] = a.m[i][j] + b.m[i][j];

	return mat;
}

// mat3 ����
mat3 operator-(mat3 a, mat3 b) {
	mat3 mat;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			mat.m[i][j] = a.m[i][j] - b.m[i][j];
	return mat;
}

// ���, mat3 ����
mat3 operator*(float a, mat3 b) {

	mat3 mat;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			mat.m[i][j] = a * b.m[i][j];
	return mat;
}

// mat3, ��� ����
mat3 operator*(mat3 b, float a) {

	mat3 mat;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			mat.m[i][j] = b.m[i][j] * a;
	return mat;
} 

// mat3, ��� ������
mat3 operator/(mat3 b, float a) {

	mat3 mat;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			mat.m[i][j] = b.m[i][j] / a;
	return mat;
}

// mat3, vec3 ����
vec3 operator*(mat3 b, vec3 a)
{
	vec3 vec;
	vec.v[0][0] = (a.v[0][0] * b.m[0][0]) + (a.v[1][0] * b.m[0][1]) + (a.v[2][0] * b.m[0][2]);
	vec.v[1][0] = (a.v[0][0] * b.m[1][0]) + (a.v[1][0] * b.m[1][1]) + (a.v[2][0] * b.m[1][2]);
	vec.v[2][0] = (a.v[0][0] * b.m[2][0]) + (a.v[1][0] * b.m[2][1]) + (a.v[2][0] * b.m[2][2]);
	return vec;
}

// vec3, mat3 ����
vec3 operator*(vec3 a, mat3 b)
{
	vec3 vec;
	vec1x3 vec2;
	for (int i = 0; i < 3; i++)
		vec2.v[0][i] = a.v[i][0];
	vec.v[0][0] = (vec2.v[0][0] * b.m[0][0]) + (vec2.v[0][1] * b.m[1][0]) + (vec2.v[0][2] * b.m[2][0]);
	vec.v[0][1] = (vec2.v[0][0] * b.m[0][1]) + (vec2.v[0][1] * b.m[1][1]) + (vec2.v[0][2] * b.m[2][1]);
	vec.v[0][2] = (vec2.v[0][0] * b.m[0][2]) + (vec2.v[0][1] * b.m[1][2]) + (vec2.v[0][2] * b.m[2][2]);
	return vec;
}

// vec1x3, mat3 ����
vec1x3 operator*(vec1x3 b, mat3 a)
{
	vec1x3 vec;
	vec.v[0][0] = (b.v[0][0] * a.m[0][0]) + (b.v[0][1] * a.m[1][0]) + (b.v[0][2] * a.m[2][0]);
	vec.v[0][1] = (b.v[0][0] * a.m[0][1]) + (b.v[0][1] * a.m[1][1]) + (b.v[0][2] * a.m[2][1]);
	vec.v[0][2] = (b.v[0][0] * a.m[0][2]) + (b.v[0][1] * a.m[1][2]) + (b.v[0][2] * a.m[2][2]);
	return vec;
}

// mat3, vec1x3 ����
vec1x3 operator*(mat3 b, vec1x3 a)
{
	vec1x3 vec;
	vec3 vec2;
	for (int i = 0; i < 3; i++)
		vec2.v[i][0] = a.v[0][i];

	vec.v[0][0] = (vec2.v[0][0] * b.m[0][0]) + (vec2.v[1][0] * b.m[0][1]) + (vec2.v[2][0] * b.m[0][2]);
	vec.v[0][1] = (vec2.v[0][0] * b.m[1][0]) + (vec2.v[1][0] * b.m[1][1]) + (vec2.v[2][0] * b.m[1][2]);
	vec.v[0][2] = (vec2.v[0][0] * b.m[2][0]) + (vec2.v[1][0] * b.m[2][1]) + (vec2.v[2][0] * b.m[2][2]);
	return vec;
}

// �ڷᱸ���� mat4
struct mat4
{
	// 4x4��� ����
	float m[4][4];

	// �ʱⰪ
	mat4() {
		m[0][0] = 0;
		m[0][1] = 0;
		m[0][2] = 0;
		m[0][3] = 0;

		m[1][0] = 0;
		m[1][1] = 0;
		m[1][2] = 0;
		m[1][3] = 0;

		m[2][0] = 0;
		m[2][1] = 0;
		m[2][2] = 0;
		m[2][3] = 0;

		m[3][0] = 0;
		m[3][1] = 0;
		m[3][2] = 0;
		m[3][3] = 0;
	}

	// �ʱ�ȭ
	mat4(float m4_1, float m4_2, float m4_3, float m4_4, float m4_5, float m4_6, float m4_7, float m4_8, float m4_9, float m4_10, float m4_11, float m4_12, float m4_13, float m4_14, float m4_15, float m4_16) {
		m[0][0] = m4_1;
		m[0][1] = m4_2;
		m[0][2] = m4_3;
		m[0][3] = m4_4;

		m[1][0] = m4_5;
		m[1][1] = m4_6;
		m[1][2] = m4_7;
		m[1][3] = m4_8;

		m[2][0] = m4_9;
		m[2][1] = m4_10;
		m[2][2] = m4_11;
		m[2][3] = m4_12;

		m[3][0] = m4_13;
		m[3][1] = m4_14;
		m[3][2] = m4_15;
		m[3][3] = m4_16;
	}
};

// mat4 ����
mat4 operator*(mat4 a, mat4 b)
{
	mat4 mat;

	mat.m[0][0] = (a.m[0][0] * b.m[0][0]) + (a.m[0][1] * b.m[1][0]) + (a.m[0][2] * b.m[2][0]) + (a.m[0][3] * b.m[3][0]);
	mat.m[0][1] = (a.m[0][0] * b.m[0][1]) + (a.m[0][1] * b.m[1][1]) + (a.m[0][2] * b.m[2][1]) + (a.m[0][3] * b.m[3][1]);
	mat.m[0][2] = (a.m[0][0] * b.m[0][2]) + (a.m[0][1] * b.m[1][2]) + (a.m[0][2] * b.m[2][2]) + (a.m[0][3] * b.m[3][2]);
	mat.m[0][3] = (a.m[0][0] * b.m[0][3]) + (a.m[0][1] * b.m[1][3]) + (a.m[0][2] * b.m[2][3]) + (a.m[0][3] * b.m[3][3]);

	mat.m[1][0] = (a.m[1][0] * b.m[0][0]) + (a.m[1][1] * b.m[1][0]) + (a.m[1][2] * b.m[2][0]) + (a.m[1][3] * b.m[3][0]);
	mat.m[1][1] = (a.m[1][0] * b.m[0][1]) + (a.m[1][1] * b.m[1][1]) + (a.m[1][2] * b.m[2][1]) + (a.m[1][3] * b.m[3][1]);
	mat.m[1][2] = (a.m[1][0] * b.m[0][2]) + (a.m[1][1] * b.m[1][2]) + (a.m[1][2] * b.m[2][2]) + (a.m[1][3] * b.m[3][2]);
	mat.m[1][3] = (a.m[1][0] * b.m[0][3]) + (a.m[1][1] * b.m[1][3]) + (a.m[1][2] * b.m[2][3]) + (a.m[1][3] * b.m[3][3]);

	mat.m[2][0] = (a.m[2][0] * b.m[0][0]) + (a.m[2][1] * b.m[1][0]) + (a.m[2][2] * b.m[2][0]) + (a.m[2][3] * b.m[3][0]);
	mat.m[2][1] = (a.m[2][0] * b.m[0][1]) + (a.m[2][1] * b.m[1][1]) + (a.m[2][2] * b.m[2][1]) + (a.m[2][3] * b.m[3][1]);
	mat.m[2][2] = (a.m[2][0] * b.m[0][2]) + (a.m[2][1] * b.m[1][2]) + (a.m[2][2] * b.m[2][2]) + (a.m[2][3] * b.m[3][2]);
	mat.m[2][3] = (a.m[2][0] * b.m[0][3]) + (a.m[2][1] * b.m[1][3]) + (a.m[2][2] * b.m[2][3]) + (a.m[2][3] * b.m[3][3]);

	mat.m[3][0] = (a.m[3][0] * b.m[0][0]) + (a.m[3][1] * b.m[1][0]) + (a.m[3][2] * b.m[2][0]) + (a.m[3][3] * b.m[3][0]);
	mat.m[3][1] = (a.m[3][0] * b.m[0][1]) + (a.m[3][1] * b.m[1][1]) + (a.m[3][2] * b.m[2][1]) + (a.m[3][3] * b.m[3][1]);
	mat.m[3][2] = (a.m[3][0] * b.m[0][2]) + (a.m[3][1] * b.m[1][2]) + (a.m[3][2] * b.m[2][2]) + (a.m[3][3] * b.m[3][2]);
	mat.m[3][3] = (a.m[3][0] * b.m[0][3]) + (a.m[3][1] * b.m[1][3]) + (a.m[3][2] * b.m[2][3]) + (a.m[3][3] * b.m[3][3]);

	// ����� mat ��ȯ
	return mat;
}

// mat4, vec4 ����
vec4 operator*(mat4 b, vec4 a)
{
	vec4 vec;
	vec.v[0][0] = (a.v[0][0] * b.m[0][0]) + (a.v[1][0] * b.m[0][1]) + (a.v[2][0] * b.m[0][2]) + (a.v[3][0] * b.m[0][3]);
	vec.v[1][0] = (a.v[0][0] * b.m[1][0]) + (a.v[1][0] * b.m[1][1]) + (a.v[2][0] * b.m[1][2]) + (a.v[3][0] * b.m[1][3]);
	vec.v[2][0] = (a.v[0][0] * b.m[2][0]) + (a.v[1][0] * b.m[2][1]) + (a.v[2][0] * b.m[2][2]) + (a.v[3][0] * b.m[2][3]);
	vec.v[3][0] = (a.v[0][0] * b.m[3][0]) + (a.v[1][0] * b.m[3][1]) + (a.v[2][0] * b.m[3][2]) + (a.v[3][0] * b.m[3][3]);
	return vec;
}

// vec4, mat4 ����
vec4 operator*(vec4 b, mat4 a)
{
	vec1x4 vec2;
	vec4 vec;
	for (int i = 0; i < 4; i++)
		vec2.v[0][i] = b.v[i][0];

	vec.v[0][0] = (vec2.v[0][0] * a.m[0][0]) + (vec2.v[0][1] * a.m[1][0]) + (vec2.v[0][2] * a.m[2][0]) + (vec2.v[0][3] * a.m[3][0]);
	vec.v[1][0] = (vec2.v[0][0] * a.m[0][1]) + (vec2.v[0][1] * a.m[1][1]) + (vec2.v[0][2] * a.m[2][1]) + (vec2.v[0][3] * a.m[3][1]);
	vec.v[2][0] = (vec2.v[0][0] * a.m[0][2]) + (vec2.v[0][1] * a.m[1][2]) + (vec2.v[0][2] * a.m[2][2]) + (vec2.v[0][3] * a.m[3][2]);
	vec.v[3][0] = (vec2.v[0][0] * a.m[0][3]) + (vec2.v[0][1] * a.m[1][3]) + (vec2.v[0][2] * a.m[2][3]) + (vec2.v[0][3] * a.m[3][3]);
	return vec;
}

// vec1x4, mat4 ����
vec1x4 operator*(vec1x4 b, mat4 a)
{
	vec1x4 vec;
	vec.v[0][0] = (b.v[0][0] * a.m[0][0]) + (b.v[0][1] * a.m[1][0]) + (b.v[0][2] * a.m[2][0]) + (b.v[0][3] * a.m[3][0]);
	vec.v[0][1] = (b.v[0][0] * a.m[0][1]) + (b.v[0][1] * a.m[1][1]) + (b.v[0][2] * a.m[2][1]) + (b.v[0][3] * a.m[3][1]);
	vec.v[0][2] = (b.v[0][0] * a.m[0][2]) + (b.v[0][1] * a.m[1][2]) + (b.v[0][2] * a.m[2][2]) + (b.v[0][3] * a.m[3][2]);
	vec.v[0][3] = (b.v[0][0] * a.m[0][3]) + (b.v[0][1] * a.m[1][3]) + (b.v[0][2] * a.m[2][3]) + (b.v[0][3] * a.m[3][3]);
	return vec;
}

// mat4, vec1x4 ����
vec1x4 operator*(mat4 b, vec1x4 a)
{
	vec4 vec2;
	vec1x4 vec;
	for (int i = 0; i < 4; i++)
		vec2.v[i][0] = a.v[0][i];

	vec.v[0][0] = (vec2.v[0][0] * b.m[0][0]) + (vec2.v[1][0] * b.m[0][1]) + (vec2.v[2][0] * b.m[0][2]) + (vec2.v[3][0] * b.m[0][3]);
	vec.v[0][1] = (vec2.v[0][0] * b.m[1][0]) + (vec2.v[1][0] * b.m[1][1]) + (vec2.v[2][0] * b.m[1][2]) + (vec2.v[3][0] * b.m[1][3]);
	vec.v[0][2] = (vec2.v[0][0] * b.m[2][0]) + (vec2.v[1][0] * b.m[2][1]) + (vec2.v[2][0] * b.m[2][2]) + (vec2.v[3][0] * b.m[2][3]);
	vec.v[0][3] = (vec2.v[0][0] * b.m[3][0]) + (vec2.v[1][0] * b.m[3][1]) + (vec2.v[2][0] * b.m[3][2]) + (vec2.v[3][0] * b.m[3][3]);
	return vec;
}

// mat4 ����
mat4 operator+(mat4 a, mat4 b) {

	mat4 mat;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			mat.m[i][j] = a.m[i][j] + b.m[i][j];
	return mat;
}

// mat4 ����
mat4 operator-(mat4 a, mat4 b) {
	mat4 mat;

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			mat.m[i][j] = a.m[i][j] - b.m[i][j];
	return mat;
}

// ���, mat4 ����
mat4 operator*(float a, mat4 b) {

	mat4 mat;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			mat.m[i][j] = a * b.m[i][j];
	return mat;
}

// mat4, ��� ����
mat4 operator*(mat4 b, float a) {

	mat4 mat;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			mat.m[i][j] = b.m[i][j] * a;
	return mat;
}

// mat4, ��� ������
mat4 operator/(mat4 b, float a) {

	mat4 mat;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			mat.m[i][j] = b.m[i][j] / a;
	return mat;
}


