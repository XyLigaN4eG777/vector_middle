#include "middle_list.h"

long itc_sumlst(const vector <int>& lst)
{
	long summ = 0;
	int i = 0, len = lst.size();
	while (i < len)
	{
		summ = summ + lst[i];
		i++;
	}
	return summ;
}
