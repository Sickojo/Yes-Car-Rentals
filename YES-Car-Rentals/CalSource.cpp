#include "CalData.h"




Cal::Cal (int _Month, int _DayStart, int _NumOfDays, int _CarId, int _ClientId)
{
    Month = _Month;
    DayStart = _DayStart;
    NumOfDays = _NumOfDays;
    ClientId = _ClientId;
    CarId = _CarId;


}

void Cal::print_table()
    {
        cout << "From Day : " << DayStart << ", Number of days " << NumOfDays << ", Month : " << Month << ", Car :" << CarId << ", Client : " << ClientId << endl;
    }

bool Cal::CompareCals(Cal cal)
{
    if(Month == cal.Month && DayStart == cal.DayStart && NumOfDays == cal.NumOfDays && ClientId == cal.ClientId && CarId == cal.CarId)
        return true;
    else
        return false;
}


void read()
{
    ifstream f("tsti.bin", ios::binary);
    Cal tmp;

    while(f.read((char *) &tmp, sizeof(tmp)))
        tmp.print_table();
    f.close();

}

//returns true if there are duplicates
bool CheckDuplicates(Cal Temp)
{
    bool Res = false;
    ifstream f("tsti.bin", ios::binary);
    Cal tmp;

    while(f.read((char *) &tmp, sizeof(tmp)))
        if(tmp.CompareCals(Temp))
            Res = true;
    f.close();
    return Res;
}

void CreateCal(Cal tmp)
{
    ofstream f("tsti.bin", ios::binary | ios::app);
    if(!CheckDuplicates(tmp))
    {
        f.write((char* )&tmp, sizeof(tmp));
        f.close();
    }
    else
        cout << "there is a duplicate of this entry " << endl;

}

bool Change(int Month, int DayStart, int NumOfDays, int Carid, int Clientid)
{
    bool Is_found = false;
    fstream f("tsti.cin", ios::in | ios::out | ios::binary);
    Cal tmp;

    while(f.read((char *)&tmp, sizeof (tmp)))
    {
          if(tmp.CarId == Carid && tmp.ClientId == Clientid)
         {
          Is_found == true;

          tmp.DayStart = DayStart;
          tmp.NumOfDays = NumOfDays;
          tmp.Month = Month;



          f.seekp((int)f.tellg() - sizeof(tmp), ios::beg);

          f.write((char * ) &tmp, sizeof(tmp));

          break;
         }
    }
       return Is_found;

}

bool CheckAvailability(int Month, int DayStart, int NumOfDays, int Carid)
{
    bool IsAvailable = true;
    vector<pair<int , int>> Days = GetDays(DayStart, NumOfDays, Month);
    fstream f("tsti.bin", ios::in | ios::out | ios::binary);
    Cal tmp;

    while(f.read((char *)&tmp, sizeof (tmp)))
    {
        if(tmp.CarId == Carid)
        {
            vector<pair<int , int>> Days2 = GetDays(tmp.DayStart, tmp.NumOfDays, tmp.Month);
            for (const auto& p : Days)
            {
                for(const auto& p2 : Days2)
                {
                    if(p.first == p2.first && p.second == p2.second)
                        IsAvailable = false;
                }

            }
        }
    }
    return IsAvailable;

}

vector<pair<int, int>> GetDays(int DayStart, int NumOfDays, int Month)
{
    vector<pair<int , int>> temp;
    int Days_28 = 2;
    int Days_30[4] = { 4, 6, 9, 11 };
    int Days_31[7] = { 1, 3, 5, 7, 8, 10, 12 };
    int DaysOfMonth;
    if(Month == Days_28)
        DaysOfMonth = 28;
    if(find(begin(Days_30), end(Days_30), Month) != end(Days_30))
        DaysOfMonth = 30;
    if(find(begin(Days_31), end(Days_31), Month) != end(Days_31))
        DaysOfMonth = 31;

    if(DayStart + NumOfDays <= DaysOfMonth)
    {
        for(int i = DayStart; i < NumOfDays + DayStart; i++)
        {
            temp.push_back(make_pair(Month, i));
        }
    }

    else if(DayStart + NumOfDays > DaysOfMonth)
    {
        int SumDaysMonth = DayStart + NumOfDays;
        int DaysInOtherMonth = SumDaysMonth - DaysOfMonth;
        int DaysInCurrentMonth = NumOfDays - DaysInOtherMonth;
        int Month2;
        if(Month != 12)
            Month2 = Month + 1;
        else
            Month2 = 1;


        for(int i = DayStart; i < DaysOfMonth; i++)
        {
            temp.push_back(make_pair(Month, i));
        }

        for(int i = 1; i <= DaysInOtherMonth; i++)
        {
            temp.push_back(make_pair(Month2, i));
        }

    }
    return temp;
}

void Delete(int Carid, int Clientid, int DayStart, int Month)
{
    bool Is_Found = false;
    ifstream f("tsti.bin", ios::binary);
    ofstream temp("temp.bin", ios::binary);
    Cal tmp;
    while(f.read((char *)&tmp, sizeof (tmp)))
    {
          if(tmp.CarId != Carid && tmp.ClientId != Clientid && tmp.Month != Month && tmp.DayStart != DayStart)
          temp.write((char* ) &tmp, sizeof(tmp));

    }
    f.close();
    temp.close();

    remove("tsti.bin");
    rename("temp.bin", "tsti.bin");
}
