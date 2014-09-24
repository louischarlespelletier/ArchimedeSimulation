///////////////////////////////////////////////////////////////////////////////////////////////////
///	Name : Vector3.h
///	Description : Mathematical template vector class that contains useful mathematical function
///	Created on : 23/09/14
///	Updated on :
///	Modified by: G.Arruda
//////////////////////////////////////////////////////////////////////////////////////////////////////

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

	//Get
	T x() { return _vector[0]; };
	T y() { return _vector[1]; };
	T z() { return _vector[2]; };

	//Set
	void setX(T x) { _vector[0] = x; };
	void setY(T y) { _vector[1] = y; };
	void setZ(T z) { _vector[2] = z; };

	//Operation
	T norm() { return sqrt(norm2()); };
	T norm2(){ return ((_vector[0] * _vector[0]) + (_vector[1] * _vector[1]) + (_vector[2] * _vector[2])); };
	void normalize() { T n = norm(); _vector[0] /= n; _vector[1] /= n; _vector[2] /= n; };
	void multiply(T n) { _vector[0] *= n; _vector[1] *= n; _vector[2] *= n; }
	void divide(T n) { _vector[0] /= n; _vector[1] /= n; _vector[2] /= n; }

	//Operator overload
	Vector3<T> operator=(Vector3<T>& vector) { _vector[0] = vector.x(); _vector[1] = vector.y(); _vector[2] = vector.z(); return *this; };
	bool operator==(Vector3<T>& vector) { return (_vector[0] == vector.x() && _vector[1] == vector.y() && _vector[2] == vector.z()); };
	bool operator!=(Vector3<T>& vector) { return  (*this == vector ? false : true); };
private:
	T _vector[3];
};

//Vector operation
template <typename T>
Vector3<T> addVector(Vector3<T>& a, Vector3<T>& b)
{
	T x, y, z;
	x = a.x() + b.x();
	y = a.y() + b.y();
	z = a.z() + b.z();

	Vector3<T> result(x, y, z);
	return result;
}

template <typename T>
Vector3<T> substractVector(Vector3<T>& a, Vector3<T>& b)
{
	T x, y, z;
	x = a.x() - b.x();
	y = a.y() - b.y();
	z = a.z() - b.z();

	Vector3<T> result(x, y, z);
	return result;
}

template <typename T>
T scalarProductVector(Vector3<T>& a, Vector3<T>& b)
{
	return ((a.x() * b.x()) + (a.y() * b.y()) + (a.z()*b.z()));
}

template <typename T>
Vector3<T> crossProductVector(Vector3<T>& a, Vector3<T>& b)
{
	T x, y, z;
	x = a.y()*b.z() - a.z()*b.y();
	y = a.z()*b.x() - a.x()*b.z();
	z = a.x()*b.y() - a.y()*b.x();
	Vector3<T> result(x, y, z);
	return result;
}
