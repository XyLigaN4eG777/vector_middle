#include "middle_list.h"

string itc_join(vector <char> lst, string sep)
{
	string n = "";
	int i;
	i = 0;
	int len;
	len = lst.size();
	while (i < len){
            if (len - i != 1)
		n = n + lst[i] + sep;
	    else
		n = n + lst[i];
	i = i + 1;
	}
	return n;
}
