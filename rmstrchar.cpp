#include "middle_list.h"

string itc_rmstrchar(string str, string less)
{
	int len1 = get_len_str(str), len2 = get_len_str(less), i = 0, s = 0;
	string out = "";
	bool isDel = 0;
	while (i < len1)
	{
		while (s < len2)
		{
			if (str[i] == less[s])
			{
				isDel = 1;
			}
			s++;
		}
		s = 0;
		if (isDel == 0)
		{
			out = out + str[i];
		}
		isDel = 0;
		i++;
	}
	return out;
}
