#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
void registration(string n[], string pass[])
{
	cout << "\n========> Registration <==========\n\n";
	cin.ignore();
	static int i = 0;
	cout << "Enter Username:";
	getline(cin, n[i]);
	cout << "Enter password:";
	getline(cin, pass[i]);

	ofstream file;
	file.open("Registration.txt", ios::app);
	if (!file.is_open())
	{
		cout << "File  is not Open\n";
	}
	file << left << setw(20) << n[i] << setw(20) << pass[i] << endl;
	i++;
	file.close();

	cout << "\n========> Registration Successfully done <=========\n";

}
void login(string n[], string p[], int size)
{
	bool check = true;
	string name, pass;
	cout << "\n========> Login <==========\n";
	cin.ignore();
	cout << "Enter User Name:";
	getline(cin, name);
	for (int i = 0; i < size; i++)
	{
		if (name == n[i])
		{
			check = false;
			for (int j = 3; j >= 1; )
			{

				cout << "Enter Password for Login:";
				getline(cin, pass);

				if (pass == p[i])
				{
					cout << "\n=======> Successfully login <=========\n\n";
					break;
				}
				else
				{
					cout << "\n=====> Incorrect password <=======\n";
					cout << "You have " << --j << " more attempts for password\n\n";
					if (j == 0)
					{
						cout << "\n======> System Locked <=======\n";
					}
				}

			}
			break;
		}

	}
	if (check)
	{
		cout << "\n=====> User Name not found <=======\n";
	}
}
void fileShow()
{
	ifstream file;
	string line;
	file.open("Registration.txt", ios::in);
	if (!file.is_open())
	{
		cout << "File is not open\n";
	}
	cout << "\n======================\n";
	cout << " ---> File Records <--- \n";
	cout << "=======================\n";
	while (getline(file, line))
	{
		cout << line << endl;
	}
}
int main()
{
	int choice;
	string name[10];
	string password[10];
	cout << "====================\n";
	cout << "|     Main Menu    |\n";
	cout << "====================\n";
	cout << "|1.Registration    |\n";
	cout << "|2.login           |\n";
	cout << "|3.File Show       |\n";
	cout << "|4.Exit            |\n";
	cout << "====================\n";
	while (true)
	{
		cout << "\n=====> What you want to do:";
		cin >> choice;
		if (choice == 1)
		{
			registration(name, password);
		}
		else if (choice == 2)
		{
			login(name, password, 10);
		}
		else if (choice == 3)
		{
			fileShow();
		}
		else
		{
			cout << "=====================\n";
			cout << "|     Program End   |\n";
			cout << "=====================\n";
			break;
		}
	}
	system("pause");
	return 0;
}
