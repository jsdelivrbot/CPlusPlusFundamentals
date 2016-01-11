<!-- section start -->
<!-- attr: { id:'title', class:'slide-title', hasScriptWrapper:true } -->
# Exceptions
## Try, throw, catch

<div class="signature">
    <p class="signature-course">C++ Fundamentals</p>
    <p class="signature-initiative">Telerik Software Academy</p>
    <a href="http://academy.telerik.com" class="signature-link">http://academy.telerik.com</a>
</div>

<!-- section start -->
<!-- attr: {} -->
# Table of Contents
- Try-block
- Exceptions in STL

<!-- section start -->
<!-- attr: { class:'slide-section' } -->
# Try-block
## Exception handlers

<!-- attr: { showInPresentation:true,style:'font-size:40px' } -->
<!-- # Try-block -->
- Associates one or more exception handlers with a compound statement
  - `try { }` - compound statement
  - `catch() { }` - exception handler
    - `catch(type identifier) { }` - named parameter
    - `catch(type) { }` - unnamed parameter
    - `catch(...) { }` - catch any exception
  - `throw value;` - "throws" value

<!-- attr: { showInPresentation:true,style:'font-size:40px' } -->
<!-- # Try-block -->
- Example

```cpp
try
{
	int N;
	std::cin >> N;
	if(N < 0) throw N;
	std::cout << "N = " << N << '\n';
}
catch(int N)
{
	std::cout << "N is negative\n";
}
```

<!-- attr: { class:'slide-section demo', showInPresentation:true } -->
<!-- # Try-block -->
## Live Demo

<!-- section start -->
<!-- attr: { class:'slide-section' } -->
# Exception class
## `std::exception`

<!-- attr: { showInPresentation:true,hasScriptWrapper:true } -->
<!-- # Exception class -->
- In header `<exception>`
- Consistent interface to handle exceptions
  - All generated exceptions in STL inherit from `std::exception`
<br>[http://en.cppreference.com/w/cpp/error/exception]()
  - `virtual const char* what() const` - returns explanatory string

<!-- attr: { showInPresentation:true,hasScriptWrapper:true } -->
<!-- # Exception class -->
- Example

```cpp
std::string str = "text"; // Size is 4
try
{
	str.substr(15) // throws std::length_error
}
catch(const std::exception& e)
{
	std::cout << e.what() << '\n';
}
```

<!-- attr: { class:'slide-section demo', showInPresentation:true } -->
<!-- # Exception class -->
## Live Demo

<!-- section start -->
<!-- attr: { class:'slide-questions', showInPresentation:true } -->
<!-- # Templates -->
## Questions
