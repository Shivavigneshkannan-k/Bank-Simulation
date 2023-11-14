#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;
#include <ctime>



class Bank{
    private:
        int balance;
        signed long long int addharNumber;
        string userName;
    public:
        // static vector<Bank> Account;
    //constructor
    int  accountNumber;
        Bank(int AccountNumber,string UserName,int Balance,signed long long int id){
            accountNumber=AccountNumber;
            userName=UserName;
            balance=Balance;
            addharNumber=id;
        }
        void deposit(int x){
            balance+=x;
            cout<<x<<"has deposited from your Account"<<endl;
        }
        void withdraw(int x){
            balance-=x;
            cout<<x<<"is withdrawn from your Account"<<endl;
        }
        void Balance(){
            cout<<"Balance: "<<balance<<endl;
        }
      void menu(){
          int userChoice;
          cout<<"1)Deposit"<<endl;
          cout<<"2)Withdraw"<<endl;
          cout<<"3)Check balance"<<endl;
          cout<<"4)Create a new account"<<endl<<endl;
          cout<<"Enter your Choice(1-4):   ";
          cin>>userChoice;
          switch(userChoice){
            case 1:
              int amountDeposit;
              cout<<"You amount:  ";
              cin>>amountDeposit;
              deposit(amountDeposit);
              break;
            case 2:
              int amountWithdraw;
              cout<<"You amount:  ";
              cin>>amountWithdraw;
              withdraw(amountWithdraw);
              break;
            case 3:
              Balance();
              break;
            case 4:
              cout<<"feature is not added yet"<<endl;
              cout<<"sorry for your wasting your time"<<endl;
              break;
          }
      
      }

      //to view all the accounts
      // void viewAllAccount(){
      //   for (size_t i=0;i<Account.size();i++){
      //     cout<<Account[i].accountNumber<<" ";
      //     cout<<Account[i].userName<<" ";
      //     cout<<Account[i].balance<<" ";
      //     cout<<Account[i].addharNumber<<" ";
      //     cout<<endl;
      //   }

// }

        //function to create a new account -- not completed yet!
        void createNewAccount(){

            cout<<"Enter your Full name:    ";

            cout<<"Enter your Addhar Number:    ";

            cout<<"Congrats! Your account have been created"<<endl;
        }

        // ~Bank(){};

};

vector<Bank> Account;
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





// vector<Bank> Bank::Account={};

int main(){
    int accountNum;
    //existing accounts
    Bank c1=Bank(1,"Shiva vignesh kannan",20000,413014933023);
    Bank c2=Bank(2,"mohit raj",10000,243014933023);
    Bank c3=Bank(3,"karthik",90300,233014933023);
    Bank c4=Bank(4,"manoj manikam",60900,54214933023);
    //adding the accounts to server
    Account.push_back(c1);
    Account.push_back(c2);
    Account.push_back(c3);
    Account.push_back(c4);

    cout<<"Enter your Account number:   ";
    cin>>accountNum;
    checkValidity(accountNum);










    return 0;
}
