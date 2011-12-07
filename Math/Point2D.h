#ifndef POINT_2D_H
#define POINT_2D_H

#include <cmath>

namespace Math {

/* A generic class for handling 2D points in space. */
template <class T>
class Point2D {
private:
	// Storage
	T m_x, m_y;
	
public:
	/* Constructors */
	Point2D() : m_x(0), m_y(0) { }
	Point2D(T x, T y) : m_x(x), m_y(y) { }
	
	/* Mathematical Operations */
	Point2D<T> operator+(const Point2D<T> &val){
		return Point2D<T>(val.X() + m_x, val.Y() + m_y);
	}
	Point2D<T> operator+(const T val){
		return Point2D<T>(m_x + val, m_y + val);
	}
	Point2D<T> operator-(const Point2D<T> &val){
		return Point2D<T>(m_x - val.X(), m_y - val.Y());
	}
	Point2D<T> operator-(const T val){ 
		return Point2D<T>(m_x - val, m_y - val);
	}
	Point2D<T> operator*(const T val){
		return Point2D<T>(m_x * val, m_y * val);
	}	
	Point2D<T> operator/(const T val){
		return Point2D<T>(m_x / val, m_y / val);
	}
	
	/* Mathematical Equality Operations */
	Point2D<T> operator+=(const T val){
		m_x += val;
		m_y += val;
		return *this;
	}
	Point2D<T> operator+=(const Point2D<T> &val){
		m_x += val.X();
		m_y += val.Y();
		return *this;
	}
	Point2D<T> operator-=(const T val){
		m_x -= val;
		m_y -= val;
		return *this;
	}
	Point2D<T> operator-=(const Point2D<T> &val){
		m_x -= val.X();
		m_y -= val.Y();
		return *this;
	}
	Point2D<T> operator*=(const T val){
		m_x *= val;
		m_y *= val;
		return *this;
	}
	Point2D<T> operator/=(const T val){
		m_x /= val;
		m_y /= val;
		return *this;
	}
	
	/* Inequality checking */
	bool operator==(const Point2D<T> &val){
		return (m_x == val.X() && m_y == val.Y());
	}
	
	/* Properties */
	float length() {
		return sqrt(((float)m_x * (float)m_x) + ((float)m_y * (float)m_y));
	}
	
	Point2D<T> normalize() {
		return *this / length();
	}
	
	float dot(Point2D<T>& val) {
		return (m_x * val.getX() + m_y * val.getY());
	}
	
	/* Setters */	
	void setX(T x) { m_x = x; }
	void setY(T y) { m_y = y; }	
	
	/* Getters */	
	T X() const { return m_x; }
	T Y() const { return m_y; }
};

typedef Point2D<float>  Point2Df;
typedef Point2D<int> 	Point2Di;

}

#endif
