#include <iostream>
#include <string>
using namespace std;

#define nAccounts 3
#define ntransactions 10
#define nUsers 10
#define nOrganisations 5

struct  Date
{
    int Day;
    int Month;
    int Year;
};

struct Adress
{
    string Country;
    string City;
    string Street;
};

struct Account
{
    string CardNo;
    string HolderName;
    int Cvv_Code;
    Date ExpirationDate;
    string BankName;
    float Balance;
};

struct Transaction
{
    string From;
    string To;
    float Amount;
};

struct Transaction_Donation
{
    string From;
    string  Name_organisation;
    string Type_Of_Donation;
    float TotalDonation;
};

struct User
{
    string ID;
    string UserName;
    string Password;
    string Email;
    Adress Address;
    string Phone;
    Account Accounts[nAccounts];
    int accCount = 0;
    Transaction Transactions[ntransactions];
    int transCount = 0;
    Transaction_Donation Donation_Organisation[nOrganisations];
    int orgCount = 0;
}users[nUsers];
int usercount = 0;


int main() 
{
    users[0].ID = "1234567891012";
    users[0].UserName = "Ahmed Mohamed";
    users[0].Password = "52444424vmv";
    users[0].Email = "ahmed@gmail.com";
    users[0].Address.Country = "Egypt";
    users[0].Address.City = "Cairo";
    users[0].Address.Street = "Shobra";
    users[0].Phone = "01120002000";
    users[0].Accounts[0].Balance = 345444.444;
    users[0].Accounts[0].CardNo = "1234-5678-1000";
    users[0].Accounts[0].BankName = "NBE";
    users[0].Accounts[0].Cvv_Code = 2234;
    users[0].Accounts[0].HolderName = "Ahmed Mohamed";
    users[0].Accounts[0].ExpirationDate.Day = 2;
    users[0].Accounts[0].ExpirationDate.Month = 11;
    users[0].Accounts[0].ExpirationDate.Year = 2028;
    users[0].accCount = 1;
    users[0].Transactions[0].From = "Ahmed Mohamed";
    users[0].Transactions[0].To = "Yasmen Fayez";
    users[0].Transactions[0].Amount = 5000.50;
    users[0].Transactions[1].From = "Ahmed Mohamed";
    users[0].Transactions[1].To = "Abdullah Mohamed";
    users[0].Transactions[1].Amount = 9000.80;
    users[0].transCount = 2;

    // «· »—⁄ «·√Ê· ·√Õ„œ
    users[0].Donation_Organisation[0].From = "Ahmed Mohamed";
    users[0].Donation_Organisation[0].Name_organisation = "Magdi Yacoub Heart Foundation";
    users[0].Donation_Organisation[0].Type_Of_Donation = "Sadaka Jariya (Medical Equipment)";
    users[0].Donation_Organisation[0].TotalDonation = 1500.0;

    // «· »—⁄ «·À«‰Ì ·√Õ„œ
    users[0].Donation_Organisation[0].From = "Ahmed Mohamed";
    users[0].Donation_Organisation[1].Name_organisation = "Egyptian Food Bank";
    users[0].Donation_Organisation[1].Type_Of_Donation = "Feeding Programs (Zakat)";
    users[0].Donation_Organisation[1].TotalDonation = 800.0;

    //  ÕœÌÀ «·⁄œ«œ ·√Õ„œ
    users[0].orgCount = 2;



    users[1].ID = "2468924689123";
    users[1].UserName = "Norhan Atef";
    users[1].Password = "34567ggtt6";
    users[1].Email = "norhan77@gmail.com";
    users[1].Address.Country = "Egypt";
    users[1].Address.City = "Giza";
    users[1].Address.Street = "Alharam";
    users[1].Phone = "01129008800";
    users[1].Accounts[0].Balance = 500000.900;
    users[1].Accounts[0].CardNo = "1357-2468-1110";
    users[1].Accounts[0].BankName = "CIB";
    users[1].Accounts[0].Cvv_Code = 2009;
    users[1].Accounts[0].HolderName = "Norhan Atef";
    users[1].Accounts[0].ExpirationDate.Day = 4;
    users[1].Accounts[0].ExpirationDate.Month = 11;
    users[1].Accounts[0].ExpirationDate.Year = 2030;
    users[1].accCount = 1;
    users[1].Transactions[0].From = "Norhan Atef";
    users[1].Transactions[0].To = "Yosef Ramy";
    users[1].Transactions[0].Amount = 20400.50;
    users[1].Transactions[1].From = "Norhan Atef";
    users[1].Transactions[1].To = "Yomna Yaser";
    users[1].Transactions[1].Amount = 18800.250;
    users[1].transCount = 2;


    // «· »—⁄ «·√Ê· ·‰Ê—Â«‰
    users[1].Donation_Organisation[0].From = "Norhan Atef";
    users[1].Donation_Organisation[0].Name_organisation = "Resala Charity Organization";
    users[1].Donation_Organisation[0].Type_Of_Donation = "Kafala (Orphan Support)";
    users[1].Donation_Organisation[0].TotalDonation = 2000.0;

    // «· »—⁄ «·À«‰Ì ·‰Ê—Â«‰
    users[1].Donation_Organisation[1].From = "Norhan Atef";
    users[1].Donation_Organisation[1].Name_organisation = "Baheya Foundation";
    users[1].Donation_Organisation[1].Type_Of_Donation = "Early Detection Programs";
    users[1].Donation_Organisation[1].TotalDonation = 3000.0;

    //  ÕœÌÀ «·⁄œ«œ ·‰Ê—Â«‰
    users[1].orgCount = 2;


    usercount = 2;

	











	return 0;
}