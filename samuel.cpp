#include <iostream>
using namespace std;
 #include<conio.h>
 #include<stdio.h>

struct student
    {
       char name[25];
	   char staff[50];
       int idnum;
       char lvl[20];
       int age;
	   long double pnum;
	   int score;
	   char grade[4];
    };
int main()
{
	char dow;
	int arr=0;
	do{
       student stud[10];
	   cout<<" Press 1 Enter Record \n";
	   cout<<" Press 2 Delet Record \n";
	   cout<<" Press 3 Update Record \n";
	   cout<<" Press 4 Search Record \n";
	   cout<<" Press 5 Display Record \n";
	   cout<<"\n \t Select Option::";
		 int rolchek=0;
       int sw;
	   cin>>sw;
	   switch (sw)
	   {
		   case 1:
           cout<<"\n Enter the Data of the student no "<<arr+1<<" is :\n";
		   cout<<"\t Enter the ID No = ";
		  int rol2;
		   int rol;
		   cin>>rol;
		   for(int j=0;j<=arr;j++)
		   {
			   rol2=rol;
		   if(rol2==stud[j].idnum)
		   {
			   rolchek=1;
			   }
		   }
		   if(rolchek!=1){
			   stud[arr].idnum=rol;
		  cout<<"\t Enter the Name =  ";
		 cin>>stud[arr].name;
		 cout<<"\t Enter the staff =  ";
		 cin>>stud[arr].staff;
		 cout<<"\t Enter the contact =  ";
		 cin>>stud[arr].pnum;
         cout<<"\t Enter the Level = ";
		 cin>>stud[arr].lvl;
		 cout<<"\t Enter the Marks =  ";
		 cin>>stud[arr].score;
         cout<<"\t Enter the Grade = ";
		 cin>>stud[arr].grade;
         cout<<"\t Enter the Age = ";
         cin>>stud[arr].age;
		 arr=arr+1;
		   }
		   else
		   {
			   cout<<"This Record Already Enterd \n";
		   }
            break;
			case 2:
           cout<<"\n Enter the ID no of the student To Delete ::\n";
		   cin>>rol;
		   for(int j=0;j<=arr;j++)
		   {  
			   rol2=rol;
		   if(rol2==stud[j].idnum)
		   {   
			   stud[j].idnum='d';
		  cout<<"\t Record Deleted";
			   }
		   }
            break;
			case 3:
				 cout<<"\n Enter the ID no of the student To Update ::\n";
		   cin>>rol;
		   for(int j=0;j<=arr;j++)
		   {
			   rol2=rol;
		   if(rol2==stud[j].idnum)
		   {
			   		cout<<"\t ID no =  ";   
			   cout<<stud[j].idnum;
			   cout<<"\t Name =  ";
			   cout<<stud[j].name;
			  cout<<"\t  staff =  ";
			   cout<<stud[j].staff;
			    cout<<"\t  contacto =  ";
				cout<<stud[j].pnum;
				 cout<<"\t Level = ";
				 cout<<stud[j].lvl;
			    cout<<"\t  Marks =  ";
			   cout<<stud[j].score;
			      cout<<"\t Grade = ";
			   cout<<stud[j].grade;
cout<<"\n\t ReEnter Data  ";
			    cout<<"\n\t Enter the Name =  ";
		 cin>>stud[j].name;
		 cout<<"\n\t Enter the staff =  ";
		 cin>>stud[j].staff;
		 cout<<"\n\t Enter the contact =  ";
		 cin>>stud[j].pnum;
         cout<<"\n\t Enter the Level = ";
		 cin>>stud[j].lvl;
		 cout<<"\n\t Enter the Marks =  ";
		 cin>>stud[j].score;
         cout<<"\n\t Enter the Grade = ";
		 cin>>stud[j].grade;
         cout<<"\n\t Enter the Age = ";
         cin>>stud[j].age;
			   }
		   }
            break;
			case 4:
				 cout<<"\n Enter the ID no of the student To Search ::";
		   cin>>rol;
		   for(int j=0;j<=arr;j++)
		   {  
			   rol2=rol;
		   if(rol2==stud[j].idnum)
		   {
			 	cout<<"\n \t ID no =  ";   
			   cout<<stud[j].idnum;
			   cout<<"\n \t Name =  ";
			   cout<<stud[j].name;
			  cout<<"\n \t  staff =  ";
			   cout<<stud[j].staff;
			    cout<<"\n \t  contact =  ";
				cout<<stud[j].pnum;
				 cout<<"\n \t Level = ";
				 cout<<stud[j].lvl;
			    cout<<"\n \t  Marks =  ";
			   cout<<stud[j].score;
			      cout<<"\n \t Grade = ";
			   cout<<stud[j].grade;
		   }}
            break;
			case 5:	
        for(int i=0;i<1;i++)
		   {   
			   cout<<"ID no ||";
			   cout<<" Name  ||";
			   cout<<" staff   || ";
			     cout<<"Contact ||";
				 cout<<" Level ||";
				 cout<<" Marks ||";
				 cout<<"  Grade ||";
			   for(int k=0;k<arr;k++)
		   {
			   if (stud[k].idnum!='d')
			   {
			   cout<<"\n";
			   cout<<" ";   
			   cout<<stud[k].idnum;
			   cout<<"    || ";
			   cout<<stud[k].name;
			  cout<<" || ";
			   cout<<stud[k].staff;
			    cout<<"   ||   ";
				cout<<stud[k].pnum;
				 cout<<"   ||   ";
				 cout<<stud[k].lvl;
			    cout<<"  ||   ";
			   cout<<stud[k].score;
			      cout<<"    ||  ";
			   cout<<stud[k].grade;
			   }
			   }}
            break;
	       default:
		    cout<<"\t Worng option Selected ";
		   break;  
	}
	   cout<<"\n \n \t Do You want to Continue Again [Y/N]";
	   cin>>dow;
	}
	while(dow=='y');
       return 0;
       getch();
}


