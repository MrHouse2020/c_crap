//program for encryption and decryption
//use temp.txt file stored in bin folder for demonstration
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	char fname[20],ch;
	ifstream ifs;
	ofstream ofs;
	int choice,cont;
	do
	{
	cout<<"menu"<<endl;
	cout<<"1. encrption"<<endl;
	cout<<"2. decryption"<<endl;
	cout<<"enter your choice:";
	cin>>choice;
	switch(choice)
	{
	case 1:
	////encryption////
	{
	cout<<"Enter file name (with extension like file.txt) to encrypt : ";
	cin>>fname;
	ifs.open(fname,ios::in);
	ofs.open("temp1.txt",ios::out);
	ifs.get(ch);
	while(ifs.eof()==0)   //or while(!ifs.eof())
	{
	if(ch=='\n')
	{
	ofs<<endl;
	ifs.get(ch);
	}
	else
	{
	ch=ch+1;
	ofs.put(ch);
	ifs.get(ch);
	}
	}
	ifs.close();
	ofs.close();
      /*	ifstream ifs;
	ofstream ofs;
	ifs.open("temp1.txt",ios::in);
	ofs.open(fname,ios::out);
	ifs.get(ch);
	while(!ifs.eof())
	{
	ofs.put(ch);
	ifs.get(ch);
	}

	ifs.close();
	ofs.close();*/
	cout<<"File "<<fname<<" encrypted successfully..!!";
	cout<<"\nPress any key to exit...";
	break;
	}
	case 2:
	{
	////decryption////
	cout<<"Enter file name (with extension like file.txt) to decrypt : ";
	cin>>fname;
	ifs.open(fname,ios::in);
	ofs.open("temp1.txt",ios::out);
	ifs.get(ch);
	while(ifs.eof()==0)   //or while(!ifs.eof())
	{
	if(ch=='\n')
	{
	ofs<<endl;
	ifs.get(ch);
	}
	else
	{
	ch=ch-3;
	ofs.put(ch);
	ifs.get(ch);
	}
	}
	ifs.close();
	ofs.close();
	ifs.open("temp1.txt",ios::in);
	ofs.open(fname,ios::out);
	ifs.get(ch);
	while(!ifs.eof())
	{
	ofs.put(ch);
	ifs.get(ch);
	}
	ifs.close();
	ofs.close();
	cout<<"File "<<fname<<" decrypted successfully..!!";
	cout<<"\nPress any key to exit...";
	break;
	}
}
cout<<"do u want to continue. press 1 for yes.";
cin>>cont;
}while(cont==1);
getch();
}
/// output///
/*
menu
1. encrption
2. decryption
enter your choice:1
Enter file name (with extension like file.txt) to encrypt : myfile.txt
File myfile.txt encrypted successfully..!!
Press any key to exit...do u want to continue. press 1 for yes.1
menu
1. encrption
2. decryption
enter your choice:2
Enter file name (with extension like file.txt) to decrypt : myfile.txt
File myfile.txt decrypted successfully..!!
Press any key to exit...do u want to continue. press 1 for yes.2
*/










