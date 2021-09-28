#pragma once
#include"Linked_List.h"
#include"Doc_Info.h"
#include<fstream>
class Term_Info
{
private:
	string keyTerm;
	Linked_List docList;
public:
	void AddDoc(string doc[], int n)
	{
		bool flag;
		int doc_itr=0, temp_itr_tf;
		
		while (doc_itr < n)
		{
			temp_itr_tf = 0;
			flag = 0;
			ifstream infile;
			infile.open(doc[doc_itr]);
			if(!infile)
				cout << doc[doc_itr] << ": Unable to open the file!!\n";
			else
			{
				while (!infile.eof())
				{
					string tmp;
					infile >> tmp;
					if (tmp == keyTerm)
					{
						flag = 1;
						temp_itr_tf++;
					}

				}
			}
			if (flag)
			{
				Doc_Info* obj = new Doc_Info(doc[doc_itr], temp_itr_tf);
				docList.addToRear(*obj);
			}
		}
	}
};

