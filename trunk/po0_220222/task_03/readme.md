
# Лабораторная работа №3 #

## Правила перегрузки операций и принципы обработки исключений в C++ ##

## Вариант 7 ##
 

## Цель работы ##
Изучение правил перегрузки операций и принципов обработки исключений в C++. 

### Обработка исключения в Geometry* operator[](const int &index) ###
```c++
	try {
		if (index < 0 || index >= _size)
			throw  "your index is out of range\nReturn empty element";
	Container_unit* ptr = begin;
	for (int i = 0; i < index; i++)
	{
		ptr = ptr->next;
	}
	return ptr->geom;
	}
	catch (const char* error_message)
	{
		std::cout << error_message << std::endl;
		Geometry geom;
		return &geom;
	}
```

### Перегрузка операторов класса Triangle ###

```c++
bool Triangle::operator==(const Triangle &right) const
{
	if (this->GetArea() == right.GetArea() && this->GetPerimeter() == right.GetPerimeter())
		return true;
	else
		return false;
}
```

### Перегрузка операторов класса Rectangle ###

```c++
bool Rectangle::operator==(const Rectangle &right) const
{
	if ((this->length == right.length && this->width == right.width) || (this->width == right.length && this->length == right.width))
		return true;
	else
		return false;
}
```

### Перегрузка операторов класса Circle ###

```c++
bool Circle::operator==(const Circle right) const
{
	if (this->radius == right.radius)
		return true;
	else
		return false;
}
```

### Перегрузка операторов класса Geometry ###

```c++
bool Geometry::operator==(const Geometry &right) const
{
	if (this->area == right.area && this->perimeter == right.perimeter)
		return true;
	else return false;
}
```

