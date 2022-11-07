#pragma once

// �ڷᱸ���� vec3
struct vec3
{
	// x,y,x ��ǥ ����
	float vec[3];

	// x,y,z ��ǥ�� �ʱⰪ
	vec3()
	{
		vec[0] = 0;
		vec[1] = 0;
		vec[2] = 0;
	}

	// �ʱ�ȭ
	vec3(float x, float y, float z)
	{
		vec[0] = x;
		vec[1] = y;
		vec[2] = z;
	}
};

// vec3 ������ �����ε�
vec3 operator*(vec3 a, vec3 b)
{
	// ���� ����
	vec3 result(a.vec[0] * b.vec[0], a.vec[1] * b.vec[1], a.vec[2] * b.vec[2]);
	return result;
}

// �ڷᱸ���� mat3
struct mat3
{
	// 3x3 ��� ����
	float mat[3][3];

	// �ʱⰪ ����
	mat3()
	{
		mat[0][0] = 0;
		mat[0][1] = 0;
		mat[0][2] = 0;

		mat[1][0] = 0;
		mat[1][1] = 0;
		mat[1][2] = 0;

		mat[2][0] = 0;
		mat[2][1] = 0;
		mat[2][2] = 0;

	}

	// �ʱ�ȭ
	mat3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
	{
		mat[0][0] = a;
		mat[0][1] = b;
		mat[0][2] = c;

		mat[1][0] = d;
		mat[1][1] = e;
		mat[1][2] = f;

		mat[2][0] = g;
		mat[2][1] = h;
		mat[2][2] = i;
	}
};

// mat3 ������ �����ε�
mat3 operator*(mat3 a, mat3 b)
{
	mat3 mat;

	mat.mat[0][0] = (a.mat[0][0] * b.mat[0][0]) + (a.mat[0][1] * b.mat[1][0]) + (a.mat[0][2] * b.mat[2][0]);
	mat.mat[0][1] = (a.mat[0][0] * b.mat[0][1]) + (a.mat[0][1] * b.mat[1][1]) + (a.mat[0][2] * b.mat[2][1]);
	mat.mat[0][2] = (a.mat[0][0] * b.mat[0][2]) + (a.mat[0][1] * b.mat[1][2]) + (a.mat[0][2] * b.mat[2][2]);

	mat.mat[1][0] = (a.mat[1][0] * b.mat[0][0]) + (a.mat[1][1] * b.mat[1][0]) + (a.mat[1][2] * b.mat[2][0]);
	mat.mat[1][1] = (a.mat[1][0] * b.mat[0][1]) + (a.mat[1][1] * b.mat[1][1]) + (a.mat[1][2] * b.mat[2][1]);
	mat.mat[1][2] = (a.mat[1][0] * b.mat[0][2]) + (a.mat[1][1] * b.mat[1][2]) + (a.mat[1][2] * b.mat[2][2]);

	mat.mat[2][0] = (a.mat[2][0] * b.mat[0][0]) + (a.mat[2][1] * b.mat[1][0]) + (a.mat[2][2] * b.mat[2][0]);
	mat.mat[2][1] = (a.mat[2][0] * b.mat[0][1]) + (a.mat[2][1] * b.mat[1][1]) + (a.mat[2][2] * b.mat[2][1]);
	mat.mat[2][2] = (a.mat[2][0] * b.mat[0][2]) + (a.mat[2][1] * b.mat[1][2]) + (a.mat[2][2] * b.mat[2][2]);
	
	// ����� m ��ȯ
	return mat;
}

// vec3, mat3 ������ �����ε�
vec3 operator*(vec3 a, mat3 b)
{
	vec3 vec;
	
	vec.vec[0] = (a.vec[0] * b.mat[0][0]) + (a.vec[1] * b.mat[1][0]) + (a.vec[2] * b.mat[2][0]);
	vec.vec[1] = (a.vec[0] * b.mat[0][1]) + (a.vec[1] * b.mat[1][1]) + (a.vec[2] * b.mat[2][1]);
	vec.vec[2] = (a.vec[0] * b.mat[0][2]) + (a.vec[1] * b.mat[1][2]) + (a.vec[2] * b.mat[2][2]);

	// ����� v ��ȯ
	return vec;
}
