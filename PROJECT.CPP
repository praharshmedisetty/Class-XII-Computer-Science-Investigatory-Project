//****************************************************************
// HEADER FILES USED IN PROJECT
//****************************************************************
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
//*****************************************************************
//MODE OF PAYMENT
//*****************************************************************
void mode()
{
char mode[10];
cout<<"\n\n\t\t     Do You Want To Pay By Cash Or Card";

cout<<"\n\t\t     Enter Mode Of Payment (Cash/Card)::";
gets(mode);
if(strcmp(mode,"Cash")==0)

	{
	cout<<"\n\t\t    Thank You For Paying By Cash! Visit Again!!";
	getch();
	  }
	else if(strcmp(mode,"Card")==0)
	{
	cout<<"\n\t\t    Enter Your Card's Last 2-Digit IFSC Code";
	  cout<<"\n\t\t\t     **** **** **** **";
	  int h;
	  cin>>h;
	  cout<<"\n\t\t\t   PROCESSING!! Please Wait!!";
	  getch();
	  cout<<"\n\t\t\t    Transaction Successful!!";
	  getch();
	  getch();
	  }
    else
 {
 cout<<"\n\t\t\t    PAYMENT UNSUCCESSFUL!!"<<"\n\t\t\t      Please Try Again!!";
   getch();
      }
  }
//********************************************************
//RAINBOW AND WELCOME
//********************************************************
void rainbow()
{
int gdriver = DETECT,gmode;
int x,y,i;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	for(i=30;i<200;i++)
	{
		delay(10);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}
getch();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t    Welcome!";
 getch();
 getch();
 }
//***************************************************************
//SUPER MAGICAL FUNCTION OF THE PROGRAM!!!!!!!!!!!!!!!!!!!!!!!!!!
//***************************************************************
void supermagic()
{   clrscr();
int gd=DETECT, gm=DETECT;
initgraph(&gd,&gm,"C:\\TurboC4\\TC\\BGI");
 int z;
 for(z=400;z>=0;z--) { setcolor(BLUE); circle(320,240,z); delay(5); }
 for(z=0;z<=400;z++) { setcolor(RED); circle(320,240,z); delay(5); }

 //AIR MAP SHOWING TOP VIEW OF THE RESTUARANT
	cleardevice();
	setbkcolor(BLACK);
	setcolor(WHITE);
	outtextxy(150,0,"           AIR VIEW OF DOMINOS");
	line(20,20,20,460); delay(15);

	line(100,20,60,100); delay(15);

	line(20,20,100,20); delay(15);

	line(20,100,60,100); delay(15);

	line(60,100,60,380); delay(15);

	line(20,380,60,380); delay(15);

	line(60,380,100,460); delay(15);

	line(20,460,100,460); delay(15);

	line(620,20,620,460); delay(15);

	line(540,20,620,20); delay(15);

	line(540,460,620,460); delay(15);

	line(620,100,580,100); delay(15);

	line(620,380,580,380); delay(15);

	line(580,100,580,380); delay(15);

	line(540,20,580,100); delay(15);

	line(580,380,540,460); delay(15);

	line(170,20,470,20); delay(15);

	line(170,20,130,100); delay(15);

	line(130,100,130,200); delay(15);

	line(130,200,245,200); delay(15);

	line(245,200,245,180); delay(15);

	line(295,180,295,200); delay(15);

	line(295,200,510,200); delay(15);

	line(510,200,510,100); delay(15);

	line(510,100,470,20); delay(15);

	line(175,40,150,100); delay(15);

	line(150,100,150,180); delay(15);

	line(150,180,490,180); delay(15);

	line(490,180,490,100); delay(15);

	line(490,100,465,40); delay(15);

	line(465,40,175,40); delay(15);

	line(245,270,245,250); delay(15);

	line(245,250,130,250); delay(15);

	line(130,250,130,380); delay(15);

	line(130,380,170,460); delay(15);

	line(170,460,470,460); delay(15);

	line(470,460,510,380); delay(15);

	line(510,380,510,250); delay(15);

	line(510,250,295,250); delay(15);

	line(295,250,295,270); delay(15);

	line(170,280,310,280); delay(15);

	line(310,280,310,340); delay(15);

	line(310,340,170,340); delay(15);

	line(170,340,170,280); delay(15);

	line(330,280,470,280); delay(15);

	line(470,280,470,340); delay(15);

	line(470,340,330,340); delay(15);

	line(330,340,330,280); delay(15);

	line(170,350,470,350); delay(15);

	line(470,350,470,410); delay(15);

	line(470,410,170,410); delay(15);

	line(170,410,170,350); delay(15);

	line(320,350,320,410); delay(15);

	setcolor(WHITE);

	int poly[8]={20,100,60,100,100,20,20,20};

	setfillstyle(1,GREEN);

	fillpoly(4,poly); delay(15);

	int poly1[8]={20,380,20,460,100,460,60,380};

	setfillstyle(1,GREEN);

	fillpoly(4,poly1); delay(15);

	int poly2[8]={540,20,580,100,620,100,620,20};

	setfillstyle(1,GREEN);

	fillpoly(4,poly2); delay(15);

	int poly3[8]={540,460,620,460,620,380,580,380};

	setfillstyle(1,GREEN);

	fillpoly(4,poly3); delay(15);

	int poly4[8]={170,280,170,340,310,340,310,280};

	setfillstyle(1,9);

	fillpoly(4,poly4); delay(15);

	int poly5[8]={330,280,330,340,470,340,470,280};

	setfillstyle(1,9);

	fillpoly(4,poly5); delay(15);

	int poly6[8]={20,100,20,380,60,380,60,100};

	setfillstyle(9,8);

	fillpoly(4,poly6); delay(15);

	int poly7[8]={580,100,580,380,620,380,620,100};

	setfillstyle(9,8);

	fillpoly(4,poly7); delay(15);

	int poly8[12]={175,40,150,100,150,180,490,180,490,100,465,40};

	setfillstyle(9,12);

	fillpoly(6,poly8); delay(15);

	int poly9[8]={170,350,170,410,320,410,320,350};

	setfillstyle(9,RED);

	fillpoly(4,poly9); delay(15);

	int poly10[8]={320,350,320,410,470,410,470,350};

	setfillstyle(9,RED);

	fillpoly(4,poly10); delay(15);

	outtextxy(46,60,"LAWN"); delay(15);

	outtextxy(566,60,"LAWN"); delay(15);

	outtextxy(566,420,"LAWN"); delay(15);

	outtextxy(46,420,"LAWN"); delay(15);

	outtextxy(175,310," PARTY SECTION"); delay(15);

	outtextxy(330,310,"    TAKEAWAY"); delay(15);

	outtextxy(295,100,"DOMINOS"); delay(15);

	outtextxy(220,380,"KIDS ZONE"); delay(15);

	outtextxy(340,380,"ENTERTAINMENT"); delay(15);

	setcolor(WHITE);

	outtextxy(110,25,"ENTRY"); delay(15);

	outtextxy(480,25,"ENTRY"); delay(15);

	outtextxy(110,455,"EXIT"); delay(15);

	outtextxy(480,455,"EXIT"); delay(15);

	outtextxy(250,190,"ENTRY"); delay(15);

	outtextxy(250,260,"ENTRY"); delay(15);

	settextstyle(0,1,0);

	outtextxy(38,120,"UNDERGROUND PARKING"); delay(15);

	outtextxy(598,120,"UNDERGROUND PARKING"); delay(15);

	settextstyle(0,0,0);

	setcolor(BLUE);

	for(int i=0;i<5;i++)

	{

	  outtextxy(200,464,"     PRESS ANY KEY TO CONTINUE"); delay(200);

	  setcolor(BLACK);

	  outtextxy(200,464,"     PRESS ANY KEY TO CONTINUE"); delay(200);

	  setcolor(WHITE);
	}

	outtextxy(200,464,"     PRESS ANY KEY TO CONTINUE");
	getch();

	cleardevice();

	for(i=400;i>=0;i--) { setcolor(8); circle(320,240,i); delay(5); }

	for(i=0;i<=400;i++) { setcolor(12); circle(320,240,i); delay(5); }
	closegraph();
	    }
//***************************************************************
// CLASS USED IN PROJECT
//****************************************************************
class product
{
	int pno;
	char name[50];
	float price,qty,tax,dis;
	public:
	void create_product()
{
	cout<<"\nPlease Enter The Product Number of The Product:";
	cin>>pno;

	cout<<"\n\nPlease Enter The Name of The Product:";
	gets(name);

	cout<<"\nPlease Enter The Price of The Product:";
	cin>>price;

	cout<<"\nPlease Enter The Discount Price(If Any):";
	cin>>dis;
}
void show_product()
{
	cout<<"\nThe Product Number of The Product : "<<pno;

	cout<<"\nThe Name of The Product : ";

	puts(name);

	cout<<"\nThe Price of The Product : "<<price;

	cout<<"\nDiscount : "<<dis;
}
int retpno()
{
	return pno;
}
float retprice()
{
	return price;
}
char* retname()
{
	return name;
}
int retdis()
{
	return dis;
}
}; //End of Class
//****************************************************************
// GLOBAL DECLARATION FOR STREAM OBJECT AND OBJECT
//****************************************************************
fstream fp;
product pr;
//***************************************************************
// FUNCTION TO WRITE IN THE FILE
//****************************************************************
void write_product()
{
	fp.open("Shop.dat",ios::out|ios::app);
	pr.create_product();
	fp.write((char*)&pr,sizeof(product));
	fp.close();
	cout<<"\n\nThe Product Has Been Created! ";
	getch();
}
//***************************************************************
// FUNCTION TO READ ALL RECORDS IN A FILE
//****************************************************************
void display_all()
{
	clrscr();
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	fp.open("Shop.dat",ios::in);
	while(fp.read((char*)&pr,sizeof(product)))
{
	pr.show_product();
	cout<<"\n\n====================================================\n";
	getch();
}
	fp.close();
	getch();
}
//***************************************************************
// FUNCTION TO READ SPECIFIC RECORD FROM A FILE
//****************************************************************
void display_sp(int n)
{
	int flag=0;
	fp.open("Shop.dat",ios::in);
	while(fp.read((char*)&pr,sizeof(product)))
  {
	if(pr.retpno()==n)
      {
	clrscr();
	pr.show_product();
	flag=1;
	     }
		  }
	fp.close();
	if(flag==0)
	cout<<"\n\nRecord Doesn't Exist";
	getch();
		       }
//***************************************************************
// FUNCTION TO MODIFY THE RECORD IN THE FILE
//****************************************************************
void modify_product()
{
	int no,found=0;
	clrscr();
	cout<<"\n\n\tTO MODIFY ";
	cout<<"\n\n\tPlease Enter The Product Number of The Product:";
	cin>>no;
	fp.open("Shop.dat",ios::in|ios::out);
	while(fp.read((char*)&pr,sizeof(product)) && found==0)
{
	if(pr.retpno()==no)
	{
		pr.show_product();
		cout<<"\nPlease Enter The New Details of Product:"<<endl;
		pr.create_product();
		int pos=-1*sizeof(pr);
		fp.seekp(pos,ios::cur);
		fp.write((char*)&pr,sizeof(product));
		cout<<"\n\n\t Record Updated Sucessfully!";
		found=1;
		}
			}
		fp.close();
		if(found==0)
		cout<<"\n\n Record Not Found!! ";
		getch();
     }
//***************************************************************
// FUNCTION TO DELETE A RECORD FROM A FILE
//****************************************************************
void delete_product()
{
	int no;
	clrscr();
	cout<<"\n\n\n\tDelete Record";
	cout<<"\n\nPlease Enter The Product Number Of The Product You Want To Delete:";
	cin>>no;
	fp.open("Shop.dat",ios::in|ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)&pr,sizeof(product)))
	{
		if(pr.retpno()!=no)
			{
			 fp2.write((char*)&pr,sizeof(product));      										}
			       }
		fp2.close();
		fp.close();
		remove("Shop.dat");
		rename("Temp.dat","Shop.dat");
		cout<<"\n\n\tRecord Deleted!!";
		getch();
	}
//***************************************************************
// FUCTION TO DISPLAY ALL THE PRODUCTS(PRICE LIST)
//****************************************************************
void menu()
{
	clrscr();
	fp.open("Shop.dat",ios::in);
	if(!fp)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPENED\n\n\n Go To Admin Menu To Create A File";
		cout<<"\n\n\n Program Is Closing!!!!";
		getch();
		exit(0);
	}
	cout<<"\n\n\t\tPRODUCT MENU\n\n";
	cout<<"============================================================\n";
	cout<<"P.NO.\t\tNAME\t\tPRICE\n";
	cout<<"============================================================\n";
	while(fp.read((char*)&pr,sizeof(product)))
	{
	cout<<pr.retpno()<<"\t\t"<<pr.retname()<<"\t\t"<<pr.retprice()<<endl;
	}
	fp.close();
      }
//*******************************************************************
// FUNCTION TO PLACE ORDER AND GENERATE A BILL(INVOICE) FOR THE SAME
//*******************************************************************
void place_order()
{
	int order_arr[50],quan[50],c=0;
	float amt,damt,total=0;
	char ch='Y';
	menu();
	cout<<"\n--------------------------------";
	cout<<"\n PLACE YOUR ORDER";
	cout<<"\n--------------------------------\n";
	do{
	cout<<"\n\nEnter The Product Number Of The Product : ";
	cin>>order_arr[c];
	cout<<"\nQuantity in number : ";
	cin>>quan[c];
	c++;
	cout<<"\nDo You Want To Order Another Product ? (Y/N)";
	cin>>ch;
	}while(ch=='y' ||ch=='Y');
	cout<<"\n\nThank You For Placing The Order";getch();clrscr();
	cout<<"\n \n************************************INVOICE*************************************";
	for(int z=0;z<80;z++)
	 cout<<"-";
	  for(int g=0;g<80;g++)
	 cout<<"*";
	cout<<"\n\Pr No.\tPr Name\t\tQuantity \tPrice \tAmount \tAmount after discount\n";
	for(int x=0;x<=c;x++)
	{
	fp.open("Shop.dat",ios::in);
	fp.read((char*)&pr,sizeof(product));
	while(!fp.eof())
	{
	if(pr.retpno()==order_arr[x])

	{
	amt=pr.retprice()*quan[x];
	damt=amt-(pr.retdis()*quan[x]);
	cout<<"\n"<<order_arr[x]<<"\t"<<pr.retname() <<"\t"<<quan[x]<<"\t\t"<<pr.retprice()<<"\t"<<amt<<"\t\t"<<damt;
	total+=damt;
	}
	fp.read((char*)&pr,sizeof(product));
	}
	fp.close();
	}
	cout<<"\n\n\n\n\n\t\t\t\t\t\t\tTOTAL:"<<total;
	getch();
	void mode();
	mode();
}
//***************************************************************
// INTRODUCTION FUNCTION
//****************************************************************
void intro()
{
  clrscr();
  cout<<"\n\n\n\t\t\t\tDOMINOS PIZZA\t\t";
  cout<<"\n\nMADE BY : M DAMODAR PRAHARSH,T M ARAVIND AND PRASANTH PHILIP KATTA";
  cout<<"\n\nTEACHER : SMT K.SRIKANTHA";
  cout<<"\n\nSCHOOL : KENDRIYA VIDYALAYA PICKET";
  unsigned int long j;
  cout<<"\n\n\n\n\n\n\n\t\t\t\tLOADING PROJECT!";
  cout<<"\n";
   char fg=219;
   for(int i=0;i<80;i++)
	{ cout<<fg;
	    for(j=0;j<2000000;j++);
	  }
	 getch();
  }
//***************************************************************
// ADMINSTRATOR MENU FUNCTION
//****************************************************************
void admin_menu()
{
  clrscr();
  char ch2;
  cout<<"\n\n\n\tADMIN MENU";
  cout<<"\n\n\t1.CREATE PRODUCT";
  cout<<"\n\n\t2.DISPLAY ALL PRODUCTS";
  cout<<"\n\n\t3.DISPLAY SPECIFIC PRODUCT";
  cout<<"\n\n\t4.MODIFY PRODUCT";
  cout<<"\n\n\t5.DELETE PRODUCT";
  cout<<"\n\n\t6.BACK TO MAIN MENU";
  cout<<"\n\n\tPlease Enter Your Choice (1-6)-->";
  ch2=getche();
  switch(ch2)
  {
  case '1': clrscr();
  write_product();
  break;
  case '2': display_all();break;
  case '3':
  int num;
  clrscr();
  cout<<"\n\n\tPlease Enter The Product Number:";
  cin>>num;
  display_sp(num);
  break;
  case '4': modify_product();break;
  case '5': delete_product();break;
  case '6':  cout<<"\n";
	   char dd=16;
	   for(int i=0;i<80;i++)
	   { cout<<dd;
	    for(long int k=0;k<1000000;k++);
	    }
	    break;
  default:cout<<"\a";
  admin_menu();
  }
 }
//***************************************************************
//PASSWORD FUNCTION FOR ENTRY
//***************************************************************
int password()
{
  char a,p[100],u[100],ch='y';
  int us=0,pa=0,i,n;
  long int k;
  do
    {
	cout<<"\n\n\t\tUsername:";
	gets(u);
	cout<<"\n\t\tPassword:";
	for(i=0;;i++)
	{
	a=getch();
	if(a=='\b')
      {
	cout<<"\b \b";
	i=i-1;
	p[i]=NULL;
	i=i-1;
	 }
	 else if(a=='\r')
	  {
	      p[i]=NULL;
		i=i-1;
		break;
		 }
	    else
	     {
		cout<<"*";
		 p[i]=a;
			 }
		  }
	 if(strcmp(u,"dominos")!=0)
		  us=1;
	  else
	 us=0;
	 if(strcmp(p,"dominos123")!=0)
	 pa=1;
	  else
	  pa=0;
	  if(us==1||pa==1)
  {
   cout<<"\n\n\t\t\t   Authorisation Failed!";
   cout<<"\n\t\t\t  Want To Try Again(Y/N):";
   cin>>ch;
   if(ch=='N'||ch=='n')
   {
	 cout<<"\n\n\n\n\t\t         THANK YOU! HAVE A NICE TIME!!"<<"\n";
		char hh=16;
		for(i=0;i<80;i++)
		{ cout<<hh;
		for(k=0;k<1000000;k++);
	     }
	exit(0);
      }
  }
    else
	{
	cout<<"\n\n\n\t\t\t\t Welcome!!";
	cout<<"\n";
	char gh=1,hg=2;
	for(int j=0;j<40;j++)
       {
	   for(long int e=0;e<1000000;e++);
		cout<<gh<<hg;
	}
	       getch();
		ch='n';
		n=5;
	}
	    }while(ch=='y'||ch=='Y');
		getch();
		  return n;
}
//****************************************************************
//PASSWORD FUNCTION FOR ADMIN MENU
//****************************************************************
int passadmin()
{
  char a,p[100],ch;
  int pa=0,i,pk;
  do
   {
	qwerty:
	  cout<<"\n\n\tEnter Password:";
	    for(i=0;;i++)
  {
    a=getch();
    if(a=='\b')
     {
	 cout<<"\b \b";
	  i=i-1;
	   p[i]=NULL;
	     i=i-1;
       }
   else if(a=='\r')
   {
	  p[i]=NULL;
	   i=i-1;
	    break;
   }
   else
   {
	cout<<"*";
	 p[i]=a;
		       }
  }
 if(strcmp(p,"admin123")!=0)
   pa=1;
  else
   pa=0;
  if(pa==1)
  {
	 cout<<"\n\n\tWRONG PASSWORD!!";
	  cout<<"\n\n\tTry Again(Y/N):";
	   cin>>ch;
      if(ch=='y'||ch=='Y')
	 goto qwerty;
	 else
	break;
    }
    else
	{
	   pk=5;
		  }
  }while(pk!=5);
	return pk;
}
//***************************************************************
//DOMINOS WELCOME LOGO
//***************************************************************
void magic()
{  clrscr();
cout<<"\n";
cout<<"\t			    ---"<<"\n";
cout<<"\t			  --    --"<<"\n";
cout<<"\t			--        --"<<"\n";
cout<<"\t		      --            --"<<"\n";
cout<<"\t		    --                --"<<"\n";
cout<<"\t		  --         **         --"<<"\n";
cout<<"\t		--          ****          --"<<"\n";
cout<<"\t	      ----           **            --"<<"\n";
cout<<"\t	    --    --                      --"<<"\n";
cout<<"\t	  --       --                   --"<<"\n";
cout<<"\t	--           --               --"<<"\n";
cout<<"\t     --               --           --"<<"\n";
cout<<"\t    --                   --      --"<<"\n";
cout<<"\t  --    **       **         -- --"<<"\n";
cout<<"\t--     ****     ****         --"<<"\t\tWELCOME"<<"\n";
cout<<"\t  --    ** 	 **	   --"<<"\t\t\tTO"<<"\n";
cout<<"\t    --    	         --"<<"\t\t\t   DOMINOS!!"<<"\n";
cout<<"\t      --               --"<<"\n";
cout<<"\t        --           --"<<"\n";
cout<<"\t	  --	    --  "<<"\n";
cout<<"\t	    --   --    "<<"\t\t\t\tMADE BY:-PRAHARSH"<<"\n";
cout<<"\t	       ---    "<<"\t\t\t\tARAVIND AND PRASANTH"<<"\n";
char gh=1,hg=2;
	for(int j=0;j<40;j++)
       {
	   for(long int e=0;e<1000000;e++);
		cout<<gh<<hg;
	}
	       getch();
}
//****************************************************************
// THE MAIN FUNCTION OF PROGRAM
//****************************************************************
void main()
{  rainbow();
  supermagic();
    magic();
  clrscr();
  char ch;
  int v;
  cout<<"\n\n";
  cout<<"\n\n\n\t\t\tWELCOME TO DOMINOS PIZZA!!!";
  cout<<"\n";
  for(int z=0;z<80;z++)
  cout<<"-";
  for(int g=0;g<80;g++)
  cout<<"*";
  for(int y=0;y<80;y++)
  cout<<"-";
  cout<<"\n";
  char df=2;
  for(int s=0;s<80;s++)
     {
	for(long int r=0;r<1000000;r++);
	  cout<<df;
			  }
	  getch();
	  cout<<"\n\t\t\t  AUTHORISATION REQUIRED!";
	    v=password();
		if(v==5)
		{
			intro();
					}
	do
	 {
	clrscr();
	cout<<"\n\n\n\t\t\t\tDOMINOS PIZZA";
	cout<<"\n\n\n\tMAIN MENU";
	cout<<"\n\n\t01. ADMINISTRATOR";
	cout<<"\n\n\t02. VIEW PRODUCT MENU";
	cout<<"\n\n\t03. CUSTOMER";
	cout<<"\n\n\t04. RESTUARANT BLUEPRINT";
	cout<<"\n\n\t05. EXIT";
	abc:
	cout<<"\n\n\tPlease Select Your Option (1-5)---> ";
	ch=getche();
	int passid;
	long int i,k;
	char gg=16;
	switch(ch)
{
case '1':   passid=passadmin();
		if(passid==5)
		{  admin_menu();
			   }
	       break;
case '2': menu();
getch();
break;
case '3': clrscr();
place_order();
getch();
break;
case '4': supermagic();
break;
case '5': cout<<"\n\n\n\n\t\t         THANK YOU! HAVE A NICE TIME!!"<<"\n";
	 for(i=0;i<80;i++)
	{ cout<<gg;
	    for(k=0;k<1000000;k++);
	  }
	exit(0);
default :cout<<"\a";
}
}while(ch!='5');
}
//***************************************************************
// END OF PROJECT
//***************************************************************
