
int ** matrix;
matrix = new int*[10];
for (int i = 0; i < 10; ++i)
{
	matrix[i] = new int[5];
}

for (int i = 0; i < 10; ++i)
{
	delete [] matrix[i];
}
delete [] matrix;

void f (const int& a) const
{
	this->foo = "bar";
	++a;
}

void f (int& a)
{
	++a;
}



void foo(Bar& b)
{
	// copy constructor
	// destructor
	// assignment operator
}
Bar b;
foo(b);
...

int a = 12;
f(a);
REQUIRE(13 == a);


// 3n + 2 operations
for (int i = 0; i < n; ++i)
{
	if (i  % 2 == 0)
	{
		std::cout << i;
	}
}







void rec (int i)
{
	if (i < 0)
	{
		return;
	}
	rec(i - 1);
	std::cout << i;
}

rec(12);


Bar * b;
CHECK(12 == b->Foo());

class Bar
{
	public:
		int Foo ();
};
/////////////
#include "bar.hpp"
int Bar::Foo () { return 12; }






