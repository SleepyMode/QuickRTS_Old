
#include <cmath>
#include <math/vector2.h>

//-----------------------------------------------------------------------------
// Constructors
//-----------------------------------------------------------------------------

Vector2::Vector2()
{
	this->x = 0.f;
	this->y = 0.f;
}

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vector2::Vector2(float val)
{
	this->x = val;
	this->y = val;
}

Vector2::Vector2(const Vector2& vector)
{
	this->x = vector.x;
	this->y = vector.y;
}

//-----------------------------------------------------------------------------
// Member Methods 
//-----------------------------------------------------------------------------

float Vector2::Dot(const Vector2& vector) const
{
	return (this->x * vector.x + this->y * vector.y);
}

float Vector2::Length() const
{
	return sqrtf(this->x * this->x + this->y * this->y);
}

float Vector2::LengthSqr() const
{
	return (this->x * this->x + this->y * this->y);
}

void Vector2::Normalize()
{
	float scale = 1.f / this->Length();

	this->x *= scale;
	this->y *= scale;
}

Vector2& Vector2::GetNormalized() const
{
	Vector2 ret;
	ret.x = this->x;
	ret.y = this->y;

	float scale = 1.f / this->Length();
	ret.x *= scale;
	ret.y *= scale;

	return ret;
}

//-----------------------------------------------------------------------------
// Static Methods 
//-----------------------------------------------------------------------------

float Vector2::Dot(const Vector2& lhs, const Vector2& rhs)
{
	return (lhs.x * rhs.x + lhs.y * rhs.y);
}

float Vector2::Length(const Vector2& vec)
{
	return sqrtf(vec.x * vec.x + vec.y * vec.y);
}

float Vector2::LengthSqr(const Vector2& vec)
{
	return (vec.x * vec.x + vec.y * vec.y);
}

void Vector2::Normalize(Vector2& vec)
{
	float scale = 1.f / vec.Length();

	vec.x *= scale;
	vec.y *= scale;
}

Vector2& Vector2::GetNormalized(const Vector2& vec)
{
	Vector2 ret;
	ret.x = vec.x;
	ret.y = vec.y;

	float scale = 1.f / vec.Length();
	ret.x *= scale;
	ret.y *= scale;

	return ret;
}

//-----------------------------------------------------------------------------
// Operators 
//-----------------------------------------------------------------------------

Vector2& Vector2::operator=(const Vector2& vec)
{
	Vector2 ret;
		ret.x = vec.x;
		ret.y = vec.y;
	return ret;
}

Vector2& Vector2::operator+=(const Vector2& vec)
{
	Vector2 ret;
		ret.x = this->x + vec.x;
		ret.y = this->y + vec.y;
	return ret;
}

Vector2& Vector2::operator+=(const float val)
{
	Vector2 ret;
		ret.x = this->x + val;
		ret.y = this->y + val;
	return ret;
}

Vector2& Vector2::operator-=(const Vector2& vec)
{
	Vector2 ret;
	ret.x = this->x - vec.x;
	ret.y = this->y - vec.y;
	return ret;
}

Vector2& Vector2::operator-=(const float val)
{
	Vector2 ret;
	ret.x = this->x - val;
	ret.y = this->y - val;
	return ret;
}

Vector2& Vector2::operator*=(const Vector2& vec)
{
	Vector2 ret;
	ret.x = this->x * vec.x;
	ret.y = this->y * vec.y;
	return ret;
}

Vector2& Vector2::operator*=(const float val)
{
	Vector2 ret;
	ret.x = this->x * val;
	ret.y = this->y * val;
	return ret;
}

Vector2& Vector2::operator/=(const Vector2& vec)
{
	Vector2 ret;
	ret.x = this->x / vec.x;
	ret.y = this->y / vec.y;
	return ret;
}

Vector2& Vector2::operator/=(const float val)
{
	Vector2 ret;
	ret.x = this->x / val;
	ret.y = this->y / val;
	return ret;
}

Vector2 operator+(const Vector2& lhs, const Vector2& rhs)
{
	return Vector2(lhs.x + rhs.x, lhs.y + rhs.y);
}

Vector2 operator+(const Vector2& lhs, const float rhs)
{
	return Vector2(lhs.x + rhs, lhs.y + rhs);
}

Vector2 operator+(const float lhs, const Vector2& rhs)
{
	return Vector2(rhs.x + lhs, rhs.y + lhs);
}

Vector2 operator-(const Vector2& lhs, const Vector2& rhs)
{
	return Vector2(lhs.x - rhs.x, lhs.y - rhs.y);
}

Vector2 operator-(const Vector2& lhs, const float rhs)
{
	return Vector2(lhs.x - rhs, lhs.y - rhs);
}

Vector2 operator-(const float lhs, const Vector2& rhs)
{
	return Vector2(rhs.x - lhs, rhs.y - lhs);
}

Vector2 operator*(const Vector2& lhs, const Vector2& rhs)
{
	return Vector2(lhs.x * rhs.x, lhs.y * rhs.y);
}

Vector2 operator*(const Vector2& lhs, const float rhs)
{
	return Vector2(lhs.x * rhs, lhs.y * rhs);
}

Vector2 operator*(const float lhs, const Vector2& rhs)
{
	return Vector2(rhs.x * lhs, rhs.y * lhs);
}

Vector2 operator/(const Vector2& lhs, const Vector2& rhs)
{
	return Vector2(lhs.x / rhs.x, lhs.y / rhs.y);
}

Vector2 operator/(const Vector2& lhs, const float rhs)
{
	return Vector2(lhs.x / rhs, lhs.y / rhs);
}

Vector2 operator/(const float lhs, const Vector2& rhs)
{
	return Vector2(lhs / rhs.x, lhs / rhs.y);
}

bool operator==(const Vector2& lhs, const Vector2& rhs)
{
	return (lhs.x == rhs.x && lhs.y == rhs.y);
}

bool operator==(const Vector2& lhs, const float rhs)
{
	return (lhs.x == rhs && lhs.y == rhs);
}

bool operator==(const float lhs, const Vector2& rhs)
{
	return (rhs.x == lhs && rhs.y == lhs);
}

bool operator!=(const Vector2& lhs, const Vector2& rhs)
{
	return (lhs.x != rhs.x || lhs.y != rhs.y);
}

bool operator!=(const Vector2& lhs, const float rhs)
{
	return (lhs.x != rhs || lhs.y != rhs);
}

bool operator!=(const float lhs, const Vector2& rhs)
{
	return (rhs.x != lhs || rhs.y != lhs);
}
