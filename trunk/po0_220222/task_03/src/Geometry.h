#pragma once

#ifndef GEOMETRYH
#define GEOMETRYH

class Geometry
{
public:
	Geometry() = default;
	Geometry(const float _area, const float _perimeter);
	Geometry(const Geometry& old) = delete;
	virtual ~Geometry() = default;
	void SetArea(const float _area);
	float GetArea() const;
	void SetPerimeter(const float _perimeter);
	float GetPerimeter() const;


	virtual void CountArea();
	virtual void CountPerimeter();
	virtual void Print() const;
	bool operator==(const Geometry &right) const;

private:
	float area = 0.00;
	float perimeter = 0.00;
};

#endif
