//Mini project ATM 
//Uses all the object oriented design
#include<iostream>
#include<conio.h>
#include<string>
 

using namespace std;
class atm
{
	private:
		long int accnt;
		int balance;
		 string name;
		 string mobile;
		 int pin;
		 string newmob;
	public:
		void setData(long int accnt_a,int balance_a,string name_a,string mobile_a,int pin_a)
		{
			accnt=accnt_a;
			balance=balance_a;
			name=name_a;
			mobile=mobile_a;
			pin=pin_a;
		}
	long int getAccnt()
	{
		return accnt;
	}
	int getBalance()
	{
		return balance;
	}
	string getName()
	{
		return name;
	}
	string getMobile()
	{
		return mobile;
	}
	int getPin()
	{
		return pin;
	}
  void withdraw(int n)
  {
  	if(n>0 && n<balance)
  	{   int s=balance-n;
  		cout<<" Thank you for using our atm...Please collect the cash . "<<endl;
  		balance=s;
  		cout<<"Your new balance is : "<<balance;
  		_getch();
	  }
	  else
	  cout<<"Please enter a valid input : ";
}
   void mobile1(string d)
   {
   	if(d==mobile)
   	{
   		cout<<"Enter the new phone number : ";
   		cin>>newmob;
   		mobile=newmob;
   		cout<<"Phone number updated .";
   	}
   	else 
   	 cout<<"Please enter correct phone number ";
   }

		
};
int main()
{
	int acc;
	int choice;
	int pin;
	int wt;
	string mob;
		do{
           //system("cls");
	        cout<<"***************************** WELCOME TO SINHA ATM *******************************"<<endl;
	        cout<<"Enter account number : ";
	        cin>>acc;
	        cout<<"Enter the pin : ";
	        cin>>pin;
	        atm a;
	        a.setData(654321,56000,"Sohan sinha","7407843976",123);
	        system("cls");
	        if((acc!=a.getAccnt() && pin!=a.getPin()))
	        {
	        	cout<<"PLEASE ENTER VALID INPUT !!"<<endl;
			}
	       else if(acc==a.getAccnt() && pin==a.getPin())
              {
		        system("cls");
                do{
	            cout<<"***************************** WELCOME TO SINHA ATM *******************************"<<endl;
	            cout<<"1.CHECK BALANCE"<<endl;
	            cout<<"2.CASH WITHDRAW"<<endl;
	            cout<<"3.USER DETAILS"<<endl;
	            cout<<"4.UPDATE MOBILE NO"<<endl;
	            cout<<"5.EXIT"<<endl;
	            cin>>choice;
	            switch(choice)
	            {
		case 1:
			cout<<"The current balance of your account is : "<<a.getBalance();
			_getch();
			system("cls");
			break;
			case 2:
				cout<<"Withdraw amount : "<<endl;
				cin>>wt;
				a.withdraw(wt);
				system("cls");
				break;
				case 3:
					cout<<"ACCOUNT NUMBER : "<<a.getAccnt()<<endl;
					cout<<"Balance : "<<a.getBalance()<<endl;
					cout<<"Name : "<<a.getName()<<endl;
					cout<<"Mobile number : "<<a.getMobile()<<endl;
					cout<<"Pin : "<<a.getPin()<<endl;
				    _getch();
				    system("cls");
				    break;
				    case 4:
				    	cout<<"Enter your old mobile number : "<<endl;
				    	cin>>mob;
				    	a.mobile1(mob);
				    	_getch();
				    	system("cls");
				    	break;
				    	case 5:
				    		exit(0);
						default:
						 system("cls");
						 cout<<"Enter valid input !!"<<endl;
					}

}				

  while(1);
}
}while(1);
}
