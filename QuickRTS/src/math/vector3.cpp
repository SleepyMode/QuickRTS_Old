
#include <cmath>
#include <math/vector3.h>

//-----------------------------------------------------------------------------
// Constructors
//-----------------------------------------------------------------------------

Vector3::Vector3()
{
	this->x = 0.f;
	this->y = 0.f;
	this->z = 0.f;
}

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3::Vector3(float val)
{
	this->x = val;
	this->y = val;
	this->z = val;
}

Vector3::Vector3(const Vector3& vector)
{
	this->x = vector.x;
	this->y = vector.y;
	this->z = vector.z;
}

//-----------------------------------------------------------------------------
// Member Methods 
//-----------------------------------------------------------------------------

float Vector3::Dot(const Vector3& vector) const
{
	return (this->x * vector.x + this->y * vector.y + this->z * vector.z);
}

Vector3& Vector3::Cross(const Vector3& vector) const
{
	Vector3 vec;

	vec.x = this->y * vector.z - this->z * vector.y;
	vec.y = this->z * vector.x - this->x * vector.z;
	vec.z = this->x * vector.y - this->y * vector.x;

	return vec;
}

float Vector3::Length() const
{
	return sqrtf(this->x * this->x + this->y * this->y + this->z * this->z);
}

float Vector3::LengthSqr() const
{
	return (this->x * this->x + this->y * this->y + this->z * this->z);
}

void Vector3::Normalize()
{
	float scale = 1.f / this->Length();

	this->x *= scale;
	this->y *= scale;
	this->z *= scale;
}

Vector3& Vector3::GetNormalized() const
{
	Vector3 ret;
	ret.x = this->x;
	ret.y = this->y;
	ret.z = this->z;

	float scale = 1.f / this->Length();
	ret.x *= scale;
	ret.y *= scale;
	ret.z *= scale;

	return ret;
}

//-----------------------------------------------------------------------------
// Static Methods 
//-----------------------------------------------------------------------------

float Vector3::Dot(const Vector3& lhs, const Vector3& rhs)
{
	return (lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z);
}

Vector3& Vector3::Cross(const Vector3& lhs, const Vector3& rhs)
{
	Vector3 vec;

	vec.x = lhs.y * rhs.z - lhs.z * rhs.y;
	vec.y = lhs.z * rhs.x - lhs.x * rhs.z;
	vec.z = lhs.x * rhs.y - lhs.y * rhs.x;

	return vec;
}

float Vector3::Length(const Vector3& vec)
{
	return sqrtf(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
}

float Vector3::LengthSqr(const Vector3& vec)
{
	return (vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
}

void Vector3::Normalize(Vector3& vec)
{
	float scale = 1.f / vec.Length();

	vec.x *= scale;
	vec.y *= scale;
	vec.z *= scale;
}

Vector3& Vector3::GetNormalized(const Vector3& vec)
{
	Vector3 ret;
	ret.x = vec.x;
	ret.y = vec.y;
	ret.z = vec.z;

	float scale = 1.f / vec.Length();
	ret.x *= scale;
	ret.y *= scale;
	ret.z *= scale;

	return ret;
}

//-----------------------------------------------------------------------------
// Operators 
//-----------------------------------------------------------------------------

Vector3& Vector3::operator=(const Vector3& vec)
{
	Vector3 ret;
	ret.x = vec.x;
	ret.y = vec.y;
	ret.z = vec.z;
	return ret;
}

Vector3& Vector3::operator+=(const Vector3& vec)
{
	Vector3 ret;
	ret.x = this->x + vec.x;
	ret.y = this->y + vec.y;
	ret.z = this->z + vec.z;
	return ret;
}

Vector3& Vector3::operator+=(const float val)
{
	Vector3 ret;
	ret.x = this->x + val;
	ret.y = this->y + val;
	ret.z = this->z + val;
	return ret;
}

Vector3& Vector3::operator-=(const Vector3& vec)
{
	Vector3 ret;
	ret.x = this->x - vec.x;
	ret.y = this->y - vec.y;
	ret.z = this->z - vec.z;
	return ret;
}

Vector3& Vector3::operator-=(const float val)
{
	Vector3 ret;
	ret.x = this->x - val;
	ret.y = this->y - val;
	ret.z = this->z - val;
	return ret;
}

Vector3& Vector3::operator*=(const Vector3& vec)
{
	Vector3 ret;
	ret.x = this->x * vec.x;
	ret.y = this->y * vec.y;
	ret.z = this->z * vec.z;
	return ret;
}

Vector3& Vector3::operator*=(const float val)
{
	Vector3 ret;
	ret.x = this->x * val;
	ret.y = this->y * val;
	ret.z = this->z * val;
	return ret;
}

Vector3& Vector3::operator/=(const Vector3& vec)
{
	Vector3 ret;
	ret.x = this->x / vec.x;
	ret.y = this->y / vec.y;
	ret.z = this->z / vec.z;
	return ret;
}

Vector3& Vector3::operator/=(const float val)
{
	Vector3 ret;
	ret.x = this->x / val;
	ret.y = this->y / val;
	ret.z = this->z / val;
	return ret;
}

Vector3 operator+(const Vector3& lhs, const Vector3& rhs)
{
	return Vector3(lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z);
}

Vector3 operator+(const Vector3& lhs, const float rhs)
{
	return Vector3(lhs.x + rhs, lhs.y + rhs, lhs.z + rhs);
}

Vector3 operator+(const float lhs, const Vector3& rhs)
{
	return Vector3(rhs.x + lhs, rhs.y + lhs, rhs.z + lhs);
}

Vector3 operator-(const Vector3& lhs, const Vector3& rhs)
{
	return Vector3(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z + rhs.z);
}

Vector3 operator-(const Vector3& lhs, const float rhs)
{
	return Vector3(lhs.x - rhs, lhs.y - rhs, lhs.z - rhs);
}

Vector3 operator-(const float lhs, const Vector3& rhs)
{
	return Vector3(rhs.x - lhs, rhs.y - lhs, rhs.z - lhs);
}

Vector3 operator*(const Vector3& lhs, const Vector3& rhs)
{
	return Vector3(lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z);
}

Vector3 operator*(const Vector3& lhs, const float rhs)
{
	return Vector3(lhs.x * rhs, lhs.y * rhs, lhs.z * rhs);
}

Vector3 operator*(const float lhs, const Vector3& rhs)
{
	return Vector3(rhs.x * lhs, rhs.y * lhs, rhs.z * lhs);
}

Vector3 operator/(const Vector3& lhs, const Vector3& rhs)
{
	return Vector3(lhs.x / rhs.x, lhs.y / rhs.y, lhs.z / rhs.z);
}

Vector3 operator/(const Vector3& lhs, const float rhs)
{
	return Vector3(lhs.x / rhs, lhs.y / rhs, lhs.z / rhs);
}

Vector3 operator/(const float lhs, const Vector3& rhs)
{
	return Vector3(lhs / rhs.x, lhs / rhs.y, lhs / rhs.z);
}

bool operator==(const Vector3& lhs, const Vector3& rhs)
{
	return (lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z);
}

bool operator==(const Vector3& lhs, const float rhs)
{
	return (lhs.x == rhs && lhs.y == rhs && lhs.z == rhs);
}

bool operator==(const float lhs, const Vector3& rhs)
{
	return (rhs.x == lhs && rhs.y == lhs && rhs.z == lhs);
}

bool operator!=(const Vector3& lhs, const Vector3& rhs)
{
	return (lhs.x != rhs.x || lhs.y != rhs.y || lhs.z != rhs.z);
}

bool operator!=(const Vector3& lhs, const float rhs)
{
	return (lhs.x != rhs || lhs.y != rhs || lhs.z != rhs);
}

bool operator!=(const float lhs, const Vector3& rhs)
{
	return (rhs.x != lhs || rhs.y != lhs || rhs.z != lhs);
}
