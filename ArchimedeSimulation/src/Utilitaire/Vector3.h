///////////////////////////////////////////////////////////////////////////////////////////////////
///	Name : Vector3.h
///	Description : Mathematical template vector class that contains useful mathematical function
///	Created on : 23/09/14
///	Updated on : 24/09/14
///	Modified by: G.Arruda
//////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef UTILITAIRE_VECTOR3_H
#define UTILITAIRE_VECTOR3_H

#include <math.h>

template <typename T>
class Vector3
{
public:
	//Constructor
	Vector3(){};
	Vector3(T x, T y, T z)
	{
		_vector[0] = x;
		_vector[1] = y;
		_vector[2] = z;
	};
	Vector3(Vector3<T>& vector)
	{
		_vector[0] = vector.x();
		_vector[1] = vector.y();
		_vector[2] = vector.z();
	};

	//Destructor
	~Vector3(){};

	//Get with name
	const T& x() const { return _vector[0]; };
	const T& r() const { return _vector[0]; };

	const T& y() const { return _vector[1]; };
	const T& theta() const { return _vector[1]; };

	const T& z() const { return _vector[2]; };
	const T& phi() const { return _vector[2]; };

	//Set with name
	void setX(const T x) { _vector[0] = x; };
	void setR(const T r) { _vector[0] = r; };

	void setY(const T y) { _vector[1] = y; };
	void setTheta(const T theta) { _vector[1] = theta; };

	void setZ(const T z) { _vector[2] = z; };
	void setPhi(const T phi) { _vector[2] = phi; };

	//Operation.
	T norm() const { return sqrt(norm2()); };
	T norm2() const { return ((_vector[0] * _vector[0]) + (_vector[1] * _vector[1]) + (_vector[2] * _vector[2])); };
	void normalize() { T n = norm(); _vector[0] /= n; _vector[1] /= n; _vector[2] /= n; };

	//Operator overload
	//Assignation operator
	Vector3<T>& operator=(const Vector3<T>& vector)  { _vector[0] = vector[0]; _vector[1] = vector[1]; _vector[2] = vector[2]; return *this; };
	Vector3<T>& operator+=(const Vector3<T>& vector) { _vector[0] += vector[0]; _vector[1] += _vector[1]; _vector[2] += _vector[3]; };
	Vector3<T>& operator-=(const Vector3<T>& vector) { _vector[0] -= vector[0]; _vector[1] -= _vector[1]; _vector[2] -= _vector[3]; };

	Vector3<T>& operator*=(const T& n) { _vector[0] *= n; _vector[1] *= n; _vector[2] *= n; return *this; };
	Vector3<T>& operator/=(const T& n) { _vector[0] /= n; _vector[1] /= n; _vector[2] /= n; return *this; };
	Vector3<T>& operator+=(const T& n) { _vector[0] += n; _vector[1] += n; _vector[2] += n; return *this; };
	Vector3<T>& operator-=(const T& n) { _vector[0] -= n; _vector[1] -= n; _vector[2] -= n; return *this; };

	//Access operator
	T& operator[](const int n) { return _vector[n]; };
	const T& operator[](const int n) const { return _vector[n]; };

	//Verification operator
	bool operator==  (Vector3<T>& vector) const { return (_vector[0] == vector.x() && _vector[1] == vector.y() && _vector[2] == vector.z()); };
	bool operator!=  (Vector3<T>& vector) const { return  (*this == vector ? false : true); };

	//Scalar operator
	Vector3<T> operator*(const T& n) const { T x, y, z; x = _vector[0] * n; y = _vector[1] * n; z = _vector[2] * n; return Vector3(x, y, z); };
	Vector3<T> operator/(const T& n) const { T x, y, z; x = _vector[0] / n; y = _vector[1] / n; z = _vector[2] / n; return Vector3(x, y, z); };
	Vector3<T> operator+(const T& n) const { T x, y, z; x = _vector[0] + n; y = _vector[1] + n; z = _vector[2] + n; return Vector3(x, y, z); };
	Vector3<T> operator-(const T& n) const { T x, y, z; x = _vector[0] - n; y = _vector[1] - n; z = _vector[2] - n; return Vector3(x, y, z); };

	//Vector operator
	Vector3<T> operator+(const Vector3<T>& n) const { T x, y, z; x = _vector[0] + n.x(); y = _vector[1] + n.y(); z = _vector[2] + n.z(); return Vector3(x, y, z); };
	Vector3<T> operator-(const Vector3<T>& n) const { T x, y, z; x = _vector[0] - n.x(); y = _vector[1] - n.y(); z = _vector[2] - n.z(); return Vector3(x, y, z); };
private:
	T _vector[3];
};

//Vector operation
template <typename T>
Vector3<T> addVector(const Vector3<T>& a, const Vector3<T>& b)
{
	T x, y, z;
	x = a.x() + b.x();
	y = a.y() + b.y();
	z = a.z() + b.z();

	return Vector3<T>(x, y, z);
}

template <typename T>
Vector3<T> substractVector(const Vector3<T>& a, const Vector3<T>& b)
{
	T x, y, z;
	x = a.x() - b.x();
	y = a.y() - b.y();
	z = a.z() - b.z();

	return Vector3<T>(x, y, z);
}

template <typename T>
T scalarProductVector(const Vector3<T>& a, const Vector3<T>& b)
{
	return ((a.x() * b.x()) + (a.y() * b.y()) + (a.z()*b.z()));
}

template <typename T>
Vector3<T> crossProductVector(const Vector3<T>& a,const Vector3<T>& b)
{
	T x, y, z;
	x = a.y()*b.z() - a.z()*b.y();
	y = a.z()*b.x() - a.x()*b.z();
	z = a.x()*b.y() - a.y()*b.x();
	return Vector3<T> (x,y,z);
}

#endif //UTILITAIRE_VECTOR3_H