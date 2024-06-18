# Лабораторная работа №3 #

## Правила перегрузки операций и принципы обработки исключений в C++ ##

## Вариант 12 ##
 

## Цель работы ##
Изучение правил перегрузки операций и принципов обработки исключений в C++. 

### Обработка исключения в ProgrammError *operator[](const int index) ###
```c++
	try {
		if (index < 0 || index >= size)
			throw  "your index is out of range\nReturn empty element";
		Item* ptr = begin;
		for (int i = 0; i < index; i++)
		{
			ptr = ptr->next;
		}
		return ptr->number;
	}
	catch (const char* error_message)
	{
		std::cout << error_message << std::endl;
		Number number;
		return &number;
	}
```

### Перегрузка операторов класса Number ###

```c++
bool Number::operator == (const Number other) const
{
	if (this->designating == other.designating)
		return true;
	return false;
}
```

### Перегрузка операторов класса Integer ###

```c++
bool Integer::operator == (const Integer other) const
{
	if (this->value == other.value)
		return true;
	return false;
}
```

### Перегрузка операторов класса Real ###

```c++
bool Real::operator == (const Real other) const
{
	if (this->value == other.value)
		return true;
	return false;
}
```

### Перегрузка операторов класса Complex ###

```c++
bool Complex::operator == (const Complex other) const
{
	if (this->realPart == other.realPart && this->imaginaryPart == other.imaginaryPart)
		return true;
	return false;
}
```

