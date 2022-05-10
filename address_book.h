#ifndef ADDRESS_BOOK_H_
#define ADDRESS_BOOK_H_

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Address_book
{
    private: 
        string address;
        string phone_number;
        string email_address;
        string birth_date;

    public:
        string name;
        int option;
        Address_book(); //constructor
        ~Address_book(); //deconstructor
    
    //setters
    void setAddress(const string address)
        { this -> address = address;}

    void setPhone(const string phone_number)
        { this -> phone_number = phone_number;}
    
    void setEmail(const string email_address)
        { this -> email_address = email_address;}

    void setBirthday(const string birth_date)
        { this -> birth_date = birth_date;}

    //getters
    string getAddress()
    {return address;}

    string getPhone()
    {return phone_number;}

    string getEmail()
    {return email_address;}

    string getBirthday()
    {return birth_date;}

    int optionsList();
    string getName(string name);
    string getAddress(string address);
    string getPhoneNumber(string phone_number);
    string getEmail(string email_address);
    string getBirthday(string birth_date);
    int createNew(string name, string address, string email_address, string birth_date, string phone_number);
    void deleteContact(string name, string address, string email_address, string birth_date, string phone_number);
    
};
#endif //end of .h file
    





