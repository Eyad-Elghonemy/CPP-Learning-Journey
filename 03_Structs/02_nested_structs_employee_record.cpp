#include <iostream>
using namespace std;

struct NameType
{
    string first;
    string middle;
    string last;
};

struct AddressType
{
    string address1;
    string address2;
    string city;
    string state;
    string zip;
};

struct DataType
{
    int month;
    int day;
    int year;
};

struct ContactType
{
    string phone;
    string cellphone;
    string fax;
    string pager;
    string email;
};

struct Employee_Type
{
    NameType name;
    string emp_id;
    AddressType address;
    DataType hire_date;
    DataType quit_date;
    ContactType contact;
    string dept_id;
    double salary;
};

int main(){

    Employee_Type emp1;

    emp1.name.first = "Eyad";
    emp1.name.middle = "Mohamed";
    emp1.name.last = "Elghonemy";
    emp1.address.address1 = "21_Hassan_Sabry-Benha-Qalyuibia-Egypt";
    emp1.address.address2 = "71_Street-Geda-Saudi_Arabia";
    emp1.address.city = "Benha";
    emp1.address.state = "Egypt";
    emp1.address.zip = "Benha-Egypt";
    emp1.contact.cellphone = "01016432120";
    emp1.contact.email = "eyad0758@gmail.com";
    emp1.contact.fax = "None";
    emp1.contact.pager = "None";
    emp1.contact.phone = "0482544967";
    emp1.dept_id = 132300082;
    emp1.emp_id = 3050322;
    emp1.hire_date.day = 20;
    emp1.hire_date.month = 3;
    emp1.hire_date.year = 2023;
    emp1.quit_date.day = 0;
    emp1.quit_date.month = 0;
    emp1.quit_date.year = 0;
    emp1.salary = 50000;




    return 0;
}