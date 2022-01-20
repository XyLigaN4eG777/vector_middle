#include "middle_list.h"

long itc_sum_even_part_lst(const vector <int>& lst)
{
	long out = 0;
	int i = 0, len = lst.size();
	while (i < len)
	{
		if (lst[i] % 2 == 0)
		{
			out = out + lst[i];
		}
		i++;
	}
	return out;
}
