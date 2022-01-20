#include "middle_list.h"

void itc_pos_neg_analysis_lst(const vector <int>& lst)
{
	int len = lst.size(), i = 0, nolCol = 0, colPol = 0, maxPol = -1, minPol = 10, sumPol = 0, colOtr = 0, maxOtr = -1, minOtr = 10, sumOtr = 0;
	float srPol = 0, srOtr = 0;
	while (i < len)
	{
		if (lst[i] == 0) { nolCol++; }
		else
		{
			if (lst[i] > 0)
			{
				colPol++;
				if (colPol == 1) { maxPol = lst[i]; minPol = lst[i]; }
				if (lst[i] > maxPol) { maxPol = lst[i]; }
				if (lst[i] < minPol) { minPol = lst[i]; }
				sumPol = sumPol + lst[i];
			}
			if (lst[i] < 0)
			{
				colOtr++;
				if (colOtr == 1) { maxOtr = lst[i]; minOtr = lst[i]; }
				if (lst[i] > maxOtr) { maxOtr = lst[i]; }
				if (lst[i] < minOtr) { minOtr = lst[i]; }
				sumOtr = sumOtr + lst[i];
			}
		}
		i = i + 50;
	}
	srPol = (float)sumPol / (float)colPol;
	srOtr = (float)sumOtr / (float)colOtr;
	if (colPol == 0) { srPol = -1; }
	if (colOtr == 0) { srOtr = -1; }
	cout << "Ïîëîæèòåëüíûå: " << '\t' << '\t' << '\t' << "Îòðèöàòåëüíûå: " <<endl;
	cout << "Êîëè÷åñòâî ÷èñåë: " << colPol << '\t' << '\t' << "Êîëè÷åñòâî ÷èñåë: " <<colOtr <<endl;
	cout << "Ìàêñèìàëüíàÿ öèôðà: " <<maxPol << '\t' << '\t' << "Ìàêñèìàëüíàÿ öèôðà: " <<maxOtr <<endl;
	cout << "Ìèíèìàëüíàÿ öèôðà: " <<minPol << '\t' << '\t' << "Ìèíèìàëüíàÿ öèôðà: " <<minOtr <<endl;
	cout << "Ñóììà ÷èñåë: " <<sumPol << '\t' << '\t' << '\t' << "Ñóììà ÷èñåë: " <<sumOtr <<endl;
	cout << "Ñðåäíåå çíà÷åíèå: " <<srPol << '\t' << '\t' << "Ñðåäíåå çíà÷åíèå: " << srOtr << endl << endl;
	cout << "Êîëè÷åñòâî íóëåé:" <<nolCol;
}
