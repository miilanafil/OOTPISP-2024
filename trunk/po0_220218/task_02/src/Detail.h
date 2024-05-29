#pragma once
#include <string>
#ifndef DETAILH
#define DETAILH

class Detail
{
public:
	Detail() = default;
	Detail(const std::string_view _name, const bool _is_metal);
	virtual ~Detail() = default;
	void Add();
	void SetNext(Detail* nextDetail);
	virtual void Print() const;
	static void ShowDetails();

	bool GetMaterial() const;
	void SetMaterial(const bool _is_metal);
	std::string GetName() const;
	void SetName(const std::string_view _name);
private:

	std::string name = "";
	bool is_metal = false;
	Detail* next = nullptr;
protected:
	static Detail* begin;
	static Detail* last;
};

#endif
