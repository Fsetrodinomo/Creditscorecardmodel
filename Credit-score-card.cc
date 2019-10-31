#include <iostream>
#include <fstream>
using namespace std;

class Customer
{
	int Loan_ID ;
	double per;
	char Gender ;
	char Married ;
	int Dependents ;
	char Education;
	int Self_employed ;
	int Applicantincome;
	int coapplicantincome;
	int loanamount ;
	int loan_amount_term ;
	int loan_history;
	int credit_history ;
	int property_area ;
	int Loan_status ;
	void calculate();
	
	public :
	void getdata();
	void showdata () const;
	void show_tabular () const;
	void retloan_id() const;
};
_________________________________
void Customer::calculate()
{
	per = (200+dependents+education+self_employed+applicantincome+coapplicantincome+loanamount+loan_amount_term+credit_history+loan_status)
		
	if Dependents (>2)  -2 
		else +10 ;
	if Education () ==true; 
		else +10;
	if Applicantincome ()
		int 3500< = +50;
		int  	
	!!!!!TODO______RE-EVALUATE____CUSTOMERCALCULATE ____________!!!!!!!!!!!!!;


void Customer::getdata()
{
	cout<<"\n Insert Loan_ID";
	cin>> Loan_ID;
	cout<<"\n Insert Gender";
	cin>> Gender;
	cout<<"\n Insert married";
	cin>> Married;
	cout<<"\n Insert Dependents";
	cin>> Dependents;
	cout<<"\n Insert Education";
	cin>> Education;
	cout<<"\n Insert if customer is self-employed";
	cin>> self_employed;
	cout<<"\n Insert applicant income";
	cin>> applicantincome;
	cout<<"\n Insert co-applicant income";
	cin>> coapplicantincome;
	cout<<"\n Insert loan amount";
	cin>> loan_amount;
	cout<<"\n Insert loan amount term";
	cin>> loan_amount_term
	cout<<"\n Insert loan history";
	cin>> loan_history;
	cout<<"\n Insert property area";
	cin>> property_area;
	cout<<"\n Insert loan status";
	cin>> loan_status;		
	
}

!!!!!!!!!!!!!CHECK LATER !!
	void Customer::show_tabular() const
{
	cout<<loan_id<<setw(6)<<" "<<gender<<setw(10)<<marrried<<setw(4)<<dependents<<education(4)<<self_employed<<setw(4)
			<<applicantincome<<setw(4)<<coaplicantincome<<setw(8)<<<<setw(6)<<loan_status<<endl;
}

!!!!!!!!!!!!;

int Customer::retloan_id() const
	
{
	return loan_id;
}


//Function declaration
void write Loan_ID() ;
void display_all();
void display_sp(int);
void modify_loan_id(int);
void delete loan_id();
void customer_result();
void result ();
void intro();
void entry_menu();

int main ()
{
	char ch;
	cout.setf(ios::fixed|ios::showpoint);
	cout<<setprecision(2);
	intro ();
	do
	{
		system("cls");
		cout<<"\n\n\n\tMain menu";
		cout<<"\n\n\n\t0.01 Result menu";
		cout<<"\n\n\n\t.02 Edit menu";
		cout<<"\n\n\n\t.03 Exit";
		cout<<"\n\n\n\tSelect option (1-3)";
		cin>>ch;
		switch(ch)
		{
			case '1' : result ();
			break;
			case '2' : entry_menu();
			break;
			case '3' :
			break;
			default :cout<<"\a";
		}
	}while(ch!='3');
	return 0;
	
}

//function write in file
void write_Customer
{
	loan_id;
	ofstream outfile;
	outFile.open("loan_dataset.clean" , ios::binary|ios::app);
	st.getdata();
	outFile.write(reinterpret_cast<char *> (&st), sizeof(loan_id));
	outFile.close();
	cout<<"\n\nCustomer record has been created.";
	cin.ignore();
	cin.get();
}


//http://www.cppforschool.com/project/student-report-card-project.html










}


	


