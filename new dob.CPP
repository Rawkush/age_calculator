
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int d,m,y,val=0,cval=0;
int cd,cm,cy;
int ty,tm,td;
	      int lp=0;
cout<<"enter the date:-";
cin>>d;
cout<<"enter the month:-";
cin>>m;
cout<<"enter the year:-";
cin>>y;


cout<<"enter the current date:-";
cin>>cd;
cout<<"enter the current month:-";
cin>>cm;
cout<<"enter the current year:-";
cin>>cy;

if(y<=cy&&cy>0&&y>0)
{
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
       {
		if(d>0&&d<=31)
		{
		cout<<"date is valid\n";
		val=1;
		}
       }

       if(m==4||m==6||m==9||m==11)
       {
		if(d>0&&d<=30)
		{
		cout<<"date is valid\n";
		val=1;
		}
       }

       if(y%4==0)
       {
	  lp=1;	if(m==2)
		{
			if(d>0&&d<=29)
			{
			cout<<" date is valid\n";
			val=1;
			}
		}
       }

       if(y%4!=0)
       {
		if(m==2)
		{	if(d>0&&d<=28)
			{
			cout<<" date is valid \n";
			val=1;
			}
		}
       }

}


//body for currrent date

if(cy>0)
{
	if(cm==1||cm==3||cm==5||cm==7||cm==8||cm==10||cm==12)
       {
		if(cd>0&&cd<=31)
		{
		cout<<"current date is  valid\n";
		cval=1;
		}
       }

       if(cm==4||cm==6||cm==9||cm==11)
       {
		if(cd>0&&cd<=30)
		{
		cout<<"current date is  valid\n";
		cval=1;
		}
       }

       if(cy%4==0)
       {
		if(cm==2)
		{
			if(cd>0&&cd<=29)
			{
			cout<<"current date is  valid \n";
			cval=1;
			}
		}
       }

       if(cy%4!=0)
       {
		if(cm==2)
		{	if(cd>0&&cd<=28)
			{
			cout<<"current date is valid\n";
			cval=1;
			}
		}
       }

}

int in=0,s=0;


// calculating no. of days

if(val==1&&cval==1)
{
	if(cd>d)
	{
	td=cd-d;
	}

	if(cd<d)
	{


		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		 {
		  td=(cd+31)-d;
		  in=1;
		  }

		  if(m==4||m==6||m==9||m==11)
		 {
		  td=(cd+30)-d;
		  in=1;
		  }

	  if(m==2)
	   {
		if(lp==1)
		{
		td=(cd+29)-d;
		in=1;
		}

		if(lp==0)
		{
		td=(cd+28)-d;
		in=1;
		}

	   }


	}

	if(cm>m)
	{
		if(in==1)
		{
		tm=(cm-1)-m;
		}
		if(in==0)
		{
		tm=cm-m;
		}
	}

	if(m>cm)
	{
	 s=1;
		if(in==1)
		{
		cm=cm-1;
		cm=cm+12;
		tm=cm-m;
		}
		if(in==0)
		{
		tm=(cm+12)-m;
		}
	}

	if(s==1)
	{
	cy=cy-1;
	ty=cy-y;
	}
	if(s==0);
	{
	ty=cy-y;
	}
cout<<"\n\n you are "<<ty<<" year "<<tm<<" months "<<td<<" days Old";

}

if(val==0)
{
cout<<"\n invalid date of birth";
}

if(cval==0)
{
cout<<"\n invalid current date";
}

if(d<=0||cd<=0||y<=0||cy<=0||m<=0||cm<=0)
{
cout<<"invalid";
}
getch();

}
