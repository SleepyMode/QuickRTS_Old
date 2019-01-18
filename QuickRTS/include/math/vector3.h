
#ifndef QUICKRTS_MATH_VECTOR3_H_
#define QUICKRTS_MATH_VECTOR3_H_

// #class Vector3
// Provides with a simple three-dimensional Euler Vector.
class Vector3
{
public:
	// The X component of the vector.
	float x;

	// The Y component of the vector.
	float y;

	// The Z component of the vector.
	float z;

public:
	// Default constructor.
	Vector3();

	// Constructs a Vector3 from it's three components.
	Vector3(float x, float y, float z);

	// Constructs a Vector3 from a float value.
	Vector3(float val);

	// Constructs a Vector3 from another Vector2.
	Vector3(const Vector3& vector);

public:
	// Returns the dot product of the vector with another.
	float Dot(const Vector3& vector) const;

	// Returns the cross product of the vector with another.
	Vector3& Cross(const Vector3& vector) const;

	// Returns the length(magnitude) of the vector.
	float Length() const;

	// Returns the squared length(magnitude) of the vector.
	float LengthSqr() const;

	// Normalizes the vector.
	void Normalize();

	// Returns a normalized version of the vector.
	Vector3& GetNormalized() const;

public:
	// Returns the dot product of two vectors.
	static float Dot(const Vector3& lhs, const Vector3& rhs);

	// Returns the cross product of two vectors.
	static Vector3& Cross(const Vector3& lhs, const Vector3& rhs);

	// Returns the length(magnitude) of the vector.
	static float Length(const Vector3& vec);

	// Returns the squared length(magnitude) of the vector.
	static float LengthSqr(const Vector3& vec);

	// Normalizes the vector.
	[[depracted("Refrain from using this function. Instead, use the member function <Vector3>.Normalize")]]
	static void Normalize(Vector3& vec);

	// Returns a normalized version of the vector.
	static Vector3& GetNormalized(const Vector3& vec);

public:
	// Sets the value of the vector.
	Vector3& operator=(const Vector3& vec);

	// #groupdoc
	// Adds another vector to the vector.
	Vector3& operator+=(const Vector3& vec);
	Vector3& operator+=(const float& val);
	// #endgroup

	// #groupdoc
	// Creates a vector with the added value of both operands.
	friend Vector3 operator+(const Vector3& lhs, const Vector3& rhs);
	friend Vector3 operator+(const Vector3& lhs, const float& rhs);
	friend Vector3 operator+(const float& lhs, const Vector3& rhs);
	// #endgroup

	// #groupdoc
	// Checks for the equality of the vector.
	friend bool operator==(const Vector3& lhs, const Vector3& rhs);
	friend bool operator==(const Vector3& lhs, const float& rhs);
	friend bool operator==(const float& lhs, const Vector3& rhs);
	// #endgroup

	// #groupdoc
	// Checks for the inequality of the vector.
	friend bool operator!=(const Vector3& lhs, const Vector3& rhs);
	friend bool operator!=(const Vector3& lhs, const float& rhs);
	friend bool operator!=(const float& lhs, const Vector3& rhs);
	// #endgroup

	// #groupdoc
	// Vector inequality - Greater than.
	friend bool operator>(const Vector3& lhs, const Vector3& rhs);
	friend bool operator>(const Vector3& lhs, const float& rhs);
	friend bool operator>(const float& lhs, const Vector3& rhs);
	// #endgroup

	// #groupdoc
	// Vector inequality - Less than.
	friend bool operator<(const Vector3& lhs, const Vector3& rhs);
	friend bool operator<(const Vector3& lhs, const float& rhs);
	friend bool operator<(const float& lhs, const Vector3& rhs);
	// #endgroup

	// #groupdoc
	// Vector inequality - Greater than or equal.
	friend bool operator>=(const Vector3& lhs, const Vector3& rhs);
	friend bool operator>=(const Vector3& lhs, const float& rhs);
	friend bool operator>=(const float& lhs, const Vector3& rhs);
	// #endgroup

	// #groupdoc
	// Vector inequality - Less than or equal.
	friend bool operator<=(const Vector3& lhs, const Vector3& rhs);
	friend bool operator<=(const Vector3& lhs, const float& rhs);
	friend bool operator<=(const float& lhs, const Vector3& rhs);
	// #endgroup
};

#endif // QUICKRTS_MATH_VECTOR3_H_