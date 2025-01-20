//Design a C++ program that manages student  information using the concept of Encapsulation. 
//The program should store and manage student details securely, allowing access to sensitive data only through proper methods.

// Requirements:

// Create a Student class with the following private data members:
// string name (Student's Name)
// int rollNumber (Roll Number)
// float marks (Marks out of 100)
// Implement public methods for:
// Setters: To assign values to the private data members.
// Getters: To safely access and display student information.
// A method to grade the student based on marks:
// A for marks ≥ 90
// B for marks ≥ 75 and < 90
// C for marks ≥ 60 and < 75
// D for marks ≥ 40 and < 60
// F for marks < 40
// Ensure that marks cannot be set beyond the valid range (0-100).
// Demonstrate the functionality by creating objects and displaying their details and grades.


#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollNumber;
    float marks;
    public:
     
    void setName(string n){
        name = n;
        }
    void setRollNumber(int r){
        rollNumber = r;
        }
    void setMarks(float m){
        if(m >= 0 && m <= 100)marks =m;
    }
    
    string getName(){
        return name;
        }
    int getRollNumber(){
        return rollNumber;
        }
    float getMarks(){
        return marks;
    }
    
    char getGrade(){
        if(marks >= 90)
        {
            return 'A';
        }
        else if(marks >= 75){
            return 'B';
        }
        else if(marks >= 60)
        {
            return 'C';
        }
        
        else if(marks >= 40){
            return 'D';
        }
        
        else{ 
            return 'F';
        }
    }
    };
        
int main(){
            Student s1,s2;
            s1.setName("john");
            s1.setRollNumber(1);
            s1.setMarks(85);
            cout<<"Student 1 Details:\n";
            cout<<"Name: "<<s1.getName()<<endl;
            cout<<"Roll Number: "<<s1.getRollNumber()<<endl;
            cout<<"Marks: "<<s1.getMarks()<<endl;
            cout<<"Grade: "<<s1.getGrade()<<endl;
            s2.setName("Alice");
            s2.setRollNumber(2);
            s2.setMarks(92);
            cout<<"Student 2 Details:\n";
            cout<<"Name: "<<s2.getName()<<endl;
            cout<<"Roll Number: "<<s2.getRollNumber()<<endl;
            cout<<"Marks: "<<s2.getMarks()<<endl;
            cout<<"Grade: "<<s2.getGrade()<<endl;
            return 0;

}
