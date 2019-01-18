
#ifndef QUICKRTS_MATH_VECTOR3_H_
#define QUICKRTS_MATH_VECTOR3_H_

// #class Vector4
// Provides with a simple four-dimensional Euler Vector.
class Vector4
{
public:
	// The X component of the vector.
	float x;

	// The Y component of the vector.
	float y;

	// The Z component of the vector.
	float z;

	// The W component of the vector.
	float w;

public:
	// Default constructor.
	Vector4();

	// Constructs a Vector4 from it's two components.
	Vector4(float x, float y, float z, float w);

	// Constructs a Vector4 from a float value.
	Vector4(float val);

	// Constructs a Vector4 from another Vector2.
	Vector4(const Vector4& vector);

public:
	// Returns the dot product of the vector with another.
	float Dot(const Vector4& vector) const;

	// Returns the length(magnitude) of the vector.
	float Length() const;

	// Returns the squared length(magnitude) of the vector.
	float LengthSqr() const;

	// Normalizes the vector.
	void Normalize();

	// Returns a normalized version of the vector.
	Vector4& GetNormalized() const;

public:
	// Returns the dot product of two vectors.
	static float Dot(const Vector4& lhs, const Vector4& rhs);

	// Returns the length(magnitude) of the vector.
	static float Length(const Vector4& vec);

	// Returns the squared length(magnitude) of the vector.
	static float LengthSqr(const Vector4& vec);

	// Normalizes the vector.
	[[depracted("Refrain from using this function. Instead, use the member function <Vector4>.Normalize")]]
	static void Normalize(Vector4& vec);

	// Returns a normalized version of the vector.
	static Vector4& GetNormalized(const Vector4& vec);

public:
	// Sets the value of the vector.
	Vector4& operator=(const Vector4& vec);

	// #groupdoc
	// Creates a vector with the added value of both operands.
	Vector4& operator+=(const Vector4& vec);
	Vector4& operator+=(const float val);
	// #endgroup

	// #groupdoc
	// Creates a vector with the subtracted value of both operands.
	Vector4& operator-=(const Vector4& vec);
	Vector4& operator-=(const float val);
	// #endgroup

	// #groupdoc
	// Creates a vector with the scaled value of both operands.
	Vector4& operator*=(const Vector4& vec);
	Vector4& operator*=(const float val);
	// #endgroup

	// #groupdoc
	// Creates a vector with the divided value of both operands.
	Vector4& operator/=(const Vector4& vec);
	Vector4& operator/=(const float val);
	// #endgroup

	// #groupdoc
	// Creates a vector with the added value of both operands.
	friend Vector4 operator+(const Vector4& lhs, const Vector4& rhs);
	friend Vector4 operator+(const Vector4& lhs, const float rhs);
	friend Vector4 operator+(const float lhs, const Vector4& rhs);
	// #endgroup

	// #groupdoc
	// Creates a vector with the subtracted value of both operands.
	friend Vector4 operator-(const Vector4& lhs, const Vector4& rhs);
	friend Vector4 operator-(const Vector4& lhs, const float rhs);
	friend Vector4 operator-(const float lhs, const Vector4& rhs);
	// #endgroup

	// #groupdoc
	// Creates a vector with the scaled value of both operands.
	friend Vector4 operator*(const Vector4& lhs, const Vector4& rhs);
	friend Vector4 operator*(const Vector4& lhs, const float rhs);
	friend Vector4 operator*(const float lhs, const Vector4& rhs);
	// #endgroup

	// #groupdoc
	// Creates a vector with the divided value of both operands.
	friend Vector4 operator/(const Vector4& lhs, const Vector4& rhs);
	friend Vector4 operator/(const Vector4& lhs, const float rhs);
	friend Vector4 operator/(const float lhs, const Vector4& rhs);
	// #endgroup

	// #groupdoc
	// Checks for the equality of the vector.
	friend bool operator==(const Vector4& lhs, const Vector4& rhs);
	friend bool operator==(const Vector4& lhs, const float rhs);
	friend bool operator==(const float lhs, const Vector4& rhs);
	// #endgroup

	// #groupdoc
	// Checks for the inequality of the vector.
	friend bool operator!=(const Vector4& lhs, const Vector4& rhs);
	friend bool operator!=(const Vector4& lhs, const float rhs);
	friend bool operator!=(const float lhs, const Vector4& rhs);
	// #endgroup
};

#endif // QUICKRTS_MATH_VECTOR3_H_
