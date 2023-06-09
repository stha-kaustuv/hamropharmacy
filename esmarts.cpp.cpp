#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include<string.h>
#include <conio.h>
#include<iomanip>
#include<time.h>
#include <sstream>
#include<limits>
using namespace std;

void login()
{

	time_t timetoday;
        time(&timetoday);
        cout << asctime(localtime(&timetoday));
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
    system("cls");
	time_t timetoday;
        time(&timetoday);
        cout << asctime(localtime(&timetoday));
        cout << "\n-----------------------------------------------------------------------------------------------------------------------";
    cout << "\n------------------------------------------ WELCOME TO E-SMARTS ---------------------------------------------------------" << endl;
    printf("\n\n\t\t\t  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\  LOGIN FIRST  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\  ");
    printf(" \n\n\t                  ENTER USERNAME:=");
	scanf("%s", &uname);
	printf(" \n\n\t                  ENTER PASSWORD:=");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
	{
	printf("  \n\n\n\t\t       WELCOME TO E-SMARTS SYSTEM !!!! LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
		printf("\n\n\t\t        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();//holds the screen

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\n\n\tSorry!! You have entered the wrong username and password for three times!!!");
        exit(0);
		getch();

	}
		system("cls");

}
class student
{
    string course, address, email_id,bca,bit,mca,pgdca;
    string name;
    int fee;
    unsigned long long  contact_no;
    double d;
    int roll_no;

public:
    void menu();
    void insert();
    void display();
    void modify();
    void set_fees();
    void get_fees();
    //void subjects();
    void search();
    void deleted();
    void feepay();
    void details(); 
};
void student::details(){

	 cout << "\t\t\tEnter Name: ";
	 while (std::getline(std::cin, name))
    {
        std::stringstream ss(name);
        if (ss >> d == false && name != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //cout << "\n\t\t\tInvalid input.  Try again: ";
        //std::cout << "Error!" << std::endl;
    }
	  cout<<"\n\t\t\tEnter the roll no: ";
	  fflush(stdin);
    while(!(cin >> roll_no)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
   
    fstream fil;
    fil.open("studentfee.txt", ios::in);
 
    if (!fil)
    {
        // code 
        cout << "\n\t\t\tNo Data Is Present...";
        fil.close();
    }
    else
    {
        fil >> bca >> bit >> pgdca >> mca ;
        while (!fil.eof())
        {
        	cout<<"\n\t\t\t-----------------------------------";
            cout << "\n\t\t\t-Actual Fees of faculties are:    - " << endl;
            cout << "\t\t\t-BCA:" << bca<<"\t\t\t  -"<<endl; 
            cout << "\t\t\t-BIT: "<< bit<<"\t\t\t  -"<<endl; 
            cout << "\t\t\t-PGDCA:"<< pgdca<<"\t\t\t  -" <<endl;
            cout << "\t\t\t-MCA:"<< mca<<"\t\t\t  -" <<endl;
            cout<<"\t\t\t-----------------------------------\n";
            fil >> bca >> bit >> pgdca >> mca;
        }
    }
    fil.close();
    cout<<"\n\t\t\tEnter the fees after scholarship: ";
    fflush(stdin);
    while(!(cin >> fee)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
    cout << "\t\t\tEnter Email Id: ";
    fflush(stdin);
    cin >> email_id;
    cout << "\t\t\tEnter Contact No: ";
    while(!(cin >> contact_no)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
    cout << "\t\t\tEnter Address: ";
    fflush(stdin);
     while (std::getline(std::cin, address))
    {
        std::stringstream ss(address);
        if (ss >> d == false && address != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //cout << "\n\t\t\tInvalid input.  Try again: ";
        //std::cout << "Error!" << std::endl;
    }
}
void student::menu()
{
menustart:
	
    int choice;
    char x;
    system("cls");
    time_t timetoday;
        time(&timetoday);
        cout << asctime(localtime(&timetoday));
    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t| E-SMARTS SYSTEM |" << endl;
    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t 1. Enter New Record" << endl;
    cout << "\t\t\t 2. Display Record" << endl;
    cout << "\t\t\t 3. Fee Payment" << endl;
    cout << "\t\t\t 4. Set Fee" << endl;
    cout << "\t\t\t 5. Display Fee" << endl;
    //cout << "\t\t\t 6. Display Subjects" << endl;
    cout << "\t\t\t 6. Modify Record" << endl;
    cout << "\t\t\t 7. Search Record" << endl;
    cout << "\t\t\t 8. Delete Record" << endl;
    cout << "\t\t\t 9. Exit" << endl;

    cout << "\t\t\t---------------------------" << endl;
    cout << "\t\t\tChoose Option:[1/2/3/4/5/6/7/8/9]" << endl;
    cout << "\t\t\t---------------------------" << endl;
    cout << "\t\t\tEnter Your Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        do
        {
            insert();
            cout << "\n\t\t\t Add Another Student Record (Y,N): ";
            cin >> x;
        } while (x == 'y' || x == 'Y');
        break;
    case 2:
        display();
        break;
    case 3:
    	feepay();
    	break;
    case 4:
    	set_fees();
    	break;
    case 5:
    	get_fees();
    	break;
    /*case 6:
    	subjects();
    	break;*/
    case 6:
        modify();
        break;
    case 7:
        search();
        break;
    case 8:
        deleted();
        break;
    case 9:
        exit(0);
    default:
        cout << "\n\t\t\t Invalid choice... Please Try Again..";
    }
    getch();
    goto menustart;
}
void student::insert() // add student details
{
    system("cls");
    int faculty;
    time_t timetoday;
        time(&timetoday);
        cout << asctime(localtime(&timetoday));
    fstream file;
    cout << "\n-----------------------------------------------------------------------------------------------------";
    cout << "\n------------------------------------- Add Student Details ---------------------------------------------" << endl;
    cout<<"\t\t\t 1.BCA"<<endl;
    cout<<"\t\t\t 2.BIT"<<endl;
    cout<<"\t\t\t 3.PGDCA"<<endl;
    cout<<"\t\t\t 4.MCA"<<endl;
    cout << "\t\t\tEnter a faculty number: ";
    cin >> faculty;
    switch(faculty){
    case 1:
    	system("cls");
    	cout << "\n-----------------------------------------------------------------------------------------------------";
        cout << "\n------------------------------------- BCA ---------------------------------------------" << endl;
         details();
         file.open("bca.txt", ios::app | ios::out);
    file << " " << name << " " << roll_no <<" "<<fee << " " << email_id << " " << contact_no << " " << address << "\n";
    file.close();
        break;
    case 2:
    	system("cls");
    	cout << "\n-----------------------------------------------------------------------------------------------------";
        cout << "\n------------------------------------- BIT ---------------------------------------------" << endl;
        details();
        file.open("bit.txt", ios::app | ios::out);
    file << " " << name << " " << roll_no <<" "<<fee << " " << email_id << " " << contact_no << " " << address << "\n";
    file.close();
        break;
    case 3:
    	system("cls");
    	cout << "\n-----------------------------------------------------------------------------------------------------";
        cout << "\n------------------------------------- PGDCA ---------------------------------------------" << endl;
    	details();
    	file.open("pgdca.txt", ios::app | ios::out);
    file << " " << name << " " << roll_no << " " << fee << " " << email_id << " " << contact_no << " " << address << "\n";
    file.close();
    	break;
    case 4:
    	system("cls");
    	cout << "\n-----------------------------------------------------------------------------------------------------";
        cout << "\n------------------------------------- MCA ---------------------------------------------" << endl;
    	details();
    	file.open("mca.txt", ios::app | ios::out);
    file << " " << name << " " << roll_no <<" "<<fee << " " << email_id << " " << contact_no << " " << address << "\n";
    file.close();
    	break;
	}
   
    
}

void student::display() // display students details
{
    system("cls");
    time_t timetoday;
        time(&timetoday);
        cout << asctime(localtime(&timetoday));
        int choice;
    fstream file;
    //int total = 1;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Record Table --------------------------------------------" << endl;
    cout<<"\t\t\t 1.BCA";
    cout<<"\t\t\t 2.BIT";
    cout<<"\t\t\t 3.pgdca";
    cout<<"\t\t\t 4.MCA ";
    cout << "\t\t\tEnter a choice ";
    cin >> choice;
    switch(choice){
    case 1:
    	system("cls");
    		cout << "\n-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------- BCA --------------------------------------------------" << endl;
         file.open("bca.txt", ios::in);
 
    if (!file)
    {
        /* code */
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();
    }
    else
    {
        file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        while (!file.eof())
        {
        
           // cout << "\n\n\t\t\t Student No.: " << total++ << endl;
            cout << "\n\n\t\t\t Student Name: " << name << endl;
            cout << "\t\t\t Student Roll No.: " << roll_no << endl;
            cout << "\t\t\t Student fee: " << fee << endl;
            cout << "\t\t\t Student Email Id.: " << email_id << endl;
            cout << "\t\t\t Student Contact No.: " << contact_no << endl;
            cout << "\t\t\t Student Address: " << address << endl;
            file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        }
        /*if (total == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }*/
        
    }
    file.close();
    
        break;
    case 2:
    	system("cls");
    		cout << "\n-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------- BIT --------------------------------------------------" << endl;
        file.open("bit.txt", ios::in);
 
    if (!file)
    {
        /* code */
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();
    }
    else
    {
        file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
    
        while (!file.eof())
        {
           // cout << "\n\n\t\t\t Student No.: " << total++ << endl;
            cout << "\n\n\t\t\t Student Name: " << name << endl;
            cout << "\t\t\t Student Roll No.: " << roll_no << endl;
            cout << "\t\t\t Student fee: " << fee << endl;
            cout << "\t\t\t Student Email Id.: " << email_id << endl;
            cout << "\t\t\t Student Contact No.: " << contact_no << endl;
            cout << "\t\t\t Student Address: " << address << endl;
            file >> name >> roll_no >> course >> fee >> email_id >> contact_no >> address;
        }
        /*if (total == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }*/
    }
    file.close();
        break;
        
    case 3:
    	system("cls");
    		cout << "\n-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------- PGDCA --------------------------------------------------" << endl;
    	file.open("pgdca.txt", ios::in);
 
    if (!file)
    {
        /* code */
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();
    }
    else
    {
        file >> name >> roll_no  >> fee >> email_id >> contact_no >> address;
      
        while (!file.eof())
        {
           // cout << "\n\n\t\t\t Student No.: " << total++ << endl;
            cout << "\n\n\t\t\t Student Name: " << name << endl;
            cout << "\t\t\t Student Roll No.: " << roll_no << endl;
            cout << "\t\t\t Student fee: " << fee << endl;
            cout << "\t\t\t Student Email Id.: " << email_id << endl;
            cout << "\t\t\t Student Contact No.: " << contact_no << endl;
            cout << "\t\t\t Student Address: " << address << endl;
            file >> name >> roll_no >> course >> fee >> email_id >> contact_no >> address;
        }
        /*if (total == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }*/
    }
    file.close();
    	break;
    case 4:
    	system("cls");
    		cout << "\n-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------- MCA --------------------------------------------------" << endl;
    	file.open("mca.txt", ios::in);
 
    if (!file)
    {
        /* code */
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();
    }
    else
    {
        file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
      
        while (!file.eof())
        {
           // cout << "\n\n\t\t\t Student No.: " << total++ << endl;
            cout << "\n\n\t\t\t Student Name: " << name << endl;
            cout << "\t\t\t Student Roll No.: " << roll_no << endl;
            cout << "\t\t\t Student fee: " << fee << endl;
            cout << "\t\t\t Student Email Id.: " << email_id << endl;
            cout << "\t\t\t Student Contact No.: " << contact_no << endl;
            cout << "\t\t\t Student Address: " << address << endl;
            file >> name >> roll_no >> course >> fee >> email_id >> contact_no >> address;
        }
        /*if (total == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }*/
    }
    file.close();
    	break;
	}
    
}
void student::set_fees()
{
	system("cls");
    time_t timetoday;
    time(&timetoday);
    cout << asctime(localtime(&timetoday));
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Fee Structures ------------------------------------------" << endl;
    fstream fil;
    cout << "\t\t\tEnter the fee of BCA : ";
    while(!(cin >> bca)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    }
    cout << "\t\t\tEnter the fee of BIT : ";
    while(!(cin >> bit)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    }
    cout << "\t\t\tEnter the fee of PGDCA : ";
    while(!(cin >> pgdca)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    }
    cout << "\t\t\tEnter the fee of MCA : ";
    while(!(cin >> mca)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    }
    fil.open("studentfee.txt", ios::app | ios::out);
    fil << " " << bca << " " << bit << " " << pgdca <<" "<< mca  << "\n";
    cout<<"\t\t\tThe Fee has been sucessfully recorded.."<<endl;
    fil.close();
}
void student::get_fees()
{
	system("cls");
    fstream fil;  
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Fee Table --------------------------------------------" << endl;
    fil.open("studentfee.txt", ios::in);
    if (!fil)
    {
        /* code */
        cout << "\n\t\t\tNo Data Is Present...";
        fil.close();
    }
    else
    {
        fil >> bca >> bit >> pgdca >> mca;
        while (!fil.eof())
        {
            cout << "\t\t\t BCA : " << bca << endl;
            cout << "\t\t\t BIT : " << bit << endl;
            cout << "\t\t\t PGDCA : " << pgdca << endl;
            cout << "\t\t\t MCA : " <<mca << endl;
           fil >> bca >> bit >> pgdca >> mca;

        }
        
    }
    fil.close();
}


void student::modify() // Modify Students Details
{
    system("cls");
    time_t timetoday;
        time(&timetoday);
        cout << asctime(localtime(&timetoday));
    fstream file, file1;
    string namee;
    int choice;
    int found = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Modify Details ------------------------------------------" << endl;
    cout<<"\t\t\t 1.BCA";
    cout<<"\t\t\t 2.BIT";
    cout<<"\t\t\t 3.PGDCA";
    cout<<"\t\t\t 4.MCA";
    cout << "\t\t\tEnter a choice ";
    cin >> choice;
    switch(choice){
    case 1:
    	system("cls");
    	cout << "\n-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------- BCA --------------------------------------------------" << endl;
         file.open("bca.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\n\t\tEnter Name of Student which you want to Modify: ";
        while (std::getline(std::cin, namee))
    {
        std::stringstream ss(namee);
        if (ss >> d == false && namee != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
        file1.open("record.txt", ios::app | ios::out);
        file >> name >> roll_no >> fee>> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (namee != name)

                file1 << " " << name << " " << roll_no << " " << fee << " " << email_id << " " << contact_no << " " << address << "\n";
            else
            {
                cout << "\n\t\t\tEnter Name: ";
                while (std::getline(std::cin, name))
    {
        std::stringstream ss(name);
        if (ss >> d == false && name != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
                cout << "\t\t\tEnter Roll No.: ";
                while(!(cin >> roll_no)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
                cout << "\t\t\t Student fee: ";
               while(!(cin >> fee)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
                cout << "\t\t\tEnter Email Id: ";
                cin >> email_id;
                cout << "\t\t\tEnter Contact No.: ";
                while(!(cin >> contact_no)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
                cout << "\t\t\tEnter Address: ";
                fflush(stdin);
                while (std::getline(std::cin, address))
    {
        std::stringstream ss(address);
        if (ss >> d == false && address != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
         cout << "\n\t\t\tInvalid input.  Try again: ";
        //std::cout << "Error!" << std::endl;
    }
                file1 << " " << name << " " << roll_no << " "<< fee << " " << email_id << " " << contact_no << " " << address << "\n";
                found++;
            }
            file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
            if (found == 0)
            {
                cout << "\n\n\t\t\t Student Name Not Found....";
            }
        }
        file1.close();
        file.close();
        remove("bca.txt");
        rename("record.txt", "bca.txt");
    }
        break;
    case 2:
    	system("cls");
    		cout << "\n-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------- BIT --------------------------------------------------" << endl;
        file.open("bit.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\n\t\tEnter Name of Student which you want to Modify: ";
        cin >> namee;
        file1.open("record.txt", ios::app | ios::out);
        file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (namee != name)

                file1 << " " << name << " " << roll_no << " " << fee << " " << email_id << " " << contact_no << " " << address << "\n";
            else
            {
                cout << "\n\t\t\tEnter Name: ";
                while (std::getline(std::cin, name))
    {
        std::stringstream ss(name);
        if (ss >> d == false && name != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
                cout << "\t\t\tEnter Roll No.: ";
                while(!(cin >> roll_no)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
                cout << "\t\t\t Student fee: ";
                while(!(cin >> fee)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
                cout << "\t\t\tEnter Email Id: ";
                cin >> email_id;
                cout << "\t\t\tEnter Contact No.: ";
                while(!(cin >> contact_no)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
                cout << "\t\t\tEnter Address: ";
                while (std::getline(std::cin, name))
    {
        std::stringstream ss(address);
        if (ss >> d == false && address != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        cout << "\n\t\t\tInvalid input.  Try again: ";
        //std::cout << "Error!" << std::endl;
    }
                file1 << " " << name << " " << roll_no << " "<< fee << " " << email_id << " " << contact_no << " " << address << "\n";
                found++;
            }
            file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
            if (found == 0)
            {
                cout << "\n\n\t\t\t Student Name Not Found....";
            }
        }
        file1.close();
        file.close();
        remove("bit.txt");
        rename("record.txt", "bit.txt");
    }
        break;
    case 3:
    	system("cls");
    		cout << "\n-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------- PGDCA --------------------------------------------------" << endl;
    	file.open("pgdca.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\n\t\tEnter Name of Student which you want to Modify: ";
        cin >> namee;
        file1.open("record.txt", ios::app | ios::out);
        file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (namee != name)

                file1 << " " << name << " " << roll_no <<" " << fee << " " << email_id << " " << contact_no << " " << address << "\n";
            else
            {
                cout << "\n\t\t\tEnter Name: ";
                while (std::getline(std::cin, name))
    {
        std::stringstream ss(name);
        if (ss >> d == false && name != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
                cout << "\t\t\tEnter Roll No.: ";
                while(!(cin >> roll_no)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
                     cout << "\t\t\t Student fee: ";
                     while(!(cin >> fee)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
                cout << "\t\t\tEnter Email Id: ";
                cin >> email_id;
                cout << "\t\t\tEnter Contact No.: ";
                while(!(cin >> contact_no)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
                cout << "\t\t\tEnter Address: ";
                while (std::getline(std::cin, address))
    {
        std::stringstream ss(address);
        if (ss >> d == false && address != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        cout << "\n\t\t\tInvalid input.  Try again: ";
        //std::cout << "Error!" << std::endl;
    }
                file1 << " " << name << " " << roll_no << " " << fee << " " << email_id << " " << contact_no << " " << address << "\n";
                found++;
            }
            file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
            if (found == 0)
            {
                cout << "\n\n\t\t\t Student Name Not Found....";
            }
        }
        file1.close();
        file.close();
        remove("pgdca.txt");
        rename("record.txt", "pgdca.txt");
    }
    	break;
    case 4:
    	system("cls");
    		cout << "\n-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------- MCA --------------------------------------------------" << endl;
    	file.open("mca.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\n\t\tEnter Name of Student which you want to Modify: ";
        cin >> namee;
        file1.open("record.txt", ios::app | ios::out);
        file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (namee != name)

                file1 << " " << name << " " << roll_no << " " << fee << " " << email_id << " " << contact_no << " " << address << "\n";
            else
            {
                cout << "\n\t\t\tEnter Name: ";
                while (std::getline(std::cin, name))
    {
        std::stringstream ss(name);
        if (ss >> d == false && name != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
                cout << "\t\t\tEnter Roll No.: ";
                while(!(cin >> roll_no)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
                cout << "\t\t\tEnter Email Id: ";
                cin >> email_id;
                cout << "\t\t\tEnter Contact No.: ";
                while(!(cin >> contact_no)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\t\t\tInvalid input.  Try again: ";
    }
                cout << "\t\t\tEnter Address: ";
                while (std::getline(std::cin, address))
    {
        std::stringstream ss(address);
        if (ss >> d == false && address != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        cout << "\n\t\t\tInvalid input.  Try again: ";
        //std::cout << "Error!" << std::endl;
    }
                file1 << " " << name << " " << roll_no  << " " << fee << " " << email_id << " " << contact_no << " " << address << "\n";
                found++;
            }
            file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
            if (found == 0)
            {
                cout << "\n\n\t\t\t Student Name Not Found....";
            }
        }
        file1.close();
        file.close();
        remove("mca.txt");
        rename("record.txt", "mca.txt");
    }
    	break;
	}
}
void student::feepay() // Modify Students Details
{
    system("cls");
    time_t timetoday;
        time(&timetoday);
        cout << asctime(localtime(&timetoday));
    fstream file, file1;
    int choice;
    string namee;
    //int fee;
    int pay;
    int found = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------------- FEE PAYMENT -----------------------------------------------" << endl;
    cout<<"\t\t\t 1.BCA"; 
    cout<<"\t\t\t 2.BIT";
    cout<<"\t\t\t 3.PGDCA";
    cout<<"\t\t\t 4.MCA";
    cout << "\t\t\tEnter a choice ";
    cin >> choice;
    switch(choice){
    case 1:
    	system("cls");
    		cout << "\n-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------- BCA --------------------------------------------------" << endl;
         file.open("bca.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\nEnter Name of Student to pay fee: ";
        while (std::getline(std::cin, namee))
    {
        std::stringstream ss(namee);
        if (ss >> d == false && namee != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
        file1.open("record.txt", ios::app | ios::out);
        file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (namee != name)

                file1 << " " << name << " " << roll_no << " " << fee << " " << email_id << " " << contact_no << " " << address << "\n";
            else
            {
                 cout << "\nEnter amount to pay fee: ";
                 cin >> pay;
                fee = fee - pay;
                file1 << " " << name << " " << roll_no << " " << fee << " " << email_id << " " << contact_no << " " << address <<"\n";
                found++;
            }
            file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
            if (found == 0)
            {
                cout << "\n\n\t\t\t Student Name Not Found....";
            }
        }
        file1.close();
        file.close();
        remove("bca.txt");
        rename("record.txt", "bca.txt");
    }
        break;
    case 2:
    	system("cls");
    		cout << "\n-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------- BIT --------------------------------------------------" << endl;
        file.open("bit.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\nEnter Name of Student to pay fee: ";
        while (std::getline(std::cin, namee))
    {
        std::stringstream ss(namee);
        if (ss >> d == false && namee != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
        file1.open("record.txt", ios::app | ios::out);
        file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (namee != name)

                file1 << " " << name << " " << roll_no  << " " << fee << " " << email_id << " " << contact_no << " " << address <<"\n";
            else
            {
                 cout << "\nEnter amount to pay fee: ";
                 while(!(cin >> pay)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    }
                fee = fee - pay;
                file1 << " " << name << " " << roll_no << " " << fee << " " << email_id << " " << contact_no << " " << address << "\n";
                found++;
            }
            file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
            if (found == 0)
            {
                cout << "\n\n\t\t\t Student Name Not Found....";
            }
        }
        file1.close();
        file.close();
        remove("bit.txt");
        rename("record.txt", "bit.txt");
    }
        break;
    case 3:
    	system("cls");
    		cout << "\n-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------- PGDCA --------------------------------------------------" << endl;
    	file.open("pgdca.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\nEnter Name of Student to pay fee: ";
        while (std::getline(std::cin, namee))
    {
        std::stringstream ss(namee);
        if (ss >> d == false && name != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
        file1.open("record.txt", ios::app | ios::out);
        file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (namee != name)

                file1 << " " << name << " " << roll_no << " " << fee << " " << email_id << " " << contact_no << " " << address <<"\n";
            else
            {
                 cout << "\nEnter amount to pay fee: ";
                 while(!(cin >> pay)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    }
                fee = fee - pay;
                file1 << " " << name << " " << roll_no << " " << fee << " " << email_id << " " << contact_no << " " << address << "\n";
                found++;
            }
            file >> name >> roll_no  >> fee >> email_id >> contact_no >> address;
            if (found == 0)
            {
                cout << "\n\n\t\t\t Student Name Not Found....";
            }
        }
        file1.close();
        file.close();
        remove("pgdca.txt");
        rename("record.txt", "pgdca.txt");
    }
    	break;
    case 4:
    	system("cls");
    		cout << "\n-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------- MCA --------------------------------------------------" << endl;
    	file.open("mca.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\nEnter Name of Student to pay fee: ";
        while (std::getline(std::cin, namee))
    {
        std::stringstream ss(namee);
        if (ss >> d == false && namee != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
        file1.open("record.txt", ios::app | ios::out);
        file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        while (!file.eof())
        {
            if (namee != name)

                file1 << " " << name << " " << roll_no << " " << fee << " " << email_id << " " << contact_no << " " << address <<"\n";
            else
            {
                 cout << "\nEnter amount to pay fee: ";
                 while(!(cin >> pay)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    }
                fee = fee - pay;
                file1 << " " << name << " " << roll_no << " " << fee << " " << email_id << " " << contact_no << " " << address << "\n";
                found++;
            }
            file >> name >> roll_no  >> fee >> email_id >> contact_no >> address;
            if (found == 0)
            {
                cout << "\n\n\t\t\t Student Name Not Found....";
            }
        }
        file1.close();
        file.close();
        remove("mca.txt");
        rename("record.txt", "mca.txt");
    }
    	break;
	}
    
}

void student::search() // search data of student
{
   system("cls");
    time_t timetoday;
        time(&timetoday);
        cout << asctime(localtime(&timetoday));
    fstream file;
    int choice;
    //int found = 0;
     cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Search Student Details ------------------------------------------" << endl;
    cout<<"\t\t\t 1.BCA";
    cout<<"\t\t\t 2.BIT";
    cout<<"\t\t\t 3.pgdca";
    cout<<"\t\t\t 3.bca";
    cout << "\t\t\tEnter a choice ";
    cin >> choice;
    switch(choice){
    	case 1:
    		system("cls");
    		file.open("bca.txt",ios::in);
    		if(!file)
    		{
              cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
             cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
             cout << "\n\t\t\t No Data Is Present...";
            }
            else
          {
		 string namee; 
	     cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
         cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
         cout << "\n Enter Name of Student Which You Want to Search: ";
         while (std::getline(std::cin, namee))
    {
        std::stringstream ss(namee);
        if (ss >> d == false && namee != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
         file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
         while (!file.eof())
        {
            if (namee == name)
            {
                cout << "\n\t\t\t Student Name: " << name << endl;
                cout << "\t\t\t Student Roll No.: " << roll_no << endl;
                cout << "\t\t\t Student fee paid: " << fee << endl;
                cout << "\t\t\t Student Email Id.: " << email_id << endl;
                cout << "\t\t\t Student Address: " << address << endl;
                getche();
                //found++;
            }
            file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        }
       /* if (found == 0)
        {
            cout << "\n\t\t\tStudent Name Not Found...";
        }*/
        file.close();
        }
		break;	
            	
		
		
			case 2:
				system("cls");
    		file.open("bit.txt",ios::in);
    		if(!file)
    		{
              cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
             cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
             cout << "\n\t\t\t No Data Is Present...";
            }
            else
          {
		 string namee; 
	     cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
         cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
         cout << "\n Enter Name of Student Which You Want to Search: ";
         while (std::getline(std::cin, namee))
    {
        std::stringstream ss(namee);
        if (ss >> d == false && namee != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
         file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
         while (!file.eof())
        {
            if (namee == name)
            {
                cout << "\n\t\t\t Student Name: " << name << endl;
                cout << "\t\t\t Student Roll No.: " << roll_no << endl;
                cout << "\t\t\t Student fee paid: " << fee << endl;
                cout << "\t\t\t Student Email Id.: " << email_id << endl;
                cout << "\t\t\t Student Address: " << address << endl;
                //found++;
            }
            file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        }
        /*if (found == 0)
        {
            cout << "\n\t\t\tStudent Name Not Found...";
        }*/
        file.close();
        }
		break;
		case 3:
			system("cls");
    		file.open("pgdca.txt",ios::in);
    		if(!file)
    		{
              cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
             cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
             cout << "\n\t\t\t No Data Is Present...";
            }
            else
          {
		 string namee; 
	     cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
         cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
         cout << "\n Enter Name of Student Which You Want to Search: ";
         while (std::getline(std::cin, namee))
    {
        std::stringstream ss(namee);
        if (ss >> d == false && namee != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
         file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
         while (!file.eof())
        {
            if (namee == name)
            {
                cout << "\n\t\t\t Student Name: " << name << endl;
                cout << "\t\t\t Student Roll No.: " << roll_no << endl;
                cout << "\t\t\t Student fee paid: " << fee << endl;
                cout << "\t\t\t Student Email Id.: " << email_id << endl;
                cout << "\t\t\t Student Address: " << address << endl;
                //found++;
            }
            file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        }
        /*if (found == 0)
        {
            cout << "\n\t\t\tStudent Name Not Found...";
        }*/
        file.close();
        }
        break;
        case 4:
        	system("cls");
    		file.open("mca.txt",ios::in);
    		if(!file)
    		{
              cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
             cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
             cout << "\n\t\t\t No Data Is Present...";
            }
            else
          {
		 string namee; 
	     cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
         cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
         cout << "\n Enter Name of Student Which You Want to Search: ";
         while (std::getline(std::cin, namee))
    {
        std::stringstream ss(namee);
        if (ss >> d == false && namee != "") //false because can convert to double
        {
            //std::cout << "its characters!" << std::endl;
            break;
        }
        //std::cout << "Error!" << std::endl;
    }
         file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
         while (!file.eof())
        {
            if (namee == name)
            {
                cout << "\n\t\t\t Student Name: " << name << endl;
                cout << "\t\t\t Student Roll No.: " << roll_no << endl;
                cout << "\t\t\t Student fee paid: " << fee << endl;
                cout << "\t\t\t Student Email Id.: " << email_id << endl;
                cout << "\t\t\t Student Address: " << address << endl;
                //found++;
            }
            file >> name >> roll_no >> fee >> email_id >> contact_no >> address;
        }
        /*if (found == 0)
        {
            cout << "\n\t\t\tStudent Name Not Found...";
        }*/
        file.close();
        }
		break;		
}
}

void student::deleted()
{
    system("cls");
    time_t timetoday;
        time(&timetoday);
        cout << asctime(localtime(&timetoday));
    fstream file, file1;
    int choice;
    int found = 0;
    int roll;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Delete Student Details ------------------------------------------" << endl;
    cout<<"\t\t\t 1.BCA";
    cout<<"\t\t\t 2.BIT";
    cout<<"\t\t\t 3.pgdca";
    cout<<"\t\t\t 3.bca";
    cout << "\t\t\tEnter a choice ";
    cin >> choice;
    switch(choice){
    case 1:
         file.open("bca.txt", ios::in);
    cout << "\nEnter Roll No. of Student which you want Delete Data: ";
    cin >> roll;
    file1.open("record.txt", ios::app | ios::out);
    file >> name >> roll_no >> course >> email_id >> contact_no >> address;
    while (!file.eof())
    {
        if (roll != roll_no)
            {
                file1 << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
            }
        else
            {
                found++;
                cout << "\n\t\t\tSuccessfully Deleted";
            }
            file >> name >> roll_no >> course >> email_id >> contact_no >> address;
    }
        if (found == 0)
        {
            cout << "\n\t\t\t Student Roll NO. Not Found....";
        }
        file1.close();
        file.close();
        remove("bca.txt");
        rename("record.txt", "bca.txt");
        break;
    case 2:
        file.open("bit.txt", ios::in);
    cout << "\nEnter Roll No. of Student which you want Delete Data: ";
    cin >> roll;
    file1.open("record.txt", ios::app | ios::out);
    file >> name >> roll_no >> course >> email_id >> contact_no >> address;
    while (!file.eof())
    {
        if (roll != roll_no)
            {
                file1 << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
            }
        else
            {
                found++;
                cout << "\n\t\t\tSuccessfully Deleted";
            }
            file >> name >> roll_no >> course >> email_id >> contact_no >> address;
    }
        if (found == 0)
        {
            cout << "\n\t\t\t Student Roll NO. Not Found....";
        }
        file1.close();
        file.close();
        remove("bit.txt");
        rename("record.txt", "bit.txt");
        break;
    case 3:
    	file.open("pgdca.txt", ios::in);
    cout << "\nEnter Roll No. of Student which you want Delete Data: ";
    cin >> roll;
    file1.open("record.txt", ios::app | ios::out);
    file >> name >> roll_no >> course >> email_id >> contact_no >> address;
    while (!file.eof())
    {
        if (roll != roll_no)
            {
                file1 << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
            }
        else
            {
                found++;
                cout << "\n\t\t\tSuccessfully Deleted";
            }
            file >> name >> roll_no >> course >> email_id >> contact_no >> address;
    }
        if (found == 0)
        {
            cout << "\n\t\t\t Student Roll NO. Not Found....";
        }
        file1.close();
        file.close();
        remove("pgdca.txt");
        rename("record.txt", "pgdca.txt");
    	break;
    case 4:
    	file.open("mca.txt", ios::in);
    cout << "\nEnter Roll No. of Student which you want Delete Data: ";
    cin >> roll;
    file1.open("record.txt", ios::app | ios::out);
    file >> name >> roll_no >> course >> email_id >> contact_no >> address;
    while (!file.eof())
    {
        if (roll != roll_no)
            {
                file1 << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
            }
        else
            {
                found++;
                cout << "\n\t\t\tSuccessfully Deleted";
            }
            file >> name >> roll_no >> course >> email_id >> contact_no >> address;
    }
        if (found == 0)
        {
            cout << "\n\t\t\t Student Roll NO. Not Found....";
        }
        file1.close();
        file.close();
        remove("mca.txt");
        rename("record.txt", "mca.txt");
    	break;
	}
    
    
}
main()
{
	login();
    student project;
    project.menu();
    return 0;
}          
        




