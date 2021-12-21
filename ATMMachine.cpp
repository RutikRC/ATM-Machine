#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    
    float balance1;
    int i,pin,npin,option;
    double balance = 10000, withdraw,deposit;
    cout<<"\t\t\t      AUTO TELLER MACHINE          "<<endl;
    cout<<"\t\t\t ***************************** "<<endl;
    cout<<"\t\t\t   *************************   "<<endl;
    cout<<"\t\t\t     ******* *** *******       "<<endl;
    cout<<"\t\t\t       ***** *** *****         "<<endl;
    cout<<"\t\t\t          ** *** **            "<<endl;
    cout<<"\t\t\t           * *** *             "<<endl;
    cout<<"\t\t\t              *                "<<endl;
    cout<<"\t\t\t  ===========================\n";
    cout<<"\t\t\t     Welcome To ATM Service       "<<endl;
    cout<<"\t\t\t  ============================\n";
    
    cout<<"\n\t\t\t    =*=WELCOME USER=*=        \n";
    for(i=0;i<3;i++)
    {
        cout<<"\t\t\t    Enter Your Pin: ";
        cin>>pin;
        balance1=balance;
        if(pin==1809)
        {
            
            repeat:
            for(i=1;i<=3;i++)
            {
                cout<<"\n\n";
                cout<<"\t\t\t*******************************"<<endl;
                cout<<"\t\t\t          --Main Menu--           "<<endl;
                cout<<"\t\t\t*******************************"<<endl;
                cout<<"\t\t\t     *1-View My Balance*       "<<endl;
                cout<<"\t\t\t     *2-Withdraw Cash  *       "<<endl;
                cout<<"\t\t\t     *3-Deposit Funds  *       "<<endl;
                cout<<"\t\t\t     *4-Change Pin     *       "<<endl;
                cout<<"\t\t\t    *5-   Exit        *       "<<endl;
                cout<<"\t\t\t*******************************"<<endl;
                cout<<"\t\t\t*******************************"<<endl;
                cout<<"\n";
                cout<<"\t\t\t     Enter Option:      ";
                cin>>option;
                switch(option)
                {
                    case 1:
                           cout<<"\n\t\t\t[[[% BALANCE INQUIRY %]]]\n\n";
                           cout<<"\t\t\t ***********************     "<<endl;
                           cout<<"\t\t\t  Your Balance Is: Rs       "<<balance1<<endl;
                           cout<<"\t\t\t ***********************    "<<endl;
                           getch();
                           
                           goto repeat;
                           break;
                    case 2:
                    repe:
                           cout<<"\n\t\t\t[[[% WITHDRAW CASH %]]]       ";
                           cout<<"\n\t\t\tEnter The Amount:      ";
                           cin>>withdraw;
                           if(withdraw<=balance1)
                           {
                               balance1=balance1-withdraw;
                               cout<<"\t\t\tTransaction Successfull!!!!"<<endl;
                               cout<<"\t\t\tYour Remaining Balance is: Rs"<<balance1<<endl;
                            }
                            else
                            {
                                cout<<"\t\t\t!! You Have Only Rs."<<balance1<<" balance in your account.!!\n";
                                goto repe;
                            }
                            getch();
                            goto repeat;
                            break;
                    case 3:
                           cout<<"\n\t\t\t[[[% DEPOSIT %]]]\n";
                           cout<<"\n\t\t\tEnter Amount in Rs: ";
                           cin>>deposit;
                           balance1= balance1+deposit;
                           cout<<"\n\t\t\tTransaction Successfull!! Rs."<<balance1<<endl;
                           getch();
                           
                           goto repeat;
                           break;
                    case 4:
                    pinchange:
                           cout<<"\n\t\t\tEnter Your Old Pin:";
                           cin>>pin;
                           if(pin==1809)
                           {
                            cout<<"\t\t\tEnter New Pin: ";
                            cin>>npin;
                            cout<<"\n\t\t\tPin Changed Successfully!!";
                           }
                           else
                           {
                               cout<<"\n\t\t\tWrong Pin !! Enter Pin Again!!\n";
                               goto pinchange;
                           }
                           getch();
                           
                           goto repeat;
                           break;
                    case 5:
                    exit(0);
                    break;
                    default:
                    cout<<"\n\t\t\tThat Is An Invalid Option!! Enter The Option Again!!\n";
                    getch();
                    
                    break;
                }

            }
        }
        else
        cout<<"\t\t\tWrong Pin Entered!! Please! Try Again!\n\n";
    }
    getch();

}
