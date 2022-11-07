#pragma once

// 자료구조형 vec3
struct vec3
{
	// x,y,x 좌표 선언
	float vec[3];

	// x,y,z 좌표의 초기값
	vec3()
	{
		vec[0] = 0;
		vec[1] = 0;
		vec[2] = 0;
	}

	// 초기화
	vec3(float x, float y, float z)
	{
		vec[0] = x;
		vec[1] = y;
		vec[2] = z;
	}
};

// vec3 연산자 오버로딩
vec3 operator*(vec3 a, vec3 b)
{
	// 곱셈 연산
	vec3 result(a.vec[0] * b.vec[0], a.vec[1] * b.vec[1], a.vec[2] * b.vec[2]);
	return result;
}

// 자료구조형 mat3
struct mat3
{
	// 3x3 행렬 선언
	float mat[3][3];

	// 초기값 설정
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

	// 초기화
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

// mat3 연산자 오버로딩
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
	
	// 결과값 m 반환
	return mat;
}

// vec3, mat3 연산자 오버로딩
vec3 operator*(vec3 a, mat3 b)
{
	vec3 vec;
	
	vec.vec[0] = (a.vec[0] * b.mat[0][0]) + (a.vec[1] * b.mat[1][0]) + (a.vec[2] * b.mat[2][0]);
	vec.vec[1] = (a.vec[0] * b.mat[0][1]) + (a.vec[1] * b.mat[1][1]) + (a.vec[2] * b.mat[2][1]);
	vec.vec[2] = (a.vec[0] * b.mat[0][2]) + (a.vec[1] * b.mat[1][2]) + (a.vec[2] * b.mat[2][2]);

	// 결과값 v 반환
	return vec;
}
