/*Student Database (modideied): Create a structure to represent students
 with attributes like name, roll number, and marks in  3 different subjects. 
Write functions to :
1.input data for multiple students, 
2.display student details, 
3.calculate average marks in each of the three subjects,
4. and find the student with the highest marks. 
5. and find the student with the lowest marks. 
display all details for such student not just marks
PROBLEMS;
1. done thoruh array and loop (comparison)
2. STUDENTS not constant bc taken through 
*/
#include <iostream>                       
using namespace std;
struct student {
 string name;
 int rollno;
 int markse;
 int marksm ;
 int markssc;
	
};
void input ( student & a) {
	cout << "Enter name:\t";
	cin >> a.name;
	cout << "Enter rollno:\t";
	cin >> a.rollno;
	cout << "Enter marks in english :\t";
	cin >> a.markse;
	cout << "Enter marks in math:\t";
	cin >> a.marksm;
	cout << "Enter marks in science :\t";
	cin >> a.markssc;
}
void output ( student & a) {
	cout << "Name is:\t" << a.name << endl;
	cout << "roll no is:\t" << a.rollno << endl;
	cout << " marks in english are:\t" << a.markse << endl;
	cout << "marks in maths are:\t" << a.marksm << endl;
	cout << " marks in maths are:\t" << a.markssc << endl ;

}
	int main () {
		int n;
	cout << "Enter no of students whose data you want to input:\t";
	cin >> n;
	student a [n] ;
	
	 cout << "--- Input Data for Multiple Students ---" << endl << endl;
	 for ( int i = 0 ; i < n; i++) {
	 	cout << " Enter details for Student  " << i+1 << ": " << endl;
			input (a  [ i ]);
			cout << endl;
	 }
	 cout << endl << endl;
		cout << "--- Student Details ---" << endl << endl;
		for ( int i = 0 ; i < n; i++) {
	 	cout << " Student   " << i+1 << " Details : " << endl;
			output (a [i]);
			cout << endl;
	 }	
		cout << endl << endl;	
		
		cout << "--- Average marks ---" << endl << endl;
		int ae,am,asc = 0;
		for (int i = 0 ; i < n; i++) { // only for calc, not display
			ae = (ae + a[i].markse);
			am = (am + a[i].marksm);
			asc = (ae + a[i].markssc);
			
		}
		cout << "Average marks in English are:\t" << ae/n << endl;
		cout << "Average marks in Maths are:\t" << am/n << endl ;
		cout << "Average marks in Science are:\t" << asc/n << endl;
		
			cout << endl << endl;	
		cout << "--- Student with Highest Marks ---" << endl << endl;
		int sum [n];
		for (int i = 0; i < n; i++) { // getting sum of marks in array
			sum [i] = a[i].markse + a[i].marksm + a[i].markssc;
		}
		int max = sum [0];
		int maxindex = 0;
		int min = sum [0];
		int minindex = 0;
		
		for (int i = 1; i < n; i++) { // i = 1 , avoids unesary ieratins
			if (sum [i] > max ) {
				max = sum [i] ;
				maxindex = i;
			}
			if (sum [i] < min ) {
				min = sum [i] ;
				minindex = i;	
			}
		}
	    output (a[maxindex] );
	    cout << endl;
		cout << "--- Student with Lowest Marks ---" << endl << endl;
	    output (a[minindex] );
		
			
		return 0;
	}
