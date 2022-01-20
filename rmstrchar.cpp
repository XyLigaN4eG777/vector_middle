#include "middle_list.h"

string itc_rmstrchar(string str, string less)
{
	int len1;
	len1 = get_len_str(str);
	int len2;
	len2 = get_len_str(less);
	int i;
	i= 0;
	int s;
	s = 0;
	string n = "";
	bool isDel = 0;
	while (i < len1)
	{
	    while (s < len2)
		{
		if (str[i] == less[s])
			isDel = 1;
		s = s + 1;
		}
	    s = 0;
	    if (isDel == 0)
		n = n + str[i];
	    isDel = 0;
	    i = i + 1;
	}
	return n;
}
