#pragma once
#include<iostream>
#include<string>
using namespace std;

class Doc_Info
{
private:
    string docId;
    int termFrequency;
public:
    Doc_Info():termFrequency(0){}
    Doc_Info(string id, int frequency):docId(id),termFrequency(frequency){}
    void addDocId(string id) //store the docId i.e doc name
    {
        docId = id;
    }
    void addtermFrequency(int f) //store term frequency
    {
        termFrequency = f;
    }
    friend ostream& operator<<(ostream& output, Doc_Info const& D)   //overloading the operator for printing the data when called by list
    {
        output << " -->    | " << D.docId << " --> " << D.termFrequency << "|    ";
        return output;
    }
    ~Doc_Info(){}
};

