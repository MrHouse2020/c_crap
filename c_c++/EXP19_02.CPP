/* C++ Program - Merge Two Files */
//use myfile1 and myfile2 stored in bin folder for demonstration
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	ifstream ifs1, ifs2;
	ofstream ofs;
	char ch, fname1[20], fname2[20], fname3[30];
	cout<<"Enter first file name(with extension like file1.txt):";
	cin>>fname1;
	cout<<"Enter second file name(with extension like file2.txt):";
	cin>>fname2;
	cout<<"Enter name of file (with extension like file3.txt) which will store the contents of the two files (fname1 and fname1) : ";
	cin>>fname3;
	ifs1.open(fname1);
	ifs2.open(fname2);
	if(!ifs1 || ifs2==NULL)
	{
		cout<<"Error Message:no such file present\n";
		cout<<"Press any key to exit...";
	}
	else
	{
	ofs.open(fname3);
	ifs1.get(ch);
	while(ifs1.eof()==0) //while(!ifs1.eof())
	{
		ofs.put(ch);
		ifs1.get(ch);
	}
	ifs2.get(ch);
	while(ifs2.eof()==0)
	{
		ofs.put(ch);
		ifs2.get(ch);
	}
	cout<<"The two files were merged into "<<fname3<<" file successfully..!!";
       }
	ifs1.close();
	ifs2.close();
	ofs.close();
	getch();
}
///output///
/*
Enter first file name(with extension like file1.txt):myfile1.txt
Enter second file name(with extension like file2.txt):myfile2.txt
Enter name of file (with extension like file3.txt) which will store the contents
 of the two files (fname1 and fname1) : myfile3.txt
The two files were merged into myfile3.txt file successfully..!!
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
