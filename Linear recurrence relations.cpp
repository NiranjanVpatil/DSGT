//Name : Niranjan Vinod Patil.
//roll no;scsb307
//Write a program using linear recurrence relations for loan department.

#include<iostream>
#include<string>
using namespace std;
class bank
{
	public:
		char first_name[100];
		char middle_name[100];
		char last_name[100];
		char g;
		long int mobile_no;
		long int bank_account_no;
		long int pan_card_no;
	
		long int annual_income;
		int year;
		long int loan_amount;
		char s;
		
		float interest_rate;
		int yrs;
		
		int fill_up_application_form()
	     
	     {
	     	cout<<"-------------------------------APPLICATION FORM------------------------------"<<endl;
	     	cout<<"Enter Your Details : "<<endl;
	     	cout<<"1.Enter First Name : ";
	     	cin>>first_name;
	     	cout<<"2.Enter Middle Name : ";
	     	cin>>middle_name;
	     	cout<<"3.Enter Last Name : ";
	     	cin>>last_name;
	     	cout<<"Enter Your Gender : ";
	     	cin>>g;
	     	
			cout<<"Enter mobile Number : ";
			cin>>mobile_no;
			cout<<"Enter Account Number : ";
			cin>>bank_account_no;
			cout<<"Enter Pan card Number : ";
			cin>>pan_card_no;
			
			cout<<"Enter Income Details : "<<endl;
			cout<<"Enter Your Annual Income : "<<endl;
			cin>>annual_income;
			cout<<"Enter Your loan amount : "<<endl;
			cin>>loan_amount;
			cout<<"Enter the number of years for to pay loan amount : "<<endl;
			cin>>year;
			cout<<"Enter Y if "<<endl;
			cout<<"I agree to the PRIVACY POLICY and TERMS OF USE.."<<endl;
			cin>>s;
							     	
	     	
		 }
		 
		 float find_interest_rate()
		 {
		 	if(100000<loan_amount<1000001 && year<11)
		 	{
		 		interest_rate=0.09;
			 }
			 else
			 {
			 	if(1000001<loan_amount<3000001 && year<21)
			 	{
			 		interest_rate=0.12;
				 }
				 else
				 {
				 	if(3000000<loan_amount<5000001 && year<31)
				 	{
				 		interest_rate=0.14;
					 }
					 else
					 {
					 	cout<<"Loan is not Sanctioned."<<endl;
					 }
				 }
				 
			 }
			 return(interest_rate);
		 }
		 
		 
		 long int loan_calculation(long int loan_amount,float interest_rate,int year)
{
	if(year<=0)
	{
		return loan_amount;
	}
	else
	{
		return loan_calculation((loan_amount*(1+interest_rate)),interest_rate,year-1);
	
	
	}
	
}
		 
		 
		
		 

	
};
int main()
{
   int ch;
   long int ci;
   
   bank b;
   cout<<"------------------  WELCOME TO THE BANK OF MAHRASHTRA  --------------------"<<endl;
   cout<<"------------------  WELCOME TO Machine LOAN PROCEDURE  ----- --------------"<<endl<<endl;
   cout<<"The following Machine Loan Procedure is to be follow : "<<endl<<endl;
   cout<<"1. Fill Up the Applicatiom Form."<<endl;
   cout<<"2. Find Interest Rate for loan amount."<<endl;
   cout<<"3. Calculate Re-pay amount for loan customer after some N years : "<<endl<<endl;;
   cout<<" If you have any problem during loan procedure then contact to the bank office or visit bank website. "<<endl<<endl;
   cout<<"Enter Your loan procedure number : "<<endl;
   cin>>ch;
   do
   {
   	
   	switch(ch)
   {
   	case 1:
   		b.fill_up_application_form();
		break;
	case 2:
		b.find_interest_rate();
		cout<<"The Interest Rate is : "<<b.interest_rate<<endl;
		break;
	case 3:
		
		ci=b.loan_calculation(b.loan_amount,b.interest_rate,b.year);
        cout<<"loan you have to pay after    "<<b.year<<"   years is   "<<ci<<endl;
		break;
    }
    cout<<"Enter Your loan procedure number : "<<endl;
    cin>>ch;

   }while(ch<4);
   
   		
   
   return 0;
}
/*
OUTPUT:

*/
