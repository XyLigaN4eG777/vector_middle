#include "middle_list.h"

long itc_sum_even_part_lst(const vector <int>& lst)
{
	long n = 0;
	int i = 0, len = lst.size();
	while (i < len)
	{
	    if (lst[i] % 2 == 0)
		n = n + lst[i];
	    i = i + 1;
	}
	return n;
}
