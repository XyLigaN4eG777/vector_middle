#include "middle_list.h"

long itc_sum_even_lst(const vector <int>& lst)
{
	int i;
	i = 0;
	int len;
	len = lst.size();
	long n = 0;
	while (i < len)
	{
	    n = n + lst[i];
	    i = i + 2;
	}
	return n;
}
