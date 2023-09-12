#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<dos.h>
#include<iomanip>
using namespace std;
void bookmyvehicle(void);


class Account
{
                    public:
                    char name[20],phno[10],gender,bankaccno[30],dlno[20];
                    string password,p2;
                    int age,flag=1;
                    void create()
                    {
                                        system("CLS");
                                        cout<<"Enter your details below :-"<<endl;
                                        cout<<"\nEnter your Name : "<<endl;
                                        cin>>name;
                                        cout<<"\nEnter your Phone Number : "<<endl;
                                        cin>>phno;
                                        cout<<"\nEnter your Bank Account Number"<<endl;
                                        cin>>bankaccno;
                                        cout<<"\nEnter your DL Number"<<endl;
                                        cin>>dlno;
                                        cout<<"\nEnter your Gender : "<<endl;
                                        cout<<"Enter F for FEMALE AND M for MALE"<<endl;
                                        cin>>gender;
                                        cout<<"\nEnter your age"<<endl;
                                        cin>>age;
                                        do
                                        {
                                                            system("CLS");
                                                            cout<<"USER NAME : "<<name<<endl;
                                                            cout<<"YOUR PASSWORD SHOULD CONTAIN ATLEAST ONE SPECIAL CHARACTER,ONE DIGIT,ONE UPPERCASE AND ONE LOWER CASE CHARACTER"<<endl;
                                                            cout<<"YOUR PASSWORD SHOULD ATLEAST CONTAIN 8 CHARACTERS"<<endl;
                                                            cout<<"ENTER THE PASSWORD"<<endl;
                                                            cin>>password;
                                                            bool hasu=false,hasl=false,hasd=false,hass=false;
                                                            if(password.length()<8)
                                                            continue;
                                                            for(int i=0;i<password.length();i++)
                                                            {
                                                                                if(islower(password[i]))
                                                                                hasl=true;
                                                                                else if(isupper(password[i]))
                                                                                hasu=true;
                                                                                else if(isdigit(password[i]))
                                                                                hasd=true;
                                                                                else
                                                                                hass=true;
                                                            }
                                                            if(hasu&&hasl&&hasd&&hass)
                                                                                flag = 0;
                                                            
                                        }while(flag==1);
                                        flag=1;
                                        cout<<"STRONG PASSWORD"<<endl;
                                        do
                                        {
                                                           cout<<"RE-ENTER YOUR PASSWORD FOR CONFIRMATION"<<endl;
                                                           cin>>p2;
                                                           if(password==p2)
                                                           {
                                                            cout<<"LOG-IN SUCCESSFUL"<<endl;
                                                            cout<<"\n\nACCOUNT CRETAED SUCCESSFULLY......!!!"<<endl;
                                                            flag=0;
                                                           }
                                        } while (flag==1);
                                        ofstream f1;
                                        f1.open("AccountsDatabase.txt",ios::app);
                                        f1<<name<<" :"<<"\n";
                                        f1<<password<<"\n";
                                        f1 << phno << "\n";
                                        f1<<bankaccno<<"\n";
                                        f1 << dlno << "\n";
                                        f1<<gender<<"\n";
                                        f1<<age<<"\n";
                                        f1<<"\n\nACCOUNT CRETAED SUCCESSFULLY......!!!"<<"\n";
                                        f1.close();
                    }
                    void login()
                    {
                                        char n[20], choice, c;

                                        string p="";
                                        cout<<"-------------------------------------------------------------------"<<endl;
                                        cout<<"                  WELCOME TO THE CAR RENTAL SYSTEM              "<<endl;
                                        cout<<"-------------------------------------------------------------------"<<endl;
                                        cout<<"\n\nEnter your Name : "<<endl;
                                        cin>>n;
                                        ifstream f2;
                                        f2.open("AccountsDatabase.txt");
                                        if(n==name)
                                        cout<<"\nUSER FOUND"<<endl;
                                        cout<<"\nENTER PASSWORD"<<endl;
                                       
                                        for (int i=0;i<=8;i++)
                                        {   
                                            c=getch();
                                            p[i]=c;
                                            c='*';
                                            cout<<c;
                                        }
                                        if(p==password)
                                        cout<<"LOG-IN SUCCESSFULL"<<endl;
                                        cout << "\n\nTO BOOK A VEHICLE, ENTER y/Y :" << endl;
                                        cin >> choice;

                                        if(choice=='y' || choice=='Y')
                                        {
                                        bookmyvehicle();
                                        }
                    }
};

int main()
{
                    int ch;
                    Account a;
                    bool b=true;
                    system("CLS");
                    cout<<"-------------------------------------------------------------------"<<endl;
                    cout<<"                  WELCOME TO THE CAR RENTAL SYSTEM              "<<endl;
                    cout<<"-------------------------------------------------------------------"<<endl;
                    while(b)
                    {                   system("CLS");
                                        cout<<"-------------------------------------------------------------------"<<endl;
                                        cout<<"                  WELCOME TO THE CAR RENTAL SYSTEM              "<<endl;
                                        cout<<"-------------------------------------------------------------------"<<endl;
                                        cout<<"\nDon't have an account??  Enter 1 to Create your account here"<<endl;
                                        cout<<"\nAlready have an account??  Login here to enjoy our services, Enter 2 to login "<<endl;
                                        cout<<"\nHappy Journey !! Press any key to EXIT  "<<endl;
                                        cin>>ch;
                                        if(ch==1)
                                                            a.create();
                                        else if(ch==2)
                                                            a.login();
                                        else 
                                                            b=false;
                                        
                    }


                    return 0;                   
}
void bookmyvehicle()
{
                    int ch, fee;
                    float change;
                    int model;
                    cout << "DO YOU WANNA BOOK A CAR OR A BIKE???\n IF YOU ARE LOOOKING FOR A CAR, ENTER 1 ELSE ENTER 2" << endl;
                    cin >> ch;
                    if (ch == 1)
                    {
                                        cout << "\t\tWelcome to Our Car Rental Showroom, We have a list of cars available here at afforadable prices. Book it now";
                                        cout << " \n\nEnter 1 for TOYOTA INNOVA CRYSTA - 7 SEATER - Rs.2999 FOR 7AM-10PM" << endl;
                                        cout << " Enter 2 for RENAULT DUSTER TURBO - 5 SEATER - Rs.2400 FOR 7AM-10PM" << endl;
                                        cout << " Enter 3 for TATA NEXON SUV OR EV - 5 SEATER - Rs.2199 FOR 7AM-10PM" << endl;
                                        cout << " Enter 4 for RENAULT DUSTER DACIA - 7 SEATER - Rs.2999 FOR 7AM-10PM" << endl;
                                        cout << " Enter 5 for HYUNDAI CRETA SUV    - 5 SEATER - Rs.1899 FOR 7AM-10PM" << endl;
                                        cin >> model;
                                        if (model == 1)
                                        {
                                                            system("CLS");

                                                            cout << "You have chosen TOYOTA INNOVA CRYSTA - 7 SEATER" << endl;
                                                            cout << "\n\n Thank you for using our services\n Charges : Rs.2999/-\nCGST/SGST : Rs.100/-\n Total Charges : Rs. 3099/-" << endl;
                                                               cout << "\n\nEnter the fee here : ";
                                                            cin >> fee;
                                                            if(fee == 3099)
                                                            cout << "--------PAYMENT SUCCESSFULL-------------    " << endl;
                                                            else
                                                            cout << "\nKindly pay the exact amount......" << endl;
                                        }
                                        else if (model == 2)
                                        {
                                                            system("CLS");
                                                            cout << "You have chosen RENAULT DUSTER TURBO - 5 SEATER" << endl;
                                                            cout << "\n\n Thank you for using our services\n Charges : Rs.2400/-\nCGST/SGST : Rs.100/-\n Total Charges : Rs. 2500/-" << endl;
                                                               cout << "\n\nEnter the fee here : ";
                                                            cin >> fee;
                                                            if(fee == 2500)
                                                            cout << "--------PAYMENT SUCCESSFULL-------------    " << endl;
                                                            else
                                                            cout << "\nKindly pay the exact amount......" << endl;
                                        }
                                        else if (model == 3)
                                        {
                                                            system("CLS");
                                                            cout << "You have chosen TATA NEXON SUV OR EV - 5 SEATER" << endl;
                                                            cout << "\n\n Thank you for using our services\n Charges : Rs.2199/-\nCGST/SGST : Rs.100/-\n Total Charges : Rs. 2299/-" << endl;
                                                               cout << "\n\nEnter the fee here : ";
                                                            cin >> fee;
                                                            if(fee == 2299)
                                                            cout << "--------PAYMENT SUCCESSFULL-------------    " << endl;
                                                            else
                                                            cout << "\nKindly pay the exact amount......" << endl;
                                        }
                                        else if (model == 4)
                                        {
                                                            system("CLS");
                                                            cout << "You have chosen RENAULT DUSTER DACIA - 7 SEATER" << endl;
                                                            cout << "\n\n Thank you for using our services\n Charges : Rs.2999/-\nCGST/SGST : Rs.100/-\n Total Charges : Rs. 3099/-" << endl;
                                                               cout << "\n\nEnter the fee here : ";
                                                            cin >> fee;
                                                            if(fee == 3099)
                                                            cout << "--------PAYMENT SUCCESSFULL-------------    " << endl;
                                                            else
                                                            cout << "\nKindly pay the exact amount......" << endl;
                                        }
                                        else if (model == 5)
                                        {
                                                            system("CLS");
                                                            cout << "You have chosen HYUNDAI CRETA SUV    - 5 SEATER" << endl;
                                                            cout << "\n\n Thank you for using our services\n Charges : Rs.1899/-\nCGST/SGST : Rs.100/-\n Total Charges : Rs. 1999/-" << endl;
                                                               cout << "\n\nEnter the fee here : ";
                                                            cin >> fee;
                                                            if(fee == 1999)
                                                            cout << "--------PAYMENT SUCCESSFULL-------------    " << endl;
                                                            else
                                                            cout << "\nKindly pay the exact amount......" << endl;
                                        }
                                        else
                                        {
                                                            cout << "Entered Car Model is currently unavailable.We try to fix this issue soon. Please try again! Sorry for Convenience..." << endl;
                                        }
                                        cin.get();
                    }
                    else if (ch == 2)
                    {
                                        cout << "\t\tWelcome to Our Bike Rental Showroom, We have a list of scooters and motorbikes available here at afforadable prices. Book it now" << endl;
                                        cout << " \n\nEnter 1 for TVS APACHE RTR - Rs.1099 FOR 7AM-10PM" << endl;
                                        cout << " Enter 2 for YAMAHA R15 V4  - Rs.1099 FOR 7AM-10PM" << endl;
                                        cout << " Enter 3 for HONDA ACTIVA 6g- Rs.999  FOR 7AM-10PM" << endl;
                                        cout << " Enter 4 for YAMAHA FASCINO - Rs.980  FOR 7AM-10PM" << endl;
                                        cout << " Enter 5 for ROYAL ENFIELD  - Rs.1299 FOR 7AM-10PM" << endl;
                                        cin >> model;
                                          if (model == 1)
                                        {
                                          system("CLS");

                                          cout << "You have chosen TVS APACHE RTR - Rs.1099  " << endl;
                                          cout << "\n\n Thank you for using our services\n Charges : Rs.1099/-\nCGST/SGST : Rs.100/-\n Total Charges : Rs. 1199/-" << endl;
                                             cout << "\n\nEnter the fee here : ";
                                                            cin >> fee;
                                                            if(fee == 1199)
                                                            cout << "--------PAYMENT SUCCESSFULL-------------    " << endl;
                                                            else
                                                            cout << "\nKindly pay the exact amount......" << endl;
                                        }
                                        else if (model == 2)
                                        {
                                          system("CLS");
                                          cout << "You have chosen YAMAHA R15 V4  - Rs.1099" << endl;
                                          cout << "\n\n Thank you for using our services\n Charges : Rs.1099/-\nCGST/SGST : Rs.100/-\n Total Charges : Rs. 1199/-" << endl;
                                             cout << "\n\nEnter the fee here : ";
                                                            cin >> fee;
                                                            if(fee == 1199)
                                                            cout << "--------PAYMENT SUCCESSFULL-------------    " << endl;
                                                            else
                                                            cout << "\nKindly pay the exact amount......" << endl;
                                        }
                                        else if (model == 3)
                                        {
                                          system("CLS");
                                          cout << "You have chosen HONDA ACTIVA 6g- Rs.999  " << endl;
                                          cout << "\n\n Thank you for using our services\n Charges : Rs.999/-\nCGST/SGST : Rs.100/-\n Total Charges : Rs. 1099/-" << endl;
                                             cout << "\n\nEnter the fee here : ";
                                                            cin >> fee;
                                                            if(fee == 1099)
                                                            cout << "--------PAYMENT SUCCESSFULL-------------    " << endl;
                                                            else
                                                            cout << "\nKindly pay the exact amount......" << endl;
                                        }
                                        else if (model == 4)
                                        {
                                          system("CLS");
                                          cout << "You have chosen YAMAHA FASCINO - Rs.980" << endl;
                                          cout << "\n\n Thank you for using our services\n Charges : Rs.980/-\nCGST/SGST : Rs.100/-\n Total Charges : Rs. 1080/-" << endl;
                                             cout << "\n\nEnter the fee here : ";
                                                            cin >> fee;
                                                            if(fee == 1080)
                                                            cout << "--------PAYMENT SUCCESSFULL-------------    " << endl;
                                                            else
                                                            cout << "\nKindly pay the exact amount......" << endl;
                                        }
                                        else if (model == 5)
                                        {
                                          system("CLS");
                                          cout << "You have chosen ROYAL ENFIELD  - Rs.1299" << endl;
                                          cout << "\n\n Thank you for using our services\n Charges : Rs.1299/-\nCGST/SGST : Rs.100/-\n Total Charges : Rs. 1399/-" << endl;
                                          cout << "\n\nEnter the fee here : ";
                                          cin >> fee;
                                          if (fee == 1399)
                                                            cout << "--------PAYMENT SUCCESSFULL-------------    " << endl;
                                                            else
                                                            cout << "\nKindly pay the exact amount......" << endl;
                                          
                                        }
                                        else
                                        {
                                          cout << "Entered Bike Model is currently unavailable. We try to fix this issue soon. Please try again! Sorry for Convenience..." << endl;
                                        }
                                        cin.get();
                    }
    
  }
