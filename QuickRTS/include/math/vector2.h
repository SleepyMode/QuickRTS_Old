
#ifndef QUICKRTS_MATH_VECTOR2_H_
#define QUICKRTS_MATH_VECTOR2_H_

// #class Vector2
// Provides with a simple two-dimensional Euler Vector.
class Vector2
{
public:
	// The X component of the vector.
	float x;

	// The Y component of the vector.
	float y;

public:
	// Default constructor.
	Vector2();

	// Constructs a Vector2 from it's two components.
	Vector2(float x, float y);

	// Constructs a Vector2 from a float value.
	Vector2(float val);

	// Constructs a Vector2 from another Vector2.
	Vector2(const Vector2& vector);

public:
	// Returns the dot product of the vector with another.
	float Dot(const Vector2& vector) const;

	// Returns the length(magnitude) of the vector.
	float Length() const;

	// Returns the squared length(magnitude) of the vector.
	float LengthSqr() const;

	// Normalizes the vector.
	void Normalize();

	// Returns a normalized version of the vector.
	Vector2& GetNormalized() const;

public:
	// Returns the dot product of two vectors.
	static float Dot(const Vector2& lhs, const Vector2& rhs);

	// Returns the length(magnitude) of the vector.
	static float Length(const Vector2& vec);

	// Returns the squared length(magnitude) of the vector.
	static float LengthSqr(const Vector2& vec);

	// Normalizes the vector.
	[[depracted("Refrain from using this function. Instead, use the member function <Vector2>.Normalize")]]
	static void Normalize(Vector2& vec);

	// Returns a normalized version of the vector.
	static Vector2& GetNormalized(const Vector2& vec);

public:
	// Sets the value of the vector.
	Vector2& operator=(const Vector2& vec);

	// #groupdoc
	// Creates a vector with the added value of both operands.
	Vector2& operator+=(const Vector2& vec);
	Vector2& operator+=(const float val);
	// #endgroup

	// #groupdoc
	// Creates a vector with the subtracted value of both operands.
	Vector2& operator-=(const Vector2& vec);
	Vector2& operator-=(const float val);
	// #endgroup

	// #groupdoc
	// Creates a vector with the scaled value of both operands.
	Vector2& operator*=(const Vector2& vec);
	Vector2& operator*=(const float val);
	// #endgroup

	// #groupdoc
	// Creates a vector with the divided value of both operands.
	Vector2& operator/=(const Vector2& vec);
	Vector2& operator/=(const float val);
	// #endgroup

	// #groupdoc
	// Creates a vector with the added value of both operands.
	friend Vector2 operator+(const Vector2& lhs, const Vector2& rhs);
	friend Vector2 operator+(const Vector2& lhs, const float rhs);
	friend Vector2 operator+(const float lhs, const Vector2& rhs);
	// #endgroup

	// #groupdoc
	// Creates a vector with the subtracted value of both operands.
	friend Vector2 operator-(const Vector2& lhs, const Vector2& rhs);
	friend Vector2 operator-(const Vector2& lhs, const float rhs);
	friend Vector2 operator-(const float lhs, const Vector2& rhs);
	// #endgroup

	// #groupdoc
	// Creates a vector with the scaled value of both operands.
	friend Vector2 operator*(const Vector2& lhs, const Vector2& rhs);
	friend Vector2 operator*(const Vector2& lhs, const float rhs);
	friend Vector2 operator*(const float lhs, const Vector2& rhs);
	// #endgroup

	// #groupdoc
	// Creates a vector with the divided value of both operands.
	friend Vector2 operator/(const Vector2& lhs, const Vector2& rhs);
	friend Vector2 operator/(const Vector2& lhs, const float rhs);
	friend Vector2 operator/(const float lhs, const Vector2& rhs);
	// #endgroup

	// #groupdoc
	// Checks for the equality of the vector.
	friend bool operator==(const Vector2& lhs, const Vector2& rhs);
	friend bool operator==(const Vector2& lhs, const float rhs);
	friend bool operator==(const float lhs, const Vector2& rhs);
	// #endgroup

	// #groupdoc
	// Checks for the inequality of the vector.
	friend bool operator!=(const Vector2& lhs, const Vector2& rhs);
	friend bool operator!=(const Vector2& lhs, const float rhs);
	friend bool operator!=(const float lhs, const Vector2& rhs);
	// #endgroup
};

#endif // QUICKRTS_MATH_VECTOR2_H_
