
#include <cmath>
#include <math/vector4.h>

//-----------------------------------------------------------------------------
// Constructors
//-----------------------------------------------------------------------------

Vector4::Vector4()
{
	this->x = 0.f;
	this->y = 0.f;
	this->z = 0.f;
	this->w = 0.f;
}

Vector4::Vector4(float x, float y, float z, float w)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

Vector4::Vector4(float val)
{
	this->x = val;
	this->y = val;
	this->z = val;
	this->w = val;
}

Vector4::Vector4(const Vector4& vector)
{
	this->x = vector.x;
	this->y = vector.y;
	this->z = vector.z;
	this->w = vector.w;
}

//-----------------------------------------------------------------------------
// Member Methods 
//-----------------------------------------------------------------------------

float Vector4::Dot(const Vector4& vector) const
{
	return (this->x * vector.x + this->y * vector.y + this->z * vector.z + this->w * vector.w);
}

float Vector4::Length() const
{
	return sqrtf(this->x * this->x + this->y * this->y + this->z * this->z + this->w * this->w);
}

float Vector4::LengthSqr() const
{
	return (this->x * this->x + this->y * this->y + this->z * this->z + this->w * this->w);
}

void Vector4::Normalize()
{
	float scale = 1.f / this->Length();

	this->x *= scale;
	this->y *= scale;
	this->z *= scale;
	this->w *= scale;
}

Vector4& Vector4::GetNormalized() const
{
	Vector4 ret;
	ret.x = this->x;
	ret.y = this->y;
	ret.z = this->z;
	ret.w = this->w;

	float scale = 1.f / this->Length();
	ret.x *= scale;
	ret.y *= scale;
	ret.z *= scale;
	ret.w *= scale;

	return ret;
}

//-----------------------------------------------------------------------------
// Static Methods 
//-----------------------------------------------------------------------------

float Vector4::Dot(const Vector4& lhs, const Vector4& rhs)
{
	return (lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z + lhs.w * rhs.w);
}

float Vector4::Length(const Vector4& vec)
{
	return sqrtf(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z + vec.w * vec.w);
}

float Vector4::LengthSqr(const Vector4& vec)
{
	return (vec.x * vec.x + vec.y * vec.y + vec.z * vec.z + vec.w * vec.w);
}

void Vector4::Normalize(Vector4& vec)
{
	float scale = 1.f / vec.Length();

	vec.x *= scale;
	vec.y *= scale;
	vec.z *= scale;
	vec.w *= scale;
}

Vector4& Vector4::GetNormalized(const Vector4& vec)
{
	Vector4 ret;
	ret.x = vec.x;
	ret.y = vec.y;
	ret.z = vec.z;
	ret.w = vec.w;

	float scale = 1.f / vec.Length();
	ret.x *= scale;
	ret.y *= scale;
	ret.z *= scale;
	ret.w *= scale;

	return ret;
}

//-----------------------------------------------------------------------------
// Operators 
//-----------------------------------------------------------------------------

Vector4& Vector4::operator=(const Vector4& vec)
{
	Vector4 ret;
	ret.x = vec.x;
	ret.y = vec.y;
	ret.z = vec.z;
	ret.w = vec.w;
	return ret;
}

Vector4& Vector4::operator+=(const Vector4& vec)
{
	Vector4 ret;
	ret.x = this->x + vec.x;
	ret.y = this->y + vec.y;
	ret.z = this->z + vec.z;
	ret.w = this->w + vec.w;
	return ret;
}

Vector4& Vector4::operator+=(const float val)
{
	Vector4 ret;
	ret.x = this->x + val;
	ret.y = this->y + val;
	ret.z = this->z + val;
	ret.w = this->w + val;
	return ret;
}

Vector4& Vector4::operator-=(const Vector4& vec)
{
	Vector4 ret;
	ret.x = this->x - vec.x;
	ret.y = this->y - vec.y;
	ret.z = this->z - vec.z;
	ret.w = this->w - vec.w;
	return ret;
}

Vector4& Vector4::operator-=(const float val)
{
	Vector4 ret;
	ret.x = this->x - val;
	ret.y = this->y - val;
	ret.z = this->z - val;
	ret.w = this->w - val;
	return ret;
}

Vector4& Vector4::operator*=(const Vector4& vec)
{
	Vector4 ret;
	ret.x = this->x * vec.x;
	ret.y = this->y * vec.y;
	ret.z = this->z * vec.z;
	ret.w = this->w * vec.w;
	return ret;
}

Vector4& Vector4::operator*=(const float val)
{
	Vector4 ret;
	ret.x = this->x * val;
	ret.y = this->y * val;
	ret.z = this->z * val;
	ret.w = this->w * val;
	return ret;
}

Vector4& Vector4::operator/=(const Vector4& vec)
{
	Vector4 ret;
	ret.x = this->x / vec.x;
	ret.y = this->y / vec.y;
	ret.z = this->z / vec.z;
	ret.w = this->w / vec.w;
	return ret;
}

Vector4& Vector4::operator/=(const float val)
{
	Vector4 ret;
	ret.x = this->x / val;
	ret.y = this->y / val;
	ret.z = this->z / val;
	ret.w = this->w / val;
	return ret;
}

Vector4 operator+(const Vector4& lhs, const Vector4& rhs)
{
	return Vector4(lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z, lhs.w + rhs.w);
}

Vector4 operator+(const Vector4& lhs, const float rhs)
{
	return Vector4(lhs.x + rhs, lhs.y + rhs, lhs.z + rhs, lhs.w + rhs);
}

Vector4 operator+(const float lhs, const Vector4& rhs)
{
	return Vector4(rhs.x + lhs, rhs.y + lhs, rhs.z + lhs, rhs.w + lhs);
}

Vector4 operator-(const Vector4& lhs, const Vector4& rhs)
{
	return Vector4(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z + rhs.z, lhs.w - rhs.w);
}

Vector4 operator-(const Vector4& lhs, const float rhs)
{
	return Vector4(lhs.x - rhs, lhs.y - rhs, lhs.z - rhs, lhs.w - rhs);
}

Vector4 operator-(const float lhs, const Vector4& rhs)
{
	return Vector4(rhs.x - lhs, rhs.y - lhs, rhs.z - lhs, rhs.w - lhs);
}

Vector4 operator*(const Vector4& lhs, const Vector4& rhs)
{
	return Vector4(lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z, lhs.w * rhs.w);
}

Vector4 operator*(const Vector4& lhs, const float rhs)
{
	return Vector4(lhs.x * rhs, lhs.y * rhs, lhs.z * rhs, lhs.w * rhs);
}

Vector4 operator*(const float lhs, const Vector4& rhs)
{
	return Vector4(rhs.x * lhs, rhs.y * lhs, rhs.z * lhs, rhs.w * lhs);
}

Vector4 operator/(const Vector4& lhs, const Vector4& rhs)
{
	return Vector4(lhs.x / rhs.x, lhs.y / rhs.y, lhs.z / rhs.z, lhs.w / rhs.w);
}

Vector4 operator/(const Vector4& lhs, const float rhs)
{
	return Vector4(lhs.x / rhs, lhs.y / rhs, lhs.z / rhs, lhs.w / rhs);
}

Vector4 operator/(const float lhs, const Vector4& rhs)
{
	return Vector4(lhs / rhs.x, lhs / rhs.y, lhs / rhs.z, lhs / rhs.w);
}

bool operator==(const Vector4& lhs, const Vector4& rhs)
{
	return (lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z && lhs.w == rhs.w);
}

bool operator==(const Vector4& lhs, const float rhs)
{
	return (lhs.x == rhs && lhs.y == rhs && lhs.z == rhs && lhs.w == rhs);
}

bool operator==(const float lhs, const Vector4& rhs)
{
	return (rhs.x == lhs && rhs.y == lhs && rhs.z == lhs && rhs.w == lhs);
}

bool operator!=(const Vector4& lhs, const Vector4& rhs)
{
	return (lhs.x != rhs.x || lhs.y != rhs.y || lhs.z != rhs.z || lhs.w != rhs.w);
}

bool operator!=(const Vector4& lhs, const float rhs)
{
	return (lhs.x != rhs || lhs.y != rhs || lhs.z != rhs || lhs.w != rhs);
}

bool operator!=(const float lhs, const Vector4& rhs)
{
	return (rhs.x != lhs || rhs.y != lhs || rhs.z != lhs || rhs.w != lhs);
}
