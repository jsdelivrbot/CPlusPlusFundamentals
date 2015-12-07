#include<iostream>

constexpr uint64_t fib(int n)
{
	// C++ 11
	return n < 2 ? 1 : fib(n - 1) + fib(n - 2);

	// C++ 14
	if(n < 2) return 1;
	return fib(n - 1) + fib(n - 2);
}

const uint64_t fibN = fib(200);

int main()
{
	std::cout << fibN << '\n';
}
