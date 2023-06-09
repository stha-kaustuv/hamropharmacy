#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
struct medicine
{
int id;
int price;
int quantity;
   char medicnename[100];
   char company[100];
   char mfgdate[11];
   char expdate[11];
   char info[5000];
  }m[100];
  
 void salemedicine(int number);
 void enterinfoaboutmedicine(int number);
 void stockofmedicine(int number);
 void knowinfoaboutmedicine(int number);
 void addmedicineinstore(int number,struct medicine m[]);
 void deletemedicinestore(int number);
 void changemedicinedetails(int number);
  void sales(int number);

int main(){
   int i;
   int number=0;
   int found;
	int c;
	int choice;
	int check;
	int id;
	time_t t;
	time(&t);
	printf("\t\t\t\t\t\t\t\t\t\t\t-%s\n\n",ctime(&t));
	printf("\t\t**********************************WELCOME TO HAMRO PHARMACY***********************************\n");
	char ch;
	char username[20];
	char password[20];
	int d;	
	printf("\n\n\n");
	printf("\t\t\t      **************************LOGIN PAGE********************************\n\n\n\n");
	printf("\t\t\t\t\t\t\tUSERNAME:\n\n");
	printf("\t\t\t\t\t\t\t");scanf("%s",&username);
	printf("\n\n\n");
	printf("\t\t\t\t\t\t\tPASSWORD:\n\n");
	printf("\t\t\t\t\t\t\t");/*scanf("%s",&password);*/
	while((ch = getch())!=13){
		password[i] = ch;
		i++;
		printf("*");
	}
	password[i]= '\0';
	printf("\n\n\n");

	printf("\t\t\t      ********************************************************************\n\n\n\n");
	if((strcmp(username,"admin")==0) && strcmp(password,"1234")==0)
	{
		//if(strcmp(password,"1234")==0)
		//{
			system("cls");
	do{
	printf("\t\t\t\t\t\t\t\t\t\t\t-%s\n\n",ctime(&t));
	printf("*****************************************WELCOME TO HAMRO PHARMACY***********************************\n\n\n");
	printf("\t\t Choice\n\n");
   printf("\t\t\t1 - Sale Medicine\n\n");
   printf("\t\t\t2 - Search Medicine By Info\n\n");
   printf("\t\t\t3 - Stock of Medicine in Store\n\n");
   printf("\t\t\t4 - Medicine Information\n\n");
   printf("\t\t\t5 - Add Medicine\n\n");
   printf("\t\t\t6 - Delete a Medicine\n\n");
   printf("\t\t\t7 - Update Stock\n\n");
   printf("\t\t\t8 - Sales Record\n\n");
   printf("\t\t\t9 - Exit program\n\n\n");
   printf("*****************************************************************************************************\n");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:
    	
    	system("cls");
    	printf("\t\t\t\t\t\t\t\t\t\t\t-%s\n\n",ctime(&t));
    	printf("\t\t**********************************WELCOME TO HAMRO PHARMACY***********************************\n\n\n");
    {
     salemedicine(number+1);
     break;
}
     case 2:
     	system("cls");
     	printf("\t\t\t\t\t\t\t\t\t\t\t-%s\n\n",ctime(&t));
     	printf("\t\t**********************************WELCOME TO HAMRO PHARMACY***********************************\n");
    {
     enterinfoaboutmedicine(number+1);
     break;
    }
      case 3:
      	system("cls");
      	printf("\t\t\t\t\t\t\t\t\t\t\t-%s\n\n",ctime(&t));
      	printf("\t\t**********************************WELCOME TO HAMRO PHARMACY***********************************\n");
    {
      stockofmedicine(number+1);
      break;
    }
      case 4:
      	system("cls");
      	printf("\t\t\t\t\t\t\t\t\t\t\t-%s\n\n",ctime(&t));
      	printf("\t\t**********************************WELCOME TO HAMRO PHARMACY***********************************\n");
      {
        knowinfoaboutmedicine(number+1);
       break;
      }
      case 5:
      	system("cls");
      	printf("\t\t\t\t\t\t\t\t\t\t\t-%s\n\n",ctime(&t));
      	printf("\t\t**********************************WELCOME TO HAMRO PHARMACY***********************************\n");
      {
       ++number;
       addmedicineinstore(number,m);
       break;
      }
      case 6:
      	system("cls");
      	printf("\t\t\t\t\t\t\t\t\t\t\t-%s\n\n",ctime(&t));
      	printf("\t\t**********************************WELCOME TO HAMRO PHARMACY***********************************\n");
      {
        deletemedicinestore(number+1);
       break;
      }
      case 7:
      	system("cls");
      	printf("\t\t\t\t\t\t\t\t\t\t\t-%s\n\n",ctime(&t));
      	printf("\t\t**********************************WELCOME TO HAMRO PHARMACY***********************************\n");
      {
        changemedicinedetails(number+1);
       break;
      }
      case 8:
      	system("cls");
      	printf("\t\t\t\t\t\t\t\t\t\t\t-%s\n\n",ctime(&t));
      	printf("\t\t**********************************WELCOME TO HAMRO PHARMACY***********************************\n");
      {
        sales(number+1);
       break;
      }
      case 9:
      	exit(0);
       break;
      
 }
 
		
printf("\n\t\tTo Continue with other Options Enter 1 Else any other number: ");
scanf("%d",&c);
system("cls");
   }while(c==1);
//}

		}
		else
		{
	printf("\t\t\t\tUsername or Password  wrong! ! ! Enter the valid info.\n");
	printf("press 1 to re-enter a username password else any other number\n");
scanf("%d",&d);
if(d==1)
{
	//goto label;
	main();
}
}
}

void salemedicine(int number)
 {
 	FILE *fp,*fp1,*fp3;
 	int id;
	 int check;
	 int i;
	 int quantity;
	 int found=0;
 	char name[100];
 	char info[100];
 	time_t t;
	time(&t);
 	
 	printf("\t\tEnter 1 if you know ID else any other number to enter Name of Medicine: ");
  fflush(stdin);
  scanf("%d",&check);
  if(check==1)
  {
   printf("\n\t\tEnter Id to sale Medicine: ");
   fflush(stdin);
   scanf("%s",&name);
   fp = fopen("stock.txt","r");
   fp3 = fopen("sales.txt","w");
   fp1 = fopen("temp.txt","w");
   for(i=0;i<number;i++)
   {
   while(fread(&m[i],sizeof(m[i]),1,fp)>0)
   {

	 if(strcmp(m[i].medicnename,name)==0)
	{ 
	found = 1;
	int c;
	printf("\n\t\t\tThese are the details of Medicine-");
	printf("\n\n\t\t\tName: %s\n",m[i].medicnename);
		printf("\t\t\tPrice: %d\n",m[i].price);
		printf("\t\t\tAvailable quantity in file: %d\n",m[i].quantity);
		printf("\t\t\tComapny: %s\n",m[i].company);
		printf("\t\t\tMFG Date(dd/mm/yyyy):%s\n",m[i].mfgdate);
		printf("\t\t\tExp Date(dd/mm/yyyy):%s\n",m[i].expdate);
		printf("\t\t\tInformation of medicine: %s\n",m[i].info);
		printf("\n\t\tDo you want to sale %s?\n\t\t\tIf Yes Enter 1 ese any other number: ",m[i].medicnename);
		fflush(stdin);
		scanf("%d",&c);
		if(c==1)
		{
			printf("\n\t\tEnter Quantity to sale: ");
			scanf("%d",&quantity);
			
			if(m[i].quantity>quantity)
			{
				printf("\n\t\tEnter a customer name: ");
      	        fflush(stdin);
      	        gets(name);
				printf("*********************************************************************\n\n");
				printf("\t\tBILL\n");
				printf("\n\t\tDate/Time: %s",ctime(&t));
				printf("\t\tCostumer Name: %s\n",name);
				printf("\t\tMedicine Name: %s \n",m[i].medicnename);
				printf("\t\tQuantity Sold: %d\n",quantity);
				printf("\t\tRate per piece=%d\n",m[i].price);
				printf("\t\tTotal Price to be paid=%d\n\n",quantity*m[i].price);
				printf("*********************************************************************\n\n");
				m[i].quantity = m[i].quantity - quantity;
				fwrite(&m[i],sizeof(m[i]),1,fp3);
       
				
			}
			else
			{
				printf("\n\t\tPlease Enter quantity below Available Quantity\n");
			}
		
		}
		
		 break;
		
	}
}

fwrite(&m[i],sizeof(m[i]),1,fp1);
}
fclose(fp);
  fclose(fp1);
  if(found){
  fp1 = fopen("temp.txt","r");
   while(fread(&m[i],sizeof(m[i]),1,fp1)>0){
   	fwrite(&m[i],sizeof(m[i]),1,fp);
   }
   fclose(fp);
  fclose(fp1);
if(found==0)
{
	printf("\n\t\t\tEnter Id Not found\n");
}

}
}
//else
//{
//	printf("\t\tEnter Name to Search and sale: ");
//	fflush(stdin);
//    gets(name);
//    fp = fopen("stock.txt","r");
//    fp1 = fopen("temp.txt","w");
//    for(i=0;i<number;i++)
//   {
//   	while(fread(&m[i],sizeof(m[i]),1,fp)>0)
//   {
//   	 if(strcmp(m[i].medicnename,name)==0)
//    {
//     found=1;
//     int c;
//     printf("\n\t\t\tThese are the details of Medicine-");
//     printf("\n\n\t\t\tName: %s\n",m[i].medicnename);
//		printf("\t\t\tPrice: %d\n",m[i].price);
//		printf("\t\t\tAvailable quantity in file: %d\n",m[i].quantity);
//		printf("\t\t\tComapny: %s\n",m[i].company);
//		printf("\t\t\tMFG Date(dd/mm/yyyy):%s\n",m[i].mfgdate);
//		printf("\t\t\tExp Date(dd/mm/yyyy):%s\n",m[i].expdate);
//     printf("\n\t\tDo you want to sale %s? \n\t\t\tIf Yes Enter 1 else any other number: ",m[i].medicnename);
//     fflush(stdin);
//     scanf("%d",&c);
//     if(c==1)
//     {
//      printf("\n\t\tEnter Quantity to Sale: ");
//      scanf("%d",&quantity);
//      if(m[i].quantity>quantity)
//      {
//      	printf("\n\t\tEnter a customer name: ");
//      	fflush(stdin);
//      	gets(name);
//      	//scanf()
//      		/*printf("Total Price to be paid=%d\n",quantity*m[i].price);*/
//				printf("*********************************************************************\n\n");
//				//printf("\tctime(&t)");
//				printf("\n\n\t\tBILL\n\n");
//				printf("\tCostumer Name: %s\n",name);
//				printf("\tMedicine Name: %s \n",m[i].medicnename);
//				printf("\tQuantity In file: %d\n",m[i].quantity);
//				printf("\tRate per piece=%d\n",quantity*m[i].price);
//				 printf("\tTotal Price to be paid=%d\n\n",quantity*m[i].price);
//				printf("*********************************************************************\n\n");
//        m[i].quantity = m[i].quantity - quantity;
//        	fwrite(&m[i],sizeof(m[i]),1,fp3);
//        
//      }
//      else{
//       printf("\n\t\tPlease Enter quantity below Available Quantity\n");
//      }
//     }
//     break;
//   }
//}
//}
//fwrite(&m[i],sizeof(m[i]),1,fp1);
//}
//fclose(fp);
//  fclose(fp1);
//  if(found){
//  fp1 = fopen("temp.txt","r");
//  fp = fopen("stock.txt","w");
//   while(fread(&m[i],sizeof(m[i]),1,fp1)>0){
//   	fwrite(&m[i],sizeof(m[i]),1,fp);
//   }
//   fclose(fp);
//  fclose(fp1);
//if(found==0)
//{
//	printf("Entered Name Not Found\n");
//}
//}
fclose(fp);
}


 void addmedicineinstore(int number,struct medicine m[])
 {
  FILE *fp,*fp1;
  fp = fopen("stock.txt","a");
  char name[100];
  char ch;
  char info[100];
  int i;
  do{
  printf("\n\t\t\tEnter Medicine Id:");
  scanf("%d",&(m[number].id));
  
  fp1 = fopen("stock.txt","r");
  
  for(i=0;i<number;i++){
  while(fread(&m[i],sizeof(m[i]),1,fp1)>0){
	while(m[i].id==m[number].id){
		printf("\n\t\t\t\tId %d already exits\n",m[number].id);
	printf("\n\t\t\tEnter Medicine Id: ");
    scanf("%d",&(m[number].id));
}
}
}
fclose(fp1);
  fflush(stdin);
  printf("\n\t\t\tEnter Medicine Name: ");
  fflush(stdin);
  gets(name);
  strcpy(m[number].medicnename,name);
  printf("\n\t\t\tEnter Company Name: ");
  fflush(stdin);
  gets(m[number].company);
  printf("\n\t\t\tEnter Manufactured Date (dd/mm/yyyy):");
  fflush(stdin);
  gets(m[number].mfgdate);
  printf("\n\t\t\tEnter Expiry Date (dd/mm/yyyy): ");
  fflush(stdin);
  gets(m[number].expdate);
  printf("\n\t\t\tEnter Quantity in file: ");
  fflush(stdin);
  scanf("%d",&(m[number].quantity));
  printf("\n\t\t\tEnter Price per piece: ");
  fflush(stdin);
  scanf("%d",&(m[number].price));
  strcpy(m[number].info,"");
  fflush(stdin);
  printf("\n\t\t\tEnter Information of medicine: ");
  gets(m[number].info);
  fwrite(&m[number],sizeof(m[number]),1,fp);
  printf("\n\t\t Do you want to add another medicine(y/n)?: ");
  
  ch = getche();
  printf("\n");
  printf("\n\t\tMedicine with id %d Added Successfully\n",m[number].id);
  printf("\n");
}while(ch=='y'||ch=='Y');
  /*printf("Medicine with id %d Added Successfully\n",m[number].id);*/
  fclose(fp);
 }
 
 void stockofmedicine(int number)
 {
 	FILE *fp;
 	int id;
	 int check;
	 int i;
	 int quantity;
	 int found=0;
 	char name[100];
   
   /*fp = fopen("stock.txt","r");*/
   if((fp = fopen("stock.txt","r"))==NULL){
   	printf("\t\tMEDICINE IS NOT AVAILABLE\n");
   	printf("\t\tPLEASE RE-STOCK\n");
   }
   else{
   if(number!=0){
   printf("\n\t\tMedicines in stock\n");
   for(i=0;i<number;i++){
   while(fread(&m[i],sizeof(m[i]),1,fp)>0){
 
        printf("\n\t\tId: %d\n",m[i].id);
		printf("\t\tName: %s\n",m[i].medicnename);
		printf("\t\tPrice: %d\n",m[i].price);
		printf("\t\tAvailable quantity in file: %d\n",m[i].quantity);
		printf("\t\tComapny: %s\n",m[i].company);
		printf("\t\tMFG Date(dd/mm/yyyy):%s\n",m[i].mfgdate);
		printf("\t\tExp Date(dd/mm/yyyy):%s\n",m[i].expdate);
		
}
}
}

}
fclose(fp);
}


void knowinfoaboutmedicine(int number){
	FILE *fp;
   int i;
   int found=0;
  char name[100];
  if((fp = fopen("stock.txt","r"))==NULL){
   	printf("\t\tMEDICINE IS NOT AVAILABLE\n");
   	printf("\t\tPLEASE RE-STOCK\n");
   }
   else{
  printf("\n\t\tEnter Name of the medicine you want to see Review and Info: ");
  fflush(stdin);
  gets(name);
  for(i=0;i<number;i++)
  {
  	while(fread(&m[i],sizeof(m[i]),1,fp)>0)
   {
   if(strcmp(m[i].medicnename,name)==0)
   {
    found=1;
    printf("\n\t\t\tThese are the details of Medicine\n");
    	printf("\t\t\tName: %s\n",m[i].medicnename);
		printf("\t\t\tPrice: %d\n",m[i].price);
		printf("\t\t\tAvailable quantity in file: %d\n",m[i].quantity);
		printf("\t\t\tComapny: %s\n",m[i].company);
		printf("\t\t\tMFG Date(dd/mm/yyyy):%s\n",m[i].mfgdate);
		printf("\t\t\tExp Date(dd/mm/yyyy):%s\n",m[i].expdate);
		
    if(strcmp(m[i].info,"")!=0)
    {
     printf("\t\t\tReview or Info=%s\n",m[i].info);
    }
    else
    {
     printf("\t\t\tReview or Info=Not Available\n");
    }   
   }
}
  }
  if(found==0)
  {
   printf("Entered Name Not Found\n");
  }
 }
}

 /*void deletemedicinestore(int number)
 {
  FILE *fp;
  int id;
  int i;
  int found=0;
  int num;
  if((fp = fopen("stock.txt","r"))==NULL){
   	printf("MEDICINE IS NOT AVAILABLE\n");
   }
   else{
  printf("Enter Id to be deleted\n");
  fflush(stdin);
  scanf("%d",&id);
  for(i=0;i<number;i++)
  {
   if(m[i].id==id)
   {
    found=1;
    m[i].id=0;
    m[i].price=0;
    m[i].quantity=0;
    strcpy(m[i].medicnename,"");
    strcpy(m[i].company,"");
    strcpy(m[i].mfgdate,"");
    strcpy(m[i].expdate,"");
    strcpy(m[i].info,"");
    num=i;
    break;
   }
  }
}
  if(found==1)
  {
   printf("Medicine with %d is Deleted Successfully\n",id);
  }
 }*/
 void deletemedicinestore(int number)
 {
  FILE *fp;
  FILE *fp1;
  int id;
  int i;
  int found=0;
  int num;
  int check;
  char name[200];
  fp = fopen("stock.txt","r");
  fp1 = fopen("temp.txt","w");
  printf("\n\t\tEnter 1 if you know ID else any other number to enter Name of Medicine: ");
  fflush(stdin);
  scanf("%d",&check);
  if(check==1){
  
  printf("\n\t\t\tEnter Id to be deleted: ");
  fflush(stdin);
  scanf("%d",&id);
while(fread(&m[i],sizeof(m[i]),1,fp))
   {
   if(m[i].id==id)
   {
    found=1;
}
else
{
	fwrite(&m[i],sizeof(m[i]),1,fp1);
}
}
fclose(fp);
fclose(fp1);
  if(found==1)
  {
  	fp1 = fopen("temp.txt","r");
  	fp = fopen("stock.txt","w");
   printf("\n\t\t\tMedicine with id %d is Deleted Successfully\n",id);
   while(fread(&m[i],sizeof(m[i]),1,fp1)){
   	fwrite(&m[i],sizeof(m[i]),1,fp);
   }
}
   fclose(fp);
  fclose(fp1);
}
else{
	  printf("\n\t\t\tEnter medicine name to be deleted: ");
  fflush(stdin);
  gets(name);
while(fread(&m[i],sizeof(m[i]),1,fp))
   {
   if(strcmp(m[i].medicnename,name)==0)
   {
    found=1;
}
else
{
	fwrite(&m[i],sizeof(m[i]),1,fp1);
}
}
fclose(fp);
fclose(fp1);
  if(found==1)
  {
  	fp1 = fopen("temp.txt","r");
  	fp = fopen("stock.txt","w");
   printf("\n\t\t\tMedicine with name %s is Deleted Successfully\n",name);
   while(fread(&m[i],sizeof(m[i]),1,fp1)){
   	fwrite(&m[i],sizeof(m[i]),1,fp);
   }
}
   fclose(fp);
  fclose(fp1);
}
}
  

void changemedicinedetails(int number)
 {
  FILE *fp;
  FILE *fp1;
  int id;
  int quantity;
  int choice;
  int c;
  int i;
  int found=0;
  int check;
  char name[200];
  fp = fopen("stock.txt","r");
  fp1 = fopen("temp.txt","w");
  printf("\n\t\tEnter 1 if you know ID else any other number to enter Name of Medicine: ");
  fflush(stdin);
  scanf("%d",&check);
  if(check==1){
  printf("\n\t\tEnter id to change Details: ");
  fflush(stdin);
  scanf("%d",&id);
  for(i=0;i<number;i++)
  {
  	while(fread(&m[i],sizeof(m[i]),1,fp)>0)
   {
   if(m[i].id==id && m[i].id!=0)
   {
   	found=1;
    do
    {
        printf("Enter\n1 - Change Quantity in file ");
		printf("\n2 - Change Price ");
		printf("\n3 - Change Name");
		printf("\n4 - Change Company");
		printf("\n5 - Change Manufaturing Date(dd/mm/yyyy)");
		printf("\n6 - Change Expiry Date(dd/mm/yyyy)");
		printf("\n7 - Change Info");
		printf("\n\n Choose(1,2,3,4,5,6,7) or any other number to exit: ");
        fflush(stdin);
        scanf("%d",&choice); 
        if(choice==1)
        {
         int quantity;
         printf("\n\t\tEnter Quantity to be changed: ");
         fflush(stdin);
         scanf("%d",&quantity);
         m[i].quantity=quantity;
         printf("\n\t\tQuantity changed Successfully\n");
        }
        if(choice==2)
        {
         int price;
         printf("\n\t\tEnter Price to be changed: ");
         fflush(stdin);
         scanf("%d",&price);
         m[i].price=price;
         printf("\n\t\tPrice changed Successfully\n");
        }
        if(choice==3)
        {
         char name[100];
         printf("\n\t\tEnter Name to be changed:");
         fflush(stdin);
         gets(name);
         strcpy(m[i].medicnename,name);
         printf("\n\t\tMedicine Name changed Successfully\n");
        }
        if(choice==4)
        {
         char company[100];
         printf("\n\t\tEnter company to be changed: ");
         fflush(stdin);
         gets(company);
         strcpy(m[i].company,company);
         printf("\n\t\tCompany changed Successfully\n");
        }
        if(choice==5)
        {
         char mfg[11];
         printf("\n\t\tEnter Manufacturing date to be changed: ");
         fflush(stdin);
         gets(mfg);
         strcpy(m[i].mfgdate,mfg);
         printf("\n\t\tManufacturing Date changed Successfully\n");
        }
        if(choice==6)
        {
         char exp[11];
         printf("\n\t\tEnter Expiry date to be changed:");
         fflush(stdin);
         gets(exp);
         strcpy(m[i].expdate,exp);
         printf("\n\t\tExpiry Date changed Successfully\n");
        }
        if(choice==7)
        {
         char info[100];
         printf("\n\t\tEnter Info to be changed(Less than 100 Characters)\n");
         fflush(stdin);
         gets(info);
         strcpy(m[i].info,info);
         printf("\n\t\tInfo changed Successfully\n");
        }
        if(choice<=0 && choice>7)
        {
         printf("\n\t\tEnter valid Choice\n");
        }
        printf("\n\t\tEnter 1 to Change other Details Else any other number: ");
        fflush(stdin);
        scanf("%d",&c);
    }while(c==1);
    
    break;
   }
    
}
fwrite(&m[i],sizeof(m[i]),1,fp1);
}
 
  fclose(fp);
  fclose(fp1);
  if(found){
  fp1 = fopen("temp.txt","r");
  fp = fopen("stock.txt","w");
   while(fread(&m[i],sizeof(m[i]),1,fp1)>0){
   	fwrite(&m[i],sizeof(m[i]),1,fp);
   }
   fclose(fp);
  fclose(fp1);
}
else
{
	printf("\n\t\t ID NOT FOUND\n");
}
}
else{
	printf("\n\t\tEnter medicine name to change Details: ");
  fflush(stdin);
  gets(name);
  for(i=0;i<number;i++)
  {
  	while(fread(&m[i],sizeof(m[i]),1,fp)>0)
   {
   if(strcmp(m[i].medicnename,name)==0)
   {
   	found=1;
    do
    {
        printf("Enter\n1 - Change Quantity in file");
		printf("\n2 - Change Price");
		printf("\n3 - Change Name");
		printf("\n4 - Change Company");
		printf("\n5 - Change Manufaturing Date(dd/mm/yyyy)");
		printf("\n6 - Change Expiry Date(dd/mm/yyyy)");
		printf("\n7 - Change Info");
		printf("\n\nChoose(1,2,3,4,5,6,7) or any other number to exit: ");
        fflush(stdin);
        scanf("%d",&choice); 
        if(choice==1)
        {
         int quantity;
         printf("\n\t\tEnter Quantity to be changed:");
         fflush(stdin);
         scanf("%d",&quantity);
         m[i].quantity=quantity;
         printf("\n\t\tQuantity changed Successfully\n");
        }
        if(choice==2)
        {
         int price;
         printf("\n\t\tEnter Price to be changed: ");
         fflush(stdin);
         scanf("%d",&price);
         m[i].price=price;
         printf("\n\t\tPrice changed Successfully ");
        }
        if(choice==3)
        {
         char name[100];
         printf("\n\t\tEnter Name to be changed: ");
         fflush(stdin);
         gets(name);
         strcpy(m[i].medicnename,name);
         printf("\n\t\tMedicine Name changed Successfully\n");
        }
        if(choice==4)
        {
         char company[100];
         printf("\n\t\tEnter company to be changed: ");
         fflush(stdin);
         gets(company);
         strcpy(m[i].company,company);
         printf("Company changed Successfully\n");
        }
        if(choice==5)
        {
         char mfg[11];
         printf("\n\t\tEnter Manufacturing date to be changed: ");
         fflush(stdin);
         gets(mfg);
         strcpy(m[i].mfgdate,mfg);
         printf("\n\t\tManufacturing Date changed Successfully\n");
        }
        if(choice==6)
        {
         char exp[11];
         printf("\n\t\tEnter Expiry date to be changed: ");
         fflush(stdin);
         gets(exp);
         strcpy(m[i].expdate,exp);
         printf("\n\t\tExpiry Date changed Successfully\n");
        }
        if(choice==7)
        {
         char info[100];
         printf("\n\t\tEnter Info to be changed(Less than 100 Characters): ");
         fflush(stdin);
         gets(info);
         strcpy(m[i].info,info);
         printf("\n\t\tInfo changed Successfully\n");
        }
        if(choice<=0 && choice>7)
        {
         printf("\n\t\tEnter valid Choice\n");
        }
        printf("\n\t\tEnter 1 to Change other Details Else any other number: ");
        fflush(stdin);
        scanf("%d",&c);
    }while(c==1);
    
    break;
   }
    
}
fwrite(&m[i],sizeof(m[i]),1,fp1);
}
 
  fclose(fp);
  fclose(fp1);
  if(found){
  fp1 = fopen("temp.txt","r");
  fp = fopen("stock.txt","w");
   while(fread(&m[i],sizeof(m[i]),1,fp1)>0){
   	fwrite(&m[i],sizeof(m[i]),1,fp);
   }
   fclose(fp);
  fclose(fp1);
}
else
{
	printf("\n\t\tNAME NOT FOUND\n");
}
}
 }
 
 
void enterinfoaboutmedicine(int number){
	FILE *fp;
   int i;
   int found=0;
  char name[100];
  if((fp = fopen("stock.txt","r"))==NULL){
   	printf("MEDICINE IS NOT AVAILABLE\n");
   	printf("PLEASE RE-STOCK\n");
   }
   else{
  printf("\n\t\tEnter info: ");
  fflush(stdin);
  gets(name);
  for(i=0;i<number;i++)
  {
  	while(fread(&m[i],sizeof(m[i]),1,fp)>0)
   {
   if(strcmp(m[i].info,name)==0)
   {
    found=1;
    printf("\n\t\t\tThese are the details of Medicine\n");
    	printf("\n\n\t\t\tName: %s\n",m[i].medicnename);
		printf("\t\t\tPrice: %d\n",m[i].price);
		printf("\t\t\tAvailable quantity in file: %d\n",m[i].quantity);
		printf("\t\t\tComapny: %s\n",m[i].company);
		printf("\t\t\tMFG Date(dd/mm/yyyy):%s\n",m[i].mfgdate);
		printf("\t\t\tExp Date(dd/mm/yyyy):%s\n",m[i].expdate);
		
    if(strcmp(m[i].info,"")!=0)
    {
     printf("\t\t\tReview or Info=%s\n",m[i].info);
    }
    else
    {
     printf("\t\t\tReview or Info=Not Available\n\n\n");
    }   
   }
}
  }
  if(found==0)
  {
   printf("\n\t\t\tEntered detail medicine Not Found\n");
  }
 }
}

void sales(int number){
	
	FILE *fp3;
	int i;
	fp3 = fopen("sales.txt","r");
	for(i=0;i<number;i++)
  {
  	while(fread(&m[i],sizeof(m[i]),1,fp3)>0)
   {
    //found=1;
    printf("The sales of Medicine\n");
    	printf("\nName: %s\n",m[i].medicnename);
		printf("Price: %d\n",m[i].price);
		printf("Available quantity in file: %d\n",m[i].quantity);
		printf("Comapny: %s\n",m[i].company);
		printf("MFG Date(dd/mm/yyyy):%s\n",m[i].mfgdate);
		printf("Exp Date(dd/mm/yyyy):%s\n",m[i].expdate);
}
}
}


