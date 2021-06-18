#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <unordered_map>

using namespace std;

void read(string Filename);
bool Change(string Filename, int id, string name, int newprice);
void Delete(string Filename, int id);

extern string Clients;


class Client
{
public:
    int id;
    char name[12];
    char pass[16];
    bool Is_Admin;

    Client() { }
    Client(string _name, string _pass);


    void print_table_Client();

};


void CreateClient(string Filename, Client newClient);
void readClient(string Filename);
bool ChangeClient(string Filename, int id, string name);
bool Login1(string username, string  password);
bool SignUp(string Filename, Client newClient);


string hasher(string pass);

extern Client currentClient;



