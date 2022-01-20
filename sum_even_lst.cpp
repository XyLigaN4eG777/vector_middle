#include "middle_list.h"

long itc_sum_even_lst(const vector <int>& lst)
{
	int i = 0, len = lst.size();
	long out = 0;
	while (i < len)
	{
		out = out + lst[i];
		i = i + 2;
	}
	return out;
}
