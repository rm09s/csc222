#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
using namespace std;

int count_odd_digits(int n)
{
	int cnt=0;
	if (n==0)
	{
		return 0;
	}
	while (n>0)
	{
		if (n<10)
		{
			n%2!=0 ? cnt++ : cnt = cnt;
		}
		else if ( ((n%10)%2) != 0  ) { cnt++; }
		n= n/10;
	}
	return cnt;
}

TEST_CASE("count_odd_digits(int n) returns number of odd decimal digits in n") {
    CHECK(count_odd_digits(73) == 2);
    CHECK(count_odd_digits(723) == 2);
    CHECK(count_odd_digits(888) == 0);
    CHECK(count_odd_digits(0) == 0);
    CHECK(count_odd_digits(103002) == 2);
    CHECK(count_odd_digits(0xFF) == 2);
    CHECK(count_odd_digits(0123) == 1);
}
