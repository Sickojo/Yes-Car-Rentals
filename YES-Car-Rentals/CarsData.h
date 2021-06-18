#ifndef CARSDATA_H
#define CARSDATA_H

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

void read(string Filename);
bool Change(string Filename, int id, string name, int newprice);
void Delete(string Filename, int id);

extern string Cars;


class Car
{
public:
    int id, price;
    char name[30];
    char brand[30];
    char ImPath[180];
    char Discript[700];
    //bool Is_Available;

    Car() { }
    Car(string _name, string _discript,string _brand, int _price);


    void print_table_Cars();
};


void Create(string Filename, Car newCar);



#endif // CARSDATA_H
