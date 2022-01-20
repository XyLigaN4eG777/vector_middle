#include "middle_list.h"

int get_len_str(string str)
{
	int i;
	i = 0;
	while (str[i] != '\0'){i++;}
	return i;
}


vector <char> itc_strtlist(string str)
{
	int len;
	len = get_len_str(str);
	int i;
	i = 0;
	vector <char> n;
	while (i < len) { out.push_back(str[i]); i++; }
	return n;
}


void out_vect_int(const vector <int>& vec)
{
	int i;
	i = 0;
	int len;
	len = vec.size();
	while (i < len)
	{
		cout << vec[i] <<" ";
		i = i + 1;
	}
}

void out_vect_char(vector <char>& vec)
{
	int i
	i = 0;
	int len;
	len = vec.size();
	while (i < len)
	{
		cout << vec[i] <<" ";
		i = i + 1;
	}
}
