#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int budget=6666;
    cout<<"Welcome to FinanceBank ATM!\n";
    cout<<"Please select an option...\n";
    cout<<"1 - View Budget\n";
    cout<<"2 - Withdraw Money\n";
    cout<<"3 - Deposit Money\n";
    cout<<"4 - Exit\n";
    int option = NULL;
    scanf("%d", &option );
    switch (option){

    case 1:
        cout<<"Your Updated Budget:";
        cout<<budget ;

        cout<<"\n";
        break;
    case 2:
      {


        cout<<"Enter the amount of money you want to withdraw.\n";
        int withdraw_amount = NULL;
        scanf("%d", &withdraw_amount);
        if (withdraw_amount > budget){
            cout<<"You can't withdraw more money than your current budget!";
            cout<<"\n";
        }
        else{
            cout<<"Your Remaining Budget:";
            cout<<budget-withdraw_amount;
            cout<<"\n";


        }
      }
        break;

    case 3 :
      {


        cout<<"Enter the amount of money you want to deposit.\n";
        int deposited_amount = NULL;
        scanf("%d", &deposited_amount);
        cout<<"Your Updated Budget:";
        cout<<budget+deposited_amount;
        cout<<"\n";
      }
        break;

    case 4:
        cout<<"Checking Out from your Account...\n";
        cout<<"Check Out Completed,Have a good day!";
        cout<<"\n";
        break;
    default:
        cout<<"Please select a valid option.";
        cout<<"\n";
        break;


    }
    system("pause");
    return 0;
}
