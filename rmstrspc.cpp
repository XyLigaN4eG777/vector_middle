#include "middle_list.h"

string itc_rmstrspc(string str)
{
	int len = get_len_str(str), i = 0;
	string out = "";
	while (i < len)
	{
		if (str[i] != ' ')
		{
			out = out + str[i];
		}
		i++;
	}
	return out;
}
