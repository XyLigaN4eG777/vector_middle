#include "middle_list.h"

void itc_odd_even_separator_lst(const vector <int>& lst, vector <int>& lst1, vector <int>& lst2)
{
	int i;
	i = 0;
	int len;
	len = lst.size();
	while (i < len)
	{
	    if (lst[i] % 2 == 0)
		lst1.push_back(lst[i]);
	    else
		lst2.push_back(lst[i]);
	    i = i + 1;
	}
	out_vect_int(lst1);
	cout << endl;
	out_vect_int(lst2);
}
