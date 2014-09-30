//////////////////////////////////////////////////////////////////////////////////////////////////////
///	Nom : Vecteur3.h
///	Description: Vecteur 3 contenant des fonctions mathematiques utiles.
///	Créé le	   : 23/09/14
///	Modifié le : 30/09/14
///	Modifié par: G.Arruda
//////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef UTILITAIRE_VECTEUR3_H
#define UTILITAIRE_VECTEUR3_H

#include <math.h>

template <typename T>
class Vecteur3
{
public:
	//Constructeur
	Vecteur3(){};
	Vecteur3(T x, T y, T z)
	{
		_vecteur[0] = x;
		_vecteur[1] = y;
		_vecteur[2] = z;
	};
	Vecteur3(Vecteur3<T>& vector)
	{
		_vecteur[0] = vector.x();
		_vecteur[1] = vector.y();
		_vecteur[2] = vector.z();
	};

	//Destructeur
	~Vecteur3(){};

	//Get avec nom
	const T& x() const { return _vecteur[0]; };
	const T& r() const { return _vecteur[0]; };

	const T& y() const { return _vecteur[1]; };
	const T& theta() const { return _vecteur[1]; };

	const T& z() const { return _vecteur[2]; };
	const T& phi() const { return _vecteur[2]; };

	//Set avec nom
	void setX(const T x) { _vecteur[0] = x; };
	void setR(const T r) { _vecteur[0] = r; };

	void setY(const T y) { _vecteur[1] = y; };
	void setTheta(const T theta) { _vecteur[1] = theta; };

	void setZ(const T z) { _vecteur[2] = z; };
	void setPhi(const T phi) { _vecteur[2] = phi; };

	//Operations
	T norm() const { return sqrt(norm2()); };
	T norm2() const { return ((_vecteur[0] * _vecteur[0]) + (_vecteur[1] * _vecteur[1]) + (_vecteur[2] * _vecteur[2])); };
	void normalize() { T n = norm(); _vecteur[0] /= n; _vecteur[1] /= n; _vecteur[2] /= n; };

	//Surcharge d'operateur
	//Operateurs assignation
	Vecteur3<T>& operator=(const Vecteur3<T>& vector)  { _vecteur[0] = vector[0]; _vecteur[1] = vector[1]; _vecteur[2] = vector[2]; return *this; };
	Vecteur3<T>& operator+=(const Vecteur3<T>& vector) { _vecteur[0] += vector[0]; _vecteur[1] += _vecteur[1]; _vecteur[2] += _vecteur[3]; };
	Vecteur3<T>& operator-=(const Vecteur3<T>& vector) { _vecteur[0] -= vector[0]; _vecteur[1] -= _vecteur[1]; _vecteur[2] -= _vecteur[3]; };

	Vecteur3<T>& operator*=(const T& n) { _vecteur[0] *= n; _vecteur[1] *= n; _vecteur[2] *= n; return *this; };
	Vecteur3<T>& operator/=(const T& n) { _vecteur[0] /= n; _vecteur[1] /= n; _vecteur[2] /= n; return *this; };
	Vecteur3<T>& operator+=(const T& n) { _vecteur[0] += n; _vecteur[1] += n; _vecteur[2] += n; return *this; };
	Vecteur3<T>& operator-=(const T& n) { _vecteur[0] -= n; _vecteur[1] -= n; _vecteur[2] -= n; return *this; };

	//Operateurs d'acces
	T& operator[](const int n) { return _vecteur[n]; };
	const T& operator[](const int n) const { return _vecteur[n]; };

	//Operateurs de verification
	bool operator==  (Vecteur3<T>& vector) const { return (_vecteur[0] == vector.x() && _vecteur[1] == vector.y() && _vecteur[2] == vector.z()); };
	bool operator!=  (Vecteur3<T>& vector) const { return  !(*this == vector); };
	bool operator< (Vecteur3<T>& vector) const { return (norm2() < vector.norm2()); };
	bool operator> (Vecteur3<T>& vector) const { return (norm2() > vector.norm2()); };
	bool operator<= (Vecteur3<T>& vector) const { return (norm2() <= vector.norm2()); };
	bool operator>= (Vecteur3<T>& vector) const { return (norm2() >= vector.norm2()); };

	//Operateurs scalaires
	Vecteur3<T> operator*(const T& n) const { T x, y, z; x = _vecteur[0] * n; y = _vecteur[1] * n; z = _vecteur[2] * n; return Vecteur3(x, y, z); };
	Vecteur3<T> operator/(const T& n) const { T x, y, z; x = _vecteur[0] / n; y = _vecteur[1] / n; z = _vecteur[2] / n; return Vecteur3(x, y, z); };
	Vecteur3<T> operator+(const T& n) const { T x, y, z; x = _vecteur[0] + n; y = _vecteur[1] + n; z = _vecteur[2] + n; return Vecteur3(x, y, z); };
	Vecteur3<T> operator-(const T& n) const { T x, y, z; x = _vecteur[0] - n; y = _vecteur[1] - n; z = _vecteur[2] - n; return Vecteur3(x, y, z); };

	//Operateurs vectoriels
	Vecteur3<T> operator+(const Vecteur3<T>& n) const { T x, y, z; x = _vecteur[0] + n.x(); y = _vecteur[1] + n.y(); z = _vecteur[2] + n.z(); return Vecteur3(x, y, z); };
	Vecteur3<T> operator-(const Vecteur3<T>& n) const { T x, y, z; x = _vecteur[0] - n.x(); y = _vecteur[1] - n.y(); z = _vecteur[2] - n.z(); return Vecteur3(x, y, z); };
	Vecteur3<T> operator-() const { T x, y, z; x = -_vecteur[0]; y = -_vecteur[1]; z = -_vecteur[2]; return Vecteur3(x, y, z); };

private:
	T _vecteur[3];
};


template <typename T>
T produitScalaire(const Vecteur3<T>& a, const Vecteur3<T>& b)
{
	return ((a.x() * b.x()) + (a.y() * b.y()) + (a.z()*b.z()));
}

template <typename T>
Vecteur3<T> produitVectoriel(const Vecteur3<T>& a,const Vecteur3<T>& b)
{
	T x, y, z;
	x = a.y()*b.z() - a.z()*b.y();
	y = a.z()*b.x() - a.x()*b.z();
	z = a.x()*b.y() - a.y()*b.x();
	return Vecteur3<T> (x,y,z);
}

#endif //UTILITAIRE_VECTEUR3_H