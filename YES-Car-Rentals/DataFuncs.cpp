#include "CarsData.h"
#include "ClientData.h"
#include<QString>
string Cars = "Cars.yes";
string Clients = "Clients.yes";
Client currentClient;
Car SelectedCar;
string currentCarName;


string hasher(string pass1){
    //salts the password by adding different strings to it depending on it's size
    if(sizeof (pass1) > 10)
        pass1 += "Amr_El-Deeb";

    else if(sizeof (pass1) <= 10 && sizeof (pass1) >8)
        pass1 += "SheHaB_eL-dEen";

    else if(sizeof (pass1) <= 8 && sizeof (pass1) >5)
        pass1 += "Ge0rGe_Es-SaM";

    else
        pass1 +="AmR_AbD-eLAzIz";
    //hashes the password and returns salted, hashed password
    hash<string> hash1;
    size_t hash = hash1(pass1);
   pass1 = to_string(hash);
   return pass1;
}

Car::Car(string _name,string _discript,string _brand, int _price)
{

    qstrcpy(name, _name.c_str());
    qstrcpy(Discript, _discript.c_str());
    qstrcpy(brand, _brand.c_str());
    price = _price;
}

void Car::print_table_Cars()
{
    cout << "ID : " << id << "\tName: " << name << "\tPrice: " << price  <<  endl;
}


Client::Client(string _name, string _pass)
{
    //_pass = hasher(_pass);
    qstrcpy(name, _name.c_str());
    qstrcpy(pass, _pass.c_str());
    this->Is_Admin = false;
}

void Client::print_table_Client()
{
    cout << "ID : " << id << "\tName: " << name << "\tPassword: " << pass <<  "\tAdmin Privleges " << Is_Admin << endl;
}


void read(string Filename)
{
    ifstream f(Filename, ios::binary);
    Car tmp;
    Client tmp2;

    while(f.read((char *) &tmp, sizeof(tmp)))
        tmp.print_table_Cars();
    f.close();

}

void Create(string Filename, Car newCar)
{
    fstream f(Filename, ios::in | ios::out | ios::binary);
    ofstream file(Filename, ios::binary | ios::app);
    Car tmp;
    int idcounter = 1, iden = 0;
    bool Can_Add = true;
    string input;
    while(f.read((char *)&tmp, sizeof (tmp)))
    {

          if(tmp.id == newCar.id)
         {
            Can_Add = false;
            cout << "error an existing car has this id " << endl;
            break;
         }
          string temp = tmp.name;
          string temp2 = newCar.name;

          if(temp == temp2 && iden == 0)
          {
              cout << "There is already a Car with this name, Are you sure you want to add duplicates ? (yes/no)";
              cin >> input;
              if(input == "yes")
              {
                  Can_Add = true;
                  iden = 1;

              }

              else if(input == "no")
              {
                  Can_Add = false;
                  iden = 1;

              }

          }

    idcounter ++;
    }


    if(Can_Add)
    {
        newCar.id = idcounter;
        file.write((char* )&newCar, sizeof(newCar));
    }
    f.close();
    file.close();

}


bool Change(string Filename, int id, string name, int newprice)
{
    bool Is_found = false;
    fstream f(Filename, ios::in | ios::out | ios::binary);
    Car tmp;

    while(f.read((char *)&tmp, sizeof (tmp)))
    {
          if(tmp.id == id)
         {
          Is_found = true;

          qstrcpy(tmp.name, name.c_str());

          tmp.price = newprice;

          f.seekp((int)f.tellg() - sizeof(tmp), ios::beg);

          f.write((char * ) &tmp, sizeof(tmp));

          break;
         }
    }
       return Is_found;

}


void Delete(string Filename, int id)
{
    ifstream f(Filename, ios::binary);
    ofstream temp("temp.yes", ios::binary);
    Car tmp;
    while(f.read((char *)&tmp, sizeof (tmp)))
    {
          if(tmp.id != id)
          temp.write((char* ) &tmp, sizeof(tmp));
    }
    f.close();
    temp.close();

    const char* converted = Filename.c_str();

    remove(converted);
    rename("temp.yes", converted);
}




//------------------------------------------------------

void CreateClient(string Filename, Client newClient)
{
    fstream f(Filename, ios::in | ios::out | ios::binary);
    ofstream file(Filename, ios::binary | ios::app);
    Client tmp;
    int idcounter = 1, iden = 0;
    bool Can_Add = true;
    string input;
    while(f.read((char *)&tmp, sizeof (tmp)))
    {

          if(tmp.id == newClient.id)
         {
            Can_Add = false;
            cout << "error an existing car has this id " << endl;
            break;
         }
          string temp = tmp.name;
          string temp2 = newClient.name;

          if(temp == temp2 && iden == 0)
          {
              cout << "There is already a Client with this name, Are you sure you want to add duplicates ? (yes/no)";
              cin >> input;
              if(input == "yes")
              {
                  Can_Add = true;
                  iden = 1;

              }

              else if(input == "no")
              {
                  Can_Add = false;
                  iden = 1;

              }

          }

    idcounter ++;
    }


    if(Can_Add)
    {
        newClient.id = idcounter;

        file.write((char* )&newClient, sizeof(newClient));
    }
    f.close();
    file.close();

}


bool SignUp(string Filename, Client newClient)
{
    fstream f(Filename, ios::in | ios::out | ios::binary);
    ofstream file(Filename, ios::binary | ios::app);
    Client tmp;
    int idcounter = 1;
    bool Can_Add = true;
    while(f.read((char *)&tmp, sizeof (tmp)))
    {

//          if(tmp.id == newClient.id)
//         {
//            Can_Add = false;
//            break;
//         }

          if(tmp.name == newClient.name)
          {
                Can_Add = false;

          }

    idcounter = tmp.id;
    }


    if(Can_Add)
    {
        newClient.id = idcounter+1;

        file.write((char* )&newClient, sizeof(newClient));
    }
    f.close();
    file.close();

    return Can_Add;

}
bool IsSPace(QString usr,QString pass){
    for(int i=0,j=0;(i<usr.length()),j<pass.length();i++,j++){
        if(usr[i]==" "){
            return true;
        }
        else if(pass[j]==" "){
            return true;
        }
    }
    return false;
}


void readClient(string Filename)
{
    ifstream f(Filename, ios::binary);

    Client tmp;

    while(f.read((char *) &tmp, sizeof(tmp)))
        tmp.print_table_Client();
    f.close();

}

bool Login1(string username, string  password)
{
    ifstream f(Clients, ios::binary);
    Client client;
    bool IsPresent = false;
    while(f.read((char *) &client, sizeof(client)))
    {
        if(client.name == username && client.pass == password)
        {
            IsPresent = true;
            currentClient = client;
        }
    }
    f.close();
    return IsPresent;

}




bool ChangeClient(string Filename, int id, string name)
{
    bool Is_found = false;
    fstream f(Filename, ios::in | ios::out | ios::binary);
    Client tmp;

    while(f.read((char *)&tmp, sizeof (tmp)))
    {
          if(tmp.id == id)
         {
          Is_found = true;

          qstrcpy(tmp.name, name.c_str());



          f.seekp((int)f.tellg() - sizeof(tmp), ios::beg);

          f.write((char * ) &tmp, sizeof(tmp));

          break;
         }
    }
       return Is_found;
}
Car FindCar(int ID)
{
    ifstream f(Cars, ios::binary);
    Car tmp;
    Car result;
    while(f.read((char *) &tmp, sizeof(tmp)))
    {
        if(tmp.id == ID)
        {
            result = tmp;
        }
    }
    f.close();
    return result;
}

Car FindCar(string CarName)
{
    ifstream f(Cars, ios::binary);
    Car tmp;
    Car result;
    while(f.read((char *) &tmp, sizeof(tmp)))
    {
        if(tmp.name == CarName)
        {
            result = tmp;
        }
    }
    f.close();
    return result;
}
string GetClientName(int ID)
{
    ifstream f(Clients, ios::binary);
    string name;
    Client tmp;

    while(f.read((char *) &tmp, sizeof(tmp)))
    {
        if(tmp.id == ID)
            name = tmp.name;
    }
    f.close();
    return name;
}
