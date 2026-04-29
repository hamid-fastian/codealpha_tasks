#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	int c, s, credit_hours, total_credit = 0, overall_credit = 0;
	float GradePoints = 0.0, GPA, CGPA, total_points = 0;
	string grade;
	string* gptr;
	cout << "\n=====================================================\n";
	cout << " ========> Student GPA & CGPA Report <=========\n";
	cout << "=====================================================\n";
	cout << "Enter number of semesters:";
	cin >> s;
	for (int i = 0; i < s; i++)
	{
		total_credit = 0;
		GradePoints = 0;
		cout << "\nEnter number of courses for semester " << i + 1 << ": ";
		cin >> c;
		gptr = new string[c];       //to store grades for different courses
		for (int i = 0; i < c; i++)
		{
			cout << endl;
			cout << "Enter credit hours for course " << i + 1 << ":";
			cin >> credit_hours;
			cout << "Enter grade for course " << i + 1 << ":";
			cin >> grade;
			while (grade != "A+" && grade != "A" && grade != "A-" && grade != "B+" && grade != "B"
				&& grade != "B-" && grade != "C+" && grade != "C" && grade != "C-" && grade != "D+"
				&& grade != "D" && grade != "F")
			{
				cout << "=====> Invalid grade\n";
				cout << "Enter grade for course " << i + 1 << ":";
				cin >> grade;
			}
			gptr[i] = grade;
			if (grade == "A+" || grade == "A")
			{
				GradePoints += (4.00 * credit_hours);
			}
			else if (grade == "A-")
			{
				GradePoints += (3.67 * credit_hours);
			}
			else if (grade == "B+")
			{
				GradePoints += (3.33 * credit_hours);
			}
			else if (grade == "B")
			{
				GradePoints += (3.00 * credit_hours);
			}
			else if (grade == "B-")
			{
				GradePoints += (2.67 * credit_hours);
			}
			else if (grade == "C+")
			{
				GradePoints += (2.33 * credit_hours);
			}
			else if (grade == "C")
			{
				GradePoints += (2.00 * credit_hours);
			}
			else if (grade == "C-")
			{
				GradePoints += (1.67 * credit_hours);
			}
			else if (grade == "D+")
			{
				GradePoints += (1.33 * credit_hours);
			}
			else if (grade == "D")
			{
				GradePoints += (1.00 * credit_hours);
			}
			else if (grade == "F")
			{
				GradePoints += 0;
			}
			else
			{
				cout << "\n-----> Invalid Grade <------\n";
			}
			total_credit += credit_hours;

		}
		GPA = GradePoints / total_credit;
		total_points += GradePoints;
		overall_credit += total_credit;
		cout << "\n------> semester " << i + 1 << ": <------";
		cout << "\n===========================\n";
		cout << "Course" << setw(10) << "Grade\n";
		cout << "===========================\n";
		for (int i = 0; i < c; i++)
		{
			cout << "Course " << i + 1 << ": " << gptr[i] << endl;
		}
		cout << "============================\n";
		cout << "Semester " << i + 1 << " SGPA: " << GPA << endl;
		cout << "============================\n";
		delete[] gptr;  //delete memory to avoid memory leak

	}
	CGPA = total_points / overall_credit;
	cout << "\n========================\n";
	cout << "     Final CGPA Report   \n";
	cout << "========================\n";
	cout << "Overall credits: " << overall_credit << endl;
	cout << "Total points:" << total_points << endl;
	cout << "Final CGPA:" << CGPA << endl;
	cout << "==========================\n";
	system("pause");
	return 0;
}