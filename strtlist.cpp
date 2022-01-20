#include "middle_list.h"

vector <char> itc_strtlist(string str)
{
	int len = get_len_str(str), i = 0;
	vector <char> out;
	while (i < len) { out.push_back(str[i]); i++; }
	return out;
}

int get_len_str(string str)
{
	int i = 0;
	while (str[i] != '\0'){i++;}
	return i;
}

void out_vect_char(vector <char>& vec)
{
	int i = 0, len = vec.size();
	while (i < len)
	{
		cout << vec[i] <<" ";
		i++;
	}
}

void out_vect_int(const vector <int>& vec)
{
	int i = 0, len = vec.size();
	while (i < len)
	{
		cout << vec[i] <<" ";
		i++;
	}
}
