#ifndef CALDATA_H
#define CALDATA_H

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

class Cal
{
public:
    int Month, DayStart, NumOfDays, ClientId, CarId;



    Cal() { };
    Cal (int _Month, int _DayStart, int _NumOfDays, int _CarId, int _ClientId);


    void print_table();
    bool CompareCals(Cal cal);


};


void read();
bool CheckDuplicates(Cal Temp);
void CreateCal(Cal tmp);
bool Change(int Month, int DayStart, int NumOfDays, int Carid, int Clientid);
bool CheckAvailability(int Month, int DayStart, int NumOfDays, int Carid);
vector<pair<int, int>> GetDays(int DayStart, int NumOfDays, int Month);
void Delete(int Carid, int Clientid, int DayStart, int Month);

#endif // CALDATA_H
