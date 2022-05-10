#include"address_book.h"
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<cstdio>

using namespace std;
/******************************************
 * NOTICE: deleteContact() function was not completely
 * and does not work properly.
 *******************************************/

Address_book::Address_book() //constructor
{}
Address_book::~Address_book() //deconstructor
{}
/****************************************************
 * OPTIONS: Choose an option to interact with the adddress book.
 **************************************************/
int Address_book::optionsList()
{
    Address_book a;
    string name;
    string address;
    string email;
    string birth_date;
    string phone_number;

    int choice;
    int option;
do
{
    cout << "What would you like to do?: \n"
         << "1. Create a new contact\n"
         << "2. Delete a contact\n"
         << "3. Exit\n";
    cin >> option;

        switch(option)
        {
        case 1:
            createNew(name, address, email_address, birth_date, phone_number);
            break;
        case 2:
            deleteContact(name, address, email_address, birth_date, phone_number);
            break;
        case 3:
            return false;
            break;
    }
}
while 
(option != '3');
return option;
}
/*********************************************
 * GET name, address, phone#, email and birthday
 *********************************************/
string Address_book::getName(string name)
{
    cin.ignore();
    cout << "Name: ";
    getline(cin, name);
    
return name;
}

string Address_book::getAddress(string address)
{
    cout << "Address: ";
    getline(cin, address);

return address;
}

string Address_book::getPhoneNumber(string phone_number)
{
    cout << "Phone #: ";
    cin >> phone_number;
    cin.ignore(256, '\n');

return phone_number;
}

string Address_book::getEmail(string email_address)
{
    cout << "Email: ";
    cin >> email_address;  
    cin.ignore(256, '\n');  

return email_address;
}

string Address_book::getBirthday(string birth_date)
{
    cout << "Birthday: ";
    cin >> birth_date;

return birth_date;
}
/*******************************************
 * CREATE: This will allow the user to create a new
 * contact to be added to the list.
 **********************************************/
int Address_book::createNew(string name, string address, string email_address, string birth_date, string phone_number)
{
    name = getName(name);
    address = getAddress(address);
    phone_number = getPhoneNumber(phone_number);
    email_address = getEmail(email_address);
    birth_date = getBirthday(birth_date);

    vector <string> addresses;
    
    fstream address_file;
    address_file.open("contacts.txt", fstream::app); //This leaves the file in append mode so it can be added to

    addresses.push_back(name); //This adds the variable to the vector
    addresses.push_back(address);
    addresses.push_back(email_address); 
    addresses.push_back(phone_number);
    addresses.push_back(birth_date);
    vector <string> :: iterator itr;
    cout << endl;

    for (itr = addresses.begin(); itr != addresses.end(); itr++)
    {
        address_file << *itr << endl;
        cout << endl; //This will put a space between each contact entered in file
    }
    address_file.close(); //Once the iterator is finished, close the file

return 0;
}

/*****************************************************
 * DELETE any existing contact from list
 *****************************************************/
void Address_book::deleteContact(string name, string address, string email_address, string birth_date, string phone_number)
{
    
    cout << "Who would you like to delete?\n";
    name = getName(name);
    
    vector <Address_book> addresses;

    ofstream address_file;
    address_file.open("contacts.txt", ios::app);

    vector <Address_book>::iterator itr;
    for (itr = addresses.begin(); itr != addresses.end(); itr++)
    {
        (itr -> name = name);
    }
    addresses.erase(itr);
    
    cout << "Contact Deleted!'\n";

    address_file.close();

    return;
}

/**********************************
 * MAIN driver function
 *********************************/
int main()
{
    string name;
    string address;
    string email_address;
    string birth_date;
    string phone_number;
    
    Address_book a;

    a.optionsList();
   
return 0;
}
