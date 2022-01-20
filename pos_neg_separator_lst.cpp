#include "middle_list.h"

void itc_pos_neg_separator_lst(const vector <int>& lst, vector <int>& otr, vector <int>& nol, vector <int>& pol)
{
	int i = 0, len = lst.size();
	if (len == 0) { return; }
	while (i < len)
	{
		if (lst[i] == 0)
		{
			nol.push_back(lst[i]);
		}
		if (lst[i] > 0)
		{
			pol.push_back(lst[i]);
		}
		if (lst[i] < 0)
		{
			otr.push_back(lst[i]);
		}
		i++;
	}
}
