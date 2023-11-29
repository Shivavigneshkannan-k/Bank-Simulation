#include <iostream>
#include <vector>
using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::vector;

class Accounts{
public:
    static vector<Bank> Account;
    void checkValidity(int x){
            bool valid=false;
            for(int i=0;i<Account.size();i++){
                if (Account[i].accountNumber==x){
                    valid=true;
                cout<<"Account is Existed"<<endl;
                    
                    break;
                  
                }
            }
          if (valid==false){
            cout<<"Account is not Existed"<<endl;
          }
        }
};
class Bank:public Accounts{
private:
    int balance;
    signed long long int addharNumber;
    string userName;
public:
int  accountNumber;

    Bank(int AccountNumber,string UserName,int Balance,signed long long int id){
            accountNumber=AccountNumber;
            userName=UserName;
            balance=Balance;
            addharNumber=id;}
    virtual void dataGetter(){
            cout<<"Account number:  "<<accountNumber<<endl;
            cout<<"customer name:  "<<userName<<endl;
            cout<<"Addhar number:  "<<addharNumber<<endl;
            cout<<"Balance:  "<<balance<<endl;
            }
};





vector<Bank> Accounts::Account={};


int main()
{   int accountNumber;
    Accounts obj;
    Bank c1=Bank(1,"Shiva vignesh kannan",20000,413014933023);
    Bank c2=Bank(2,"mohit raj",10000,243014933023);
    Bank c3=Bank(3,"karthik",90300,233014933023);
    Bank c4=Bank(4,"manoj manikam",60900,54214933023);

    Accounts::Account.push_back(c1);
    Accounts::Account.push_back(c2);
    Accounts::Account.push_back(c3);
    Accounts::Account.push_back(c4);
    cout<<"Enter your account number:   ";
    cin>>accountNumber;
    obj.checkValidity(accountNumber);




    return 0;
}