#include "middle_list.h"

void itc_odd_even_analysis_lst(const vector <int>& lst)
{
	int count1 = 0, max1 = -1, min1 = 10, summ1 = 0, count2 = 0, max2 = -1, min2 = 10, summ2 = 0;
	int i = 0, len = lst.size();
	while (i < len)
	{
		if (lst[i] % 2 == 0)
		{
			count1++;
			if (count1 == 1) { max1 = lst[i]; min1 = lst[i]; }
			if (lst[i] > max1) { max1 = lst[i]; }
			if (lst[i] < min1) { min1 = lst[i]; }
			summ1 = summ1 + lst[i];
		}
		else
		{
			count2++;
			if (count2 == 1) { max2 = lst[i]; min2 = lst[i]; }
			if (lst[i] > max2) { max2 = lst[i]; }
			if (lst[i] < min2) { min2 = lst[i]; }
			summ2 = summ2 + lst[i];
		}
		i++;
	}
	cout << "������ ������: " <<endl;
	cout << "���������� ������ �����: " << count1 << '\t' << '\t' << "���������� �������� �����: " << count2 <<endl;
	cout << "������������ ������ �����: " << max1 << '\t' << '\t' << "������������ �������� �����: " << max2 << endl;
	cout << "����������� ������ �����: " << min1 << '\t' << '\t' << "����������� �������� �����: " << min2 << endl;
	cout << "����� ������ �����: " << summ1 << '\t' << '\t' << '\t' << "����� �������� �����: " << summ2;
}
