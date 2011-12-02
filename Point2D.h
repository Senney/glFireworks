#ifndef POINT_2D_H
#define POINT_2D_H

namespace Math {

/* A generic class for handling 2D points in space. */
template <class T>
class Point2D {
public:
	/* Constructors */
	Point2D() : m_x(0), m_y(0) { }
	Point2D(T x, T y) : m_x(x), m_y(y) { }
	
	/* Mathematical Operations */
	Point2D<T> operator+(const Point2D<T> &val)
	{ return Point2D<T>(val.getX() + this->getX(), val.getY() + this->getY()); }
	Point2D<T> operator+(const T val)
	{ return Point2D<T>(this->getX() + val, this->getY() + val); }
	Point2D<T> operator-(const Point2D<T> &val)
	{ return Point2D<T>(val.getX() - this->getX(), val.getY() - this->getY()); }
	Point2D<T> operator-(const T val)
	{ return Point2D<T>(this->getX() - val, this->getY() - val); }
	int operator*(const Point2D<T> &val)
	{ return (this->getX() * val.getY()) - (this->getY() * val.getX()); }
	Point2D<T> operator*(const T val)
	{ return Point2D<T>(this->getX() * val, this->getY() * val); }
	Point2D<T> operator/(const T val)
	{ return Point2D<T>(this->getX() / val, this->getY() / val); }
	
	/* Inequality checking */
		
			
	T getX() { return m_x; }
	T getY() { return m_y; }
private:
	T m_x, m_y;
};

typedef Point2D<float>  Point2Df;
typedef Point2D<int> 	Point2Di;

}

#endif
