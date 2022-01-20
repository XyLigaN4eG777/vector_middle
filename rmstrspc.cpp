#include "middle_list.h"

string itc_rmstrspc(string str)
{
	int len;
	len = get_len_str(str);
	int i;
	i = 0;
	string n = "";
	while (i < len)
	{
	    if (str[i] != ' ')
		n = n + str[i];
	    i = i + 1;
	}
	return n;
}
