# Лабораторная работа №2 #

## Наследование и виртуальные функции ##

## Вариант 4 ##
 

## Цель работы ##
Получить практические навыки создания иерархии классов и использования статических компонентов класса


### Конструктор бозового класса ###
```
Detail::Detail(const std::string& _name, const bool _is_metal) : name(_name), is_metal(_is_metal)
{
	this->Add();
}
```

#### Ствтические компоненты класса ####

```
	static Detail *begin;
	static Detail *last;
```

#### Реализация метода для просмотра списка ####

```
void Detail::ShowDetails()
{
	Detail* ptr= begin;
	while (ptr != nullptr)
	{
		ptr->Print();
		std::cout << std::endl;
		ptr = ptr->next;
	}
}
```
#### Реализация метода для добавления объекта в список ####

```
void Detail::Add()
{
	if (begin == nullptr)
	{
		begin = this;
	}
	next = nullptr;
	if (last != nullptr)
	{
		last->SetNext(this);
	}
	last = this;
}
```

#### Если функции не будут виртуальными, то программа не скомпилируется ####

