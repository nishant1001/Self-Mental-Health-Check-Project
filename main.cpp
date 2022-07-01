#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <sstream>
using namespace std;
int a,b=0;
//parent class
class patient
	{
	public:
	string name;
	int age;
	void getdata()
		{
		cout<<"\nEnter Name - ";
		cin>>name;
		cout<<"\nEnter Age - ";
		cin>>age;
		}
	void dispdata()
		{
		cout<<"\n\nName - "<<name;
		cout<<"\nAge - "<<age;
		}
	};
//subclass inheriting from base class (patient)
class disorder : public patient
	{
	public:
    float depression();
	float stress();
	float anxiety();
	float schizophrenia();
	float OCD();
	float BEDC();
	}d1;
float disorder :: depression()
	{
	getdata();
	cout<<"\nDo you experience the following listed symptoms: ";
	cout<<"\n\nPress 1 for YES \t 0 for NO\n";
	cout<<"\nPersistent feeling of sadness - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\nLoss of interests in activities - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\nTrouble sleeping or oversleeping - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\nLoss of apetite or weight changes - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\nFatigue or decreased energy - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\nDifficulty in thinking clearly or quickly - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\nFrustation, Irritability or Pessimism - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\nPhysical aches or pains - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\nRecurrent thought oF DEATH or SUICIDE - ";
	cin>>a;
	if (a==1)
		{
		++b;
		++b;
		}
	dispdata();
	cout<<"\nYou have "<<b*10<<"% Depression";
	return b*10;
	}
float disorder :: stress()
	{
	getdata();
	cout<<"\nDo you experience the following listed symptoms: ";
	cout<<"\n\nPress 1 for YES \t 0 for NO\n";
	cout<<"\n1) Persistent feeling of sadness - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n2) Aches and Pain - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n3) Chest Pain or a feeling like your heart is racing - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n4) Trouble sleeping - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n5) High Blood Pressure - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n6) Stomach or digestive problems - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n7) Muscle tension - ";
	cin>>a;
    if (a==1)
		++b;
	cout<<"\n8) Headaches, dizziness or shaking - ";
	cin>>a;
	if (a==1)
		++b;
	dispdata();
	cout<<"\nYou have been diagnosed with "<<(b/8.00)*100<<"% Stress";
	return ((b/8.00)*100);
	}
float disorder :: anxiety()
	{
	getdata();
	cout<<"\nDo you experience the following listed symptoms: ";
	cout<<"\n\nPress 1 for YES \t 0 for NO\n";
	cout<<"\n1) Feeling nervour, restless or tense - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n2) Sweating - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n3) Increased heart rate - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n4) Breathing rapidly - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n5) Feeling weak or tired - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n6) Trouble concentrating - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n7) Having a sense of impeding danger, panic or doom - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n8) Trembling - ";
	cin>>a;
	if (a==1)
		++b;
	dispdata();
	cout<<"\nYou have been diagnosed with "<<(b/8.00)*100<<"% Anxiety";
	return ((b/8.00)*100);
	}
float disorder :: schizophrenia()
    {
    getdata();
    cout<<"\nDo you experience the following listed symptoms: ";
	cout<<"\n\nPress 1 for YES \t 0 for NO\n";
	cout<<"\n1) Hallucinations - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n2) Delusions - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n3) Disorganised thinking - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n4) Lack of motivation - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n5) Slow movement - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n6) Change in sleep patterns - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n7) Poor grooming or hygiene - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n8) Changes in body language and emotions - ";
	cin>>a;
	if (a==1)
		++b;
	dispdata();
	cout<<"\nYou have been diagnosed with "<<(b/8.00)*100<<"% Schizophrenia";
	return ((b/8.00)*100);
    }
float disorder :: OCD()
    {
    getdata();
    cout<<"\nDo you experience the following listed symptoms: ";
	cout<<"\n\nPress 1 for YES \t 0 for NO\n";
	cout<<"\n1) Fear of contamination or dirt - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n2) Doubting and having difficulty tolerating uncertainty - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n3) Needing things orderly and symmetrical - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n4) Aggressive or horrific thoughts about losing control and harming yourself or others - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n5) Unwanted thoughts, including aggression, or sexual or religious subjects - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n6) Repeated mental images that cause Anxiety - ";
	cin>>a;
	if (a==1)
		++b;
	dispdata();
	cout<<"\nYou have been diagnosed with "<<(b/6.00)*100<<"% OCD";
	return ((b/6.00)*100);
    }
float disorder :: BEDC()
    {
    getdata();
    cout<<"\nDo you experience the following listed symptoms: ";
	cout<<"\n\nPress 1 for YES \t 0 for NO\n";
	cout<<"\n1) Easily getting annoyed or nervous - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n2) Often appearing angry - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n3) Putting blame on others - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n4) Refusing to follow rules or questioning authority - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n5) Arguing and throwing temper tantrums - ";
	cin>>a;
	if (a==1)
		++b;
	cout<<"\n6) Having difficulty in handling frustration - ";
	cin>>a;
	if (a==1)
		++b;
	dispdata();
	cout<<"\nYou have been diagnosed with "<<(b/6.00)*100<<"% BEDC";
    return ((b/6.00)*100);
    }
//Analysis function to analyse the diagnosis score
int analysis(float a)
    {
        if (a > 80.00)
            cout<<"\nYou need to immediately visit a doctor";
        else if (a > 60.00)
            cout<<"\nYou diagnosis score is above average.\nYou need to take care of yourself.";
        else if (a > 40.00)
            cout<<"\nYour diagnosis score lies in average category, and is very common.\nBut, still you need to take care and be happy.";
        else
            cout<<"\nYour Mental Health is in Perfect condition.";
    cout<<"\n\n\t\t\t\t\tSTAY HAPPY AND BLESSED";
    return a;
    }
int main()
{
    MYSQL* conn;
    conn=mysql_init(0);
    conn=mysql_real_connect(conn,"192.168.62.48","admin","admin","dbms",0,NULL,0);
    if(conn)
        cout<<"Connected";
    else
        cout<<"Not Connected";

    int ch,temp;
float r;
//User - Interface
cout<<"\nEnter 1, if you take a quick test";
cout<<"\nEnter 2, if you want to search for a particular record";
cout<<"\nEnter 3, if you want to see all records";
cout<<"\nEnter your choice - ";
cin>>temp;

if (temp==1)
{
    cout<<"\nEnter 1, To check for Depression";
    cout<<"\nEnter 2, To check for Stress";
    cout<<"\nEnter 3, To check Anxiety";
    cout<<"\nEnter 4, To check Paranoia";
    cout<<"\nEnter 5, To check Obsessive-compulsive disorder (OCD)";
    cout<<"\nEnter 6, To check Behavioural and Emotional Disorder in children (BEDC)";
    cout<<"\nEnter 7, To Exit !!!";
    cout<<"\nEnter your choice - ";
    cin>>ch;
    string disorder;
    switch(ch)
        {
        case 1:r = d1.depression();
        disorder="Depression";
        break;
        case 2:r = d1.stress();
        disorder="Stress    ";
        break;
        case 3:r = d1.anxiety();
        disorder="Anxiety   ";
        break;
        case 4:r = d1.schizophrenia();
        disorder="Paranoia  ";
        break;
        case 5:r = d1.schizophrenia();
        disorder="OCD       ";
        break;
        case 6:r = d1.BEDC();
        disorder="BEDC      ";
        break;
        case 7:cout<<"\nYou have Exited the program";
        exit(0);
        default:cout<<"\nWrong Choice !!!";
        }
    int k=analysis(r);
    cout<<"\n\nNOTE,\nThis assessment is not a replacement of doctor,\nit is only to voluntarily check mental health";

        int qstate=0;
        stringstream ss;
        ss<<"insert into dbms_project values ('"<<d1.name<<"',"<<d1.age<<",'"<<disorder<<"','"<<k<<"%')";
        string query = ss.str();
        const char* q = query.c_str();
        qstate = mysql_query(conn,q);
        if (qstate==0)
                cout<<"\nRecord Inserted...";
        else
                cout<<"\nRecord not inserted...";
}
else if (temp==2)
{
    cout<<"Enter the name you want to search for - ";
    string name1;
    cin>>name1;
    MYSQL_ROW row;
    MYSQL_RES* res;
    int qstate1=0;
    stringstream ss1;
    if (conn)
    {
        ss1 << "select * from dbms_project where name='" <<name1<<"'";
        string query1 = ss1.str();
        const char* q1 = query1.c_str();
        qstate1 = mysql_query(conn, q1);
        if (qstate1 == 0)
        {
            res=mysql_store_result(conn);
            cout<<"\nName\t  "<<"Age\t"<<"Tested for\t     "<<"Result\n";
            cout<<"-------------------------------------------\n";
            while(row=mysql_fetch_row(res))
                cout<<row[0]<<"\t  "<<row[1]<<"\t"<<row[2]<<"\t     "<<row[3]<<endl;
        }
        else
            cout<<"\nNo record found";
    }
}
else if (temp==3)
{
    MYSQL_ROW row;
    MYSQL_RES* res;
    if (conn)
    {
        int qstate=mysql_query(conn,"select * from dbms_project");
        if (!qstate)
        {
            res=mysql_store_result(conn);
            cout<<"\nName\t  "<<"Age\t"<<"Tested for\t     "<<"Result\n";
            cout<<"___________________________________________\n\n";
            while(row=mysql_fetch_row(res))
                cout<<row[0]<<"\t  "<<row[1]<<"\t"<<row[2]<<"\t     "<<row[3]<<endl;
        }
        else
            cout<<"\nNo record found";
    }
}
else
    cout<<"\nWrong choice...";
cout<<endl;
return 0;
}
