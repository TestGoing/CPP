//Create a sequential file
#include <iostream>
#include <string>
#include <fstream> //contains file stream processing types
#include <cstdlib> //exit function prototype

using namespace std;

int main()
{
	//ofstream constructor opens file
	ofstream outClientFile( "clients.txt", ios::out );

	//exit program if unable to create file
	if( !outClientFile ) //overloaded ! operator
	{
		cerr << "File could not be opened" << endl;
		exit( EXIT_FAILURE );
	}

	cout << "Enter the account,name,and balance." << endl
	     << "Enter end-of-file to end input.\n?";
	int account;
	string name;
	double balance;

	while(cin>>account>>name>>balance)
	{
		outClientFile<<account<<' '<<name<<' '<<balance<<endl;
		cout<<"? ";
	}     
}