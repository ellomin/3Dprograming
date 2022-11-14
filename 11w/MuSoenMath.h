#pragma once

struct mat3
{
	//3x3행렬 선언
	float m[3][3];	
	mat3(float a = 0, float b = 0, float c = 0, float d = 0, float e = 0, float f = 0, float g = 0, float h = 0, float i = 0);
	//초기화
	mat3 identity();
	//전치
	mat3 transpose();
	//곱
	mat3 operator*(const mat3& a);
	//나누기
	mat3 operator/(const mat3& a);
	//더하기
	mat3 operator+(const mat3& a);
	//빼기
	mat3 operator-(const mat3& a);
	//출력
	void mat3print();
};

//mat3 행렬 초기화
mat3::mat3(float a, float b, float c, float d, float e, float f, float g, float h, float i)

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

struct vec3 : public mat3
{
	//3x1행렬 선언
	float v[3][1];	
	vec3(float a = 0, float b = 0, float c = 0);
	//전치
	vec3 transpose();
	//곱
	vec3 operator*(const vec3& a);
	float v_1 = sizeof(v[0]) / sizeof(float);
	float v_2 = sizeof(v) / sizeof(v[0]);
	void vec3print();

};

//vec3 행렬 초기화
vec3::vec3(float a, float b, float c)

{
	v[0][0] = a;
	v[0][1] = b;
	v[0][2] = c;
}

struct vec4
{
	//4x1행렬 선언
	float v[4][1];
	vec4(float a = 0, float b = 0, float c = 0, float d = 0);
	//전치
	vec4 transpose();
	//곱
	vec4 operator*(const vec4& a);
	float v_1 = sizeof(v[0]) / sizeof(float);
	float v_2 = sizeof(v) / sizeof(v[0]);
	void vec4print();
};

//vec4 행렬 초기화
vec4::vec4(float a, float b, float c, float d)

{
	v[0][0] = a;
	v[0][1] = b;
	v[0][2] = c;
	v[0][3] = d;
}


struct mat4
{
	//4x4행렬 선언
	float m[3][3]; 
	mat4(float a = 0, float b = 0, float c = 0, float d = 0, float e = 0, float f = 0, float g = 0, float h = 0, float i = 0, float j = 0,
		float k = 0, float l = 0, float n = 0, float o = 0, float p = 0, float q = 0);

	//초기화
	mat4 identity();
	//전치
	mat4 transpose();
	//곱
	mat4 operator*(const mat4& a);
	//나누기
	mat4 operator/(const mat4& a);
	//더하기
	mat4 operator+(const mat4& a);
	//빼기
	mat4 operator-(const mat4& a);
	void mat4print();
};

//mat4 행렬 초기화
mat4::mat4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j,
	float k, float l, float n, float o, float p, float q)

{
	m[0][0] = a;
	m[0][1] = b;
	m[0][2] = c;
	m[0][3] = d;

	m[1][0] = e;
	m[1][1] = f;
	m[1][2] = g;
	m[1][3] = h;

	m[2][0] = i;
	m[2][1] = j;
	m[2][2] = k;
	m[2][3] = l;

	m[3][0] = n;
	m[3][1] = o;
	m[3][2] = p;
	m[3][3] = q;
}

//mat3 초기화
mat3 mat3::identity() 

{
	float c[3][3] = {
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			m[i][j] = c[i][j];

	return *this;
}

//mat4 초기화
mat4 mat4::identity()

{
	float c[3][3] = {
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			m[i][j] = c[i][j];
	return *this;

}

//mat3 전치
mat3 mat3::transpose()

{
	mat3 copy; 

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			copy.m[i][j] = m[i][j];	

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			m[j][i] = copy.m[i][j];	
	return *this;
}

//mat4 전치
mat4 mat4::transpose()

{
	mat4 copy; 

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			copy.m[i][j] = m[i][j];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			m[j][i] = copy.m[i][j];
	return *this;
}

//vec3 전치
vec3 vec3::transpose()

{
	vec3 copy; 

	for (int i = 0; i < sizeof(v) / sizeof(v[0]); i++) {
		for (int j = 0; j < sizeof(v[0]) / sizeof(float); j++) {
			copy.v[i][j] = v[i][j];
		}
	}

	for (int i = 0; i < sizeof(v) / sizeof(v[0]); i++) {
		for (int j = 0; j < sizeof(v[0]) / sizeof(float); j++) {
			v[j][i] = copy.v[i][j];
		}
		return *this;
	}
}

//vec4 전치
vec4 vec4::transpose()

{
	vec4 copy; 

	for (int i = 0; i < sizeof(v) / sizeof(v[0]); i++) {
		for (int j = 0; j < sizeof(v[0]) / sizeof(float); j++) {
			copy.v[i][j] = v[i][j];
		}
	}

	for (int i = 0; i < sizeof(v) / sizeof(v[0]); i++) {
		for (int j = 0; j < sizeof(v[0]) / sizeof(float); j++) {
			v[j][i] = copy.v[i][j];
		}
		return *this;
	}
}

