<!-- section start -->
<!-- attr: { id:'title', class:'slide-title', hasScriptWrapper:true } -->
# Templates
## Generic types

<div class="signature">
    <p class="signature-course">C++ Fundamentals</p>
    <p class="signature-initiative">Telerik Software Academy</p>
    <a href="http://academy.telerik.com" class="signature-link">http://academy.telerik.com</a>
</div>

<!-- section start -->
<!-- attr: {} -->
# Table of Contents
- Declaring templates
  - Function templates
  - Class templates
  - Variable templates
  - Explicit template specialization
- Variadic templates
- Advantages and disadvantages of templates over macros

<!-- section start -->
<!-- attr: { class:'slide-section' } -->
# Declaring templates
## `template<>`

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, style: 'font-size:40px' } -->
<!-- # Declaring templates -->
- Declared using `template<>` specifier
  - Multiple arguments are allowed
  - Each type can be
    - existing type: `int`, `double`, ...
	- `typename`, `class`
  - Arguments can have default values
    - like functions

```cpp
template <type1 identifier1, type2 identifier2, ...>

template <int identifier>
template <class identifier>
template <typename identifier>

template <typename T = int>
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Declaring templates -->
- Function templates
  - Behave like a family of functions

```cpp
template <typename Type>
Type max(Type a, Type b)
{
	return a > b ? a : b;
}

std::cout << max(3, 7) << '\n';
std::cout << max(3.0, 7.0) << '\n';

std::cout << max(3, 7.0) << '\n'; 
std::cout << max<double>(3, 7.0) << '\n';
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Declaring templates -->
- Class templates
  - Behave like a family of classes

```cpp
template <typename T, int size>
class Array {
	T elements[size];

public:
	T& operator[](int index)
	{
		return this->elements[index];
	}
};

Array<int, 5> myArray;
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Declaring templates -->
- Variable templates (C++14)

```cpp
template<typename T>
constexpr T pi = T(3.141592653589793238462643L);

template<>
constexpr const char* pi<const char*> = "pi";

std::cout << pi<double> << '\n';
std::cout << pi<int> << '\n';
std::cout << pi<const char*> << '\n';
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Declaring templates -->
- Explicit template specialization
  - Implement a special version of a function (or class, or variable) for a given set of templates

```cpp
template<>
bool max<bool>(bool a, bool b)
{
	return a || b;
}
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Declaring templates -->
- Examples

```cpp
template<int n>
long long factorial = factorial<n - 1> * n;
template<> long long factorial<0> = 1;
```
```cpp
template<typename T, int height>
struct Tree {
	Tree<T, height - 1> *left;
	Tree<T, height - 1> *right;
};

template<typename T>
struct Tree<T, 0> { // A leaf
	T value;
};
```

<!-- attr: { class:'slide-section demo', showInPresentation:true } -->
<!-- # Declaring templates -->
## Live Demo

<!-- section start -->
<!-- attr: { class:'slide-section' } -->
# Variadic templates
## Tuples

<!-- attr: { hasScriptWrapper:true,showInPresentation:true } -->
<!-- # Variadic templates -->
- Allows template definitions to take arbitary numbers of arguments (C++11)
  - Makes `std::tuple<>` possible (C++11)

```cpp
template<typename... Values> class tuple;
tuple<int, std::string, std::vector<int>> some_name;
```

- `typename... Values` declares a parameter pack
  - can bind to zero or more arguments
- `Values...` expands the pack

<!-- attr: { hasScriptWrapper:true,showInPresentation:true } -->
<!-- # Variadic templates -->
- Often used recursively

```cpp
template<typename First, typename... Rest>
class tuple {
	First x;
	tuple<Rest...> xs;
};

template<typename First>
class tuple<First> {
	First xs;
};
```

<!-- attr: { class:'slide-section demo', showInPresentation:true } -->
<!-- # Variadic templates -->
## Live Demo

<!-- section start -->
<!-- attr: { class:'slide-section' } -->
# Advantages and disadvantages of templates over macros

<!-- attr: { showInPresentation:true } -->
<!-- # Advantages and disadvantages of templates over macros -->
- Advantages of templates
  - Type safety
  - Not as limited as macros
- Disadvantages of templates
  - May be difficult to debug
  - Some compilers don't support nested templates
    - ot have nesting limit
  - Must be in headers
    - Complete project rebuild is required on change
	- No information hiding

<!-- section start -->
<!-- attr: { class:'slide-questions', showInPresentation:true } -->
<!-- # Templates -->
## Questions
