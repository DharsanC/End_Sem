#include <iostream>

class person{
    public:
        string name;
        void displayPerson(){
            cout<<"Person Name: "<< name;
        }
}
class student: public person{
    public:
        string stdName;
        string reg_no;
        void displayStdent(){
            cout<<"Student Name: "<< stdName;
            cout<<"Student Reg No: "<< reg_no;
        }
}
class staff: public student{
    public:
        string staffName;
        string subject;
        void displayStaff(){
            cout<<"Staff Name: "<< staffName;
            cout<<"Subject Name: "<< subject;
        }
}
int main(){
    staff result;
    result.name = 'Arun';
    result.stdName = 'Deva';
    result.reg_no = '26PCA162';
    result.staffName = 'Roy';
    result.subject = 'C++';
    result.displayPerson();
    result.displayStdent();
    result.displayStaff();
}

