#include <iostream>
#include <string>
#include <fstream>
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

struct Address
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
    double Balance;
};

struct Transaction
{
    string From;
    string To;
    double Amount;
};

struct Transaction_Donation
{
    string From;
    string  Name_organisation;
    string Type_Of_Donation;
    double TotalDonation;
};

struct User
{
    string ID;
    string UserName;
    string Password;
    string Email;
    Address Address;
    string Phone;
    Account Accounts[nAccounts];
    int accCount = 0;
    Transaction Transactions[ntransactions];
    int transCount = 0;
    Transaction_Donation Donation_Organisation[nOrganisations];
    int orgCount = 0;
}users[nUsers];
int usercount = 0;



void TransactionHistory(int userindex);
void CheckBalance(int userindex);
void Donation(int userindex);
void TransferMoney(int userindex);
void SignUp();
bool addNewAccount(int userindex);
void UserDashboard(int userindex);
void login();
void saveData();
void loadData();




int main()
{
    loadData();
    users[0].ID = 12345678901234;
    users[0].UserName = "Ahmed Mohamed";
    users[0].Password = "52444424vmv";
    users[0].Email = "ahmed@gmail.com";
    users[0].Address.Country = "Egypt";
    users[0].Address.City = "Cairo";
    users[0].Address.Street = "Shobra";
    users[0].Phone = "01120002000";
    users[0].Accounts[0].Balance = 345444.444;
    users[0].Accounts[0].CardNo = "1234-5678-1000-3210";
    users[0].Accounts[0].BankName = "NBE";
    users[0].Accounts[0].Cvv_Code = 223;
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


    users[0].Donation_Organisation[0].From = "Ahmed Mohamed";
    users[0].Donation_Organisation[0].Name_organisation = "Magdi Yacoub Heart Foundation";
    users[0].Donation_Organisation[0].Type_Of_Donation = "Sadaka Jariya (Medical Equipment)";
    users[0].Donation_Organisation[0].TotalDonation = 1500.0;


    users[0].Donation_Organisation[0].From = "Ahmed Mohamed";
    users[0].Donation_Organisation[1].Name_organisation = "Egyptian Food Bank";
    users[0].Donation_Organisation[1].Type_Of_Donation = "Feeding Programs (Zakat)";
    users[0].Donation_Organisation[1].TotalDonation = 800.0;


    users[0].orgCount = 2;

    usercount++;

    users[1].ID = 89876543211234;
    users[1].UserName = "Norhan Atef";
    users[1].Password = "34567ggtt6";
    users[1].Email = "norhan77@gmail.com";
    users[1].Address.Country = "Egypt";
    users[1].Address.City = "Giza";
    users[1].Address.Street = "Alharam";
    users[1].Phone = "01129008800";
    users[1].Accounts[0].Balance = 500000.900;
    users[1].Accounts[0].CardNo = "1357-2468-1110-9876";
    users[1].Accounts[0].BankName = "CIB";
    users[1].Accounts[0].Cvv_Code = 200;
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



    users[1].Donation_Organisation[0].From = "Norhan Atef";
    users[1].Donation_Organisation[0].Name_organisation = "Resala Charity Organization";
    users[1].Donation_Organisation[0].Type_Of_Donation = "Kafala (Orphan Support)";
    users[1].Donation_Organisation[0].TotalDonation = 2000.0;


    users[1].Donation_Organisation[1].From = "Norhan Atef";
    users[1].Donation_Organisation[1].Name_organisation = "Baheya Foundation";
    users[1].Donation_Organisation[1].Type_Of_Donation = "Early Detection Programs";
    users[1].Donation_Organisation[1].TotalDonation = 3000.0;


    users[1].orgCount = 2;

    usercount++;

    int choice;
    while (true) {
        cout << " instaPay system " << endl;
        cout << " ****************** " << endl;
        cout << " 1: Sign Up " << endl;
        cout << " 2: login " << endl;
        cout << " Exit " << endl;
        cout << " ****************** " << endl;
        cout << " Enter your choice: " << endl;
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            SignUp();
            break;
        case 2:
            login();
            break;
        case 3:
            saveData();
            cout << " thanks for your time " << endl;
            return 0;
        default:
            cout << " Error. please Enter 1 or 2 or 3 " << endl;

        }

    }













    return 0;
}



void UserDashboard(int userindex) {
    int choice;
    bool backToMinu = false;
    while (!backToMinu) {
        cout << " ****************** " << endl;
        cout << " USER DASHBOARD " << endl;
        cout << " ****************** " << endl;
        cout << " WELCOME " << users[userindex].UserName << "." << endl;
        cout << " 1: Transfer Money " << endl;
        cout << " 2: Donation " << endl;
        cout << " 3: Check Balance " << endl;
        cout << " 4: Check Transaction History " << endl;
        cout << " 5: Add New Bank Account " << endl;
        cout << " 6: Logout   " << endl;
        cout << " ****************** " << endl;
        cout << " Enter your Choice " << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            TransferMoney(userindex);
            break;
        case 2:
            Donation(userindex);
            break;
        case 3:
            CheckBalance(userindex);
            break;
        case 4:
            TransactionHistory(userindex);
            break;
        case 5:
            if (addNewAccount(userindex)) {
                cout << " Account added to your Profile " << endl;
            }
            else {
                cout << " faild to add account " << endl;

            }
            break;
        case 6:
            cout << " logging out " << endl;
            backToMinu = true;
            break;
        default:
            cout << " invalide choice " << endl;


        }


    }

}

void SignUp() {
    cout << " ***** You are now on the Sign Up page ******" << endl;
    cout << " Enter your national ID " << endl;
    cin >> users[usercount].ID;
    cin.ignore();
    while (true) {

        cout << " Enter Username:" << endl;
        string tempUsername;
        getline(cin, tempUsername);

        bool found = false;
        for (int i = 0; i < usercount; i++) {
            if (users[i].UserName == tempUsername) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << " this username is already used try another one." << endl;
        }
        else if (tempUsername.length() < 4) {
            cout << " Username is too short Must be at least 4 characters. " << endl;
        }
        else {
            users[usercount].UserName = tempUsername;
            break;
        }
    }

    cout << "******************" << endl;
    while (true) {

        cout << "Enter Password:" << endl;
        string tempPass;
        getline(cin, tempPass);

        if (tempPass.length() < 8) {
            cout << " password too weak ( must be at least 8 digits )  " << endl;
        }
        else {
            users[usercount].Password = tempPass;
            break;
        }
    }


    cout << " Enter your Email " << endl;
    getline(cin, users[usercount].Email);


    cout << " ****************** " << endl;




    cout << " -----Address information----- " << endl;
    cout << " your country : " << endl;
    cin >> users[usercount].Address.Country;
    cout << " your city :" << endl;
    cin >> users[usercount].Address.City;
    cin.ignore();
    cout << " your street name :" << endl;
    getline(cin, users[usercount].Address.Street);


    cout << "******************" << endl;

    while (true) {
        cout << "Enter Phone number:" << endl;
        string tempPhone;
        cin >> tempPhone;

        bool phoneExists = false;
        for (int i = 0; i < usercount; i++) {
            if (users[i].Phone == tempPhone) {
                phoneExists = true;
                cin.ignore();
                break;
            }
        }
        if (tempPhone.length() != 11) {
            cout << " Error : the Phone number must be exactly 11 digits! " << endl;
        }
        else if (phoneExists) {
            cout << " Erorr: this phone is already registered! " << endl;
        }
        else {
            users[usercount].Phone = tempPhone;
            break;
        }
    }

    cout << "Now add your first bank account data" << endl;
    bool success = false;
    while (!success) {
        if (addNewAccount(usercount)) {

            usercount++;

            cout << " Registration completed successfully" << endl;
            success = true;
            UserDashboard(usercount - 1);
        }
        else {
            cout << " Sorry , the registration failed . try again " << endl;


        }

    }
}

void login() {
    string tempUser, tempPass;
    bool loggedin = false;
    int currentUserindex = -1;
    cout << " ******************** " << endl;
    cout << " LOGIN TO INSTAPAY " << endl;
    cout << " ****************** " << endl;
    cout << " Enter your Username " << endl;
    getline(cin, tempUser);
    cout << " Enter Password " << endl;
    getline(cin, tempPass);
    for (int i = 0; i < usercount; i++) {
        if (users[i].UserName == tempUser && users[i].Password == tempPass) {
            loggedin = true;
            currentUserindex = i;
            break;

        }
    }
    if (loggedin) {
        cout << " login Successful , Welcome back ," << users[currentUserindex].UserName << endl;
        UserDashboard(currentUserindex);
    }
    else {
        cout << " invalid Username or Password " << endl;
        cout << " Please try again " << endl;

    }
}


bool addNewAccount(int userindex) {
    if (users[userindex].accCount >= 3) {
        cout << " Error: you can not link more than 3 bank accounts to this profile " << endl;
        return false;
    }


    int current = users[userindex].accCount;
    string tempCard, tempCVV;
    cout << " ---[link your Bank Account]--- " << endl;
    while (true) {
        cout << " Enter 16-digit card number: " << endl;
        getline(cin, tempCard);

        if (tempCard.length() == 16) {
            users[userindex].Accounts[current].CardNo = tempCard;
            break;

        }
        else {

            cout << " invalid! Cardnumber must be exactly 16 digits ." << endl;
        }

    }


    cout << " enter Card holder name : " << endl;
    getline(cin, users[userindex].Accounts[current].HolderName);

    while (true) {
        cout << " Enter3-digit CVVCode: " << endl;
        getline(cin, tempCVV);
        if (tempCVV.length() == 3) {
            users[userindex].Accounts[current].Cvv_Code = stoi(tempCVV);
            break;

        }
        cout << " invalid! CVV must be exactly 3 digits ." << endl;

    }

    cout << " Enter expiration date (MM/YY) : " << endl; 
   getline( cin, users[userindex].Accounts[current].ExpirationDate );
     
    cout << " Enter expiration date (MM/YY) : " << endl;
    cin >> users[userindex].Accounts[current].ExpirationDate.Day;
    cin >> users[userindex].Accounts[current].ExpirationDate.Month;
    cin >> users[userindex].Accounts[current].ExpirationDate.Year;

    cout << " Enter BankName : " << endl;
   getline( cin, users[userindex].Accounts[current].BankName );
    users[userindex].Accounts[current].Balance = double(rand() % 5000 + 1000);
    cout << " Account linked successfully " << endl;
    cout << " your current Balance : " << users[userindex].Accounts[current].Balance << " EGP " << endl;
    users[userindex].accCount++;
    return true;
}
void CheckBalance(int userindex)
{
    if (users[userindex].accCount == 0) {
        cout << "No accounts found!" << endl;
        return;
    }

    cout << "Your Accounts:\n";
    for (int i = 0; i < users[userindex].accCount; i++) {
        cout << i + 1 << ". "
            << users[userindex].Accounts[i].BankName << endl;
    }

    int choice;
    cout << "Choose account: ";
    cin >> choice;

    if (choice < 1 || choice > users[userindex].accCount) {
        cout << "Invalid choice!" << endl;
        return;
    }

    cout << "Current Balance: "
        << users[userindex].Accounts[choice - 1].Balance
        << " EGP" << endl;
}
void TransactionHistory(int userindex)
{
    if (users[userindex].transCount == 0) {
        cout << "No transactions found!" << endl;
        return;
    }

    cout << "====== Your Transactions ======\n";

    for (int i = 0; i < users[userindex].transCount; i++) {

        cout << "Transaction " << i + 1 << ":\n";

        cout << "From: "
            << users[userindex].Transactions[i].From << endl;

        cout << "To: "
            << users[userindex].Transactions[i].To << endl;

        cout << "Amount: "
            << users[userindex].Transactions[i].Amount
            << " EGP" << endl;

        cout << "--------------------------\n";
    }
}
void saveData() {
    ofstream file("users_data.txt");

    file << usercount << endl;

    for (int i = 0; i < usercount; i++) {
        file << users[i].ID << endl;
        file << users[i].UserName << endl;
        file << users[i].Password << endl;
        file << users[i].Email << endl;
        file << users[i].Phone << endl;
        file << users[i].accCount << endl;

        for (int j = 0; j < users[i].accCount; j++) {
            file << users[i].Accounts[j].CardNo << endl;
            file << users[i].Accounts[j].BankName << endl;
            file << users[i].Accounts[j].Balance << endl;
        }
    }

    file.close();
}
void loadData() {
    ifstream file("users_data.txt");

    if (!file) return;

    file >> usercount;
    file.ignore();

    for (int i = 0; i < usercount; i++) {
        getline(file, users[i].ID);
        getline(file, users[i].UserName);
        getline(file, users[i].Password);
        getline(file, users[i].Email);
        getline(file, users[i].Phone);

        file >> users[i].accCount;
        file.ignore();

        for (int j = 0; j < users[i].accCount; j++) {
            getline(file, users[i].Accounts[j].CardNo);
            getline(file, users[i].Accounts[j].BankName);
            file >> users[i].Accounts[j].Balance;
            file.ignore();
        }

        file.close();
    }
}