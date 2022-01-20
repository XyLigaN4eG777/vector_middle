#include "middle_list.h"

string itc_join(vector <char> lst, string sep)
{
	string out = "";
	int i = 0, len = lst.size();
	while (i < len)
	{
		if (len - i != 1)
		{
			out = out + lst[i] + sep;
		}
		else
		{
			out = out + lst[i];
		}
		i++;
	}
	return out;
}
