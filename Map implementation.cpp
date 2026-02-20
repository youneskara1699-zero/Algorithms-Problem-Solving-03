#include <iostream>
#include <map>
using namespace std;



int main()
{
   map<string, int> StudentsGrades;
   StudentsGrades["Fadi"] = 18;
   StudentsGrades["Omar"] = 15;
   StudentsGrades["Aymen"] = 10;
   
   cout << "Printing All map values..." << endl;
   for (const auto& pair : StudentsGrades)
   {
       cout << "Student: " << pair.first << ", Grade: " << pair.second << endl;
   }

   cout << "Finding Fadi's Grade in map..." << endl;
   
   string StudentName = "Fadi";

   if (StudentsGrades.find(StudentName) != StudentsGrades.end())
   {
       cout << StudentName << "'s grade: " << StudentsGrades[StudentName] << endl;
   }

   else 
   {
       cout << "Grade not found for : " << StudentName << endl;
   }
   
   StudentName = "Karim";

   if (StudentsGrades.find(StudentName) != StudentsGrades.end())
   {
       cout << StudentName << "'s grade: " << StudentsGrades[StudentName] << endl;
   }

   else 
   {
       cout << "Grade not found for : " << StudentName << endl;
   }
   
   
   return 0;
}