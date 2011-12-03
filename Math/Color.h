#ifndef COLOR_H
#define COLOR_H

namespace Math {

class Color {
public:
	Color() : color[0](0.0f), color[1](0.0f). color[2](0.0f) { }
	Color(float r, float g, float b) : color[0](r), color[1](g), color[2](g) { }
	
	float r() { return color[0]; }
	float g() { return color[1]; }
	float b() { return color[2]; }
	
	void setR(float r) { color[0] = r; }
	void setG(float g) { color[1] = g; }
	void setB(float b) { color[2] = b; }
	
private:
	float color[3];
};

}

#endif
