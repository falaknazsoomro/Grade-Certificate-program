#include <iostream>
#include <string.h>
#include <windows.h>
#include <conio.h>
using namespace std;

class student{
	private:
		string name, rollno;
 		float PFP,PFT, ICTP,ICTT, ECC, AP, DS;
		
		float total, per, gpa,qp;
	
	public:
		void Get()
		{
			cout <<"\n <><><><><><><><><><><><><><><><><>< FALAK CODES SOLO GROUP ><><><><><><><><><><><><><><><><><>\n";
			cout <<"\n\n";
			cout <<"\n =================================== PROJECT IN C++ (OOP) =====================================\n";
			cout <<"\n";
			cout << "\t\t\t\t " <<" "<< " STUDENT MARKSHEET SYSTEM"<< endl;
			cout << "\t\t\t\t " <<" "<< "     GRADE CERTIFICATE"<< endl;
			cout << "\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
			cout << "\n\n";
			cout<< " Enter name of student: ";
 			getline(cin, name);
 			cout << " Enter rollno of student:  ";
 			cin >> rollno;
 			cout << "\n";
			cout << " Enter marks of PROGRAMMING FUNDAMENTALS (TH): ";
			cin >> PFT; 
			cout << " Enter marks of PROGRAMMING FUNDAMENTALS (P): ";
			cin >> PFP; 
			cout << " Enter marks of INTRODUCTION TO ICT: ";
			cin >> ICTT; 
			cout << " Enter marks of INTRODUCTION TO ICT: ";
			cin >> ICTP;
			cout << " Enter marks of ENGLISH COMPOSITION & COMPREHENSION: ";
			cin >> ECC;
			cout << " Enter marks of APLIED PYSICS: ";
			cin >> AP; 
			cout << " Enter marks of DISCRETE STRUCTURES: ";
			cin >> DS; 
		}
		
		void Display(){
			
			cout <<"\n********************************** QUAID-E-AWAM UNIVERSITY ENGINEERING SCIENCE & TECHNOLOGY ****************************";
			cout <<"\n*************************************************** INFORMATION TECHNOLOGY *********************************************";
			cout <<"\n\n========================================================================================================================\n\n";
			cout << "\t\t\t\t "<<" " << "                    GRADE CERTIFICATE " << endl;
			
			cout << "\n\n";
			system("color 0f");
			cout << " Name: " << name << endl;
			cout << " RollNo: " << rollno << endl;
			
			cout << " Grade: 1ST SEMESTER 1ST YEAR" << endl;
			cout << "\n\n";
			cout << " SUBJECT                                                                |" << "   Cradit Hours    |" << "   Grade     |" << "   Quality Points"<<endl;
			cout << " ";
			cout << "---------------------------------------------------------------------------------------------------------------------------";
			cout << "\n PROGRAMMING FUNDAMENTALS                    |" << "       Theory             |" << "       3           |" << "      "; gr(PFT); cout << "      |         " << ch3(PFT);
			cout << "\n                                             |" << "       Practical          |" << "       1           |" << "      " ; gr2(PFP); cout << "     |         " << ch1(PFP);
			cout << "\n ---------------------------------------------------------------------------------------------------------------------------";

			 
			cout << "\n INTRODUCTION TO ICT                         |" << "       Theory             |" << "       2           |" << "      " ; gr2(ICTT); cout << "     |         " << ch2(ICTT);
			cout << "\n                                             |" << "       practical          |" << "       1           |" << "      " ;gr2(ICTP);  cout << "     |         " << ch1(ICTP);       
			cout << "\n ---------------------------------------------------------------------------------------------------------------------------";
   
			cout << "\n ENGLISH COMPOSITION & COMPREHENSION         |" << "       Theory             |" << "       3           |" << "      " ; gr(ECC);  cout << "      |         " << ch3(ECC);
			cout << "\n ---------------------------------------------------------------------------------------------------------------------------";
  
			cout << "\n APPLIED PHYSICS                             |" << "       Theory             |" << "       3           |" << "      " ; gr(AP);    cout << "     |         " << ch3(AP);
		    cout << "\n ---------------------------------------------------------------------------------------------------------------------------";
 
			cout << "\n DISCRETE STRUCTURES                         |" << "       Theory             |" << "       3           |" << "      " ; gr(DS);     cout << "     |         " << ch3(DS);
			
			cout <<"\n\n\n"; 
	
			cout << " Total Credit Hours:              16\n";
			cout << " Total Quality Points:            "<< qp;
			cout << "\n Grade Point Average (GPA):       "<< gpa;
			cout << "\n Percentage:                      "<< per << " %";
			
	
		}

		
			void gr(int num)
		{
		 if(num>=85)
			cout << "A+";
			else if(num<85 && num>=75)
			cout << "A";
			else if (num<75 && num>65)
			cout << "B+";
			else if(num<=65 && num>=60)
			cout << "B";
			else if(num<60 && num>=55)
			cout << "C+";
			else if(num<55 && num>=50)
			cout << "C";
			else 
			cout << "F";
		}
		
					void gr2(int num)
		{
		 if (num>=42)
			cout << "A+";
			else if(num<42 && num>=37)
			cout << "A";
			else if (num<37 && num>32)
			cout << "B+";
			else if(num<=32 && num>=30)
			cout << "B";
			else if(num<30 && num>=27)
			cout << "C+";
			else if(num<27 && num>=25)
			cout << "C";
			else 
			cout << "F";
		}
		
		
				float ch3(float num)
		{
			float A1=4.00,A=3.75,B1=3.50,B=3.00,C1=2.50,C=2.00,F=0.00;

		 if(num>=85)
			return  A1*3;
		else if(num<85 && num>=75)
			return  A*3;
		else if (num<75 && num>65)
			return B1*3;
		else if(num<=65 && num>=60)
			return B*3;
		else if(num<60 && num>=55)
			return C1*3;
		else if(num<55 && num>=50)
			return C*3;
		else 
			return F;
		}
		
		float ch2(float num)
		 {float A1=4.00,A=3.75,B1=3.50,B=3.00,C1=2.50,C=2.00,F=0.00;
		 if (num>=42)
			return  A1*2;
		else if(num<42 && num>=37)
			return  A*2;
		else if (num<37 && num>32)
			return B1*2;
		else if(num<=32 && num>=30)
			return B*2;
		else if(num<30 && num>=27)
			return C1*2;
		else if(num<27 && num>=25)
			return C*2;
		else 
			return F;
		}
		
		float  ch1(float num)
		 {float A1=4.00,A=3.75,B1=3.50,B=3.00,C1=2.50,C=2.00,F=0.00;
		 if (num>=42)
			return  A1;
			else if(num<42 && num>=37)
			return  A;
			else if (num<37 && num>32)
			return  B1;
			else if(num<=32 && num>=30)
			return  B;
			else if(num<30 && num>=27)
			return  C1;
			else if(num<27 && num>=25)
			return  C;
			else 
			return  F;
		}	
		
		void QP()
		{
			qp =0.00;
			qp = qp + (ch3(PFT) + ch1(PFP) + ch2(ICTT) + ch1(ICTP) + ch3(ECC) + ch3(AP) + ch3(DS));
		}
		float GPA()
		{
			
		return	gpa = (qp/16);
		}

			
	    void Total()
		{
			total =0;
			total = total + (PFT + PFP + ICTT + ICTP + ECC + AP + DS);
		}
				void Percentage()
		{
			per = (total*100)/ 550;
		}
		
};

int main(){
	student stu;
	stu.Get();
	 system("color 0a");
 	cout<<"\n\n\n\t\t\t\tPlease wait Marksheet is being generating\n\n";
 	char a=177, b=219;
 	cout<<"\t\t\t\t";
 	for (int i=0;i<=40;i++)
 	cout<<a;
 	cout<<"\r";
 	cout<<"\t\t\t\t";
 		for (int i=0;i<=40;i++)
 		{
  			cout<<b;
  		for (int j=0;j<=1e8;j++); 
 		}
 
 	
 	
 	
	system("CLS");
	system("color 0f");
	stu.QP();
	stu.Total();
	stu.Percentage();
	stu.GPA();
	stu.Display();
	getch();
	system("CLS");
	
	
	
	
	
	
	
	
return 0;	
}
