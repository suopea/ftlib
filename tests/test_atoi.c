#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include "../libft.h"

void	test(const char *str)
{
	printf("input: \"%s\"\n\n", str);
	printf("standard library atoi():  %i\n", atoi(str));
	printf("         your ft_atoi():  %i\n\n", ft_atoi(str));
}

int main(void)
{
	test("   ---+--+1234ab567");
	test("2147483647 max int");
	test("-2147483648 min int");
	test("214748364869 overflow");
	test("-2147483648420 underflow");
	test("+123\n34 shoud be -123 (has a newline)");
	test("no numbers should maybe return zero?");
	test("something other than + or - or whitespace before 123 should probably be 0");
	test(" \f\n\r\t\v1337 all specified whitespaces in the beginning");
	test("+-+   +-+123 whitespace between signs should be 0");
	test("9223372036854775807");
	test("9223372036854775808");
	test("9223372036854775809");

}