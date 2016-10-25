#ifndef theRectangle2Dclass_h
#define theRectangle2Dclass_h

class Rectangle2D {
private:
	double *x, *y = 0;
	double *hieght;
	double *width;
	double *area;
	double *perimeter;
	bool cont = false;
public:
	Rectangle2D() {
		*x, *y = 0;
		hieght = 1;
		width = 1;
	}
	Rectangle2D(double X, double Y, double h, double w) {
		*x = X;
		*y = Y;
		*hieght = h;
		*width = w;
	}
	double getX() {
		return *x;
	}
	double getY() {
		return *y;
	}
	double getHeight() {
		return *hieght;
	}
	double getWidth() {
		return *width;
	}
	void setX(double hold) {
		*x = hold;
	}
	void setY(double hold) {
		*y = hold;
	}
	void setHieght(double hold) {
		*hieght = hold;
	}
	void setWidth(double hold) {
		*width = hold;
	}
	double getArea() const {
		*area = (*hieght * *width);
		return *area;
	}
	double getPerimeter() const {
		*perimeter = (*hieght * 2) + (*width * 2);
		return *perimeter;
	}
	bool contains(double X, double Y) const {
		
	}
};

#endif /* theRectangle2Dclass_h */
