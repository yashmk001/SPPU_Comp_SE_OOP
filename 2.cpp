// Develop a program in C++ to create a database of student’s information system containing the
// following information: Name, Roll number, Class, Division, Date of Birth, Blood group, Contact
// address, Telephone number, Driving license no. and other. Construct the database with
// suitable member functions. Make use of constructor, default constructor, copy constructor,
// destructor, static member functions, friend class, this pointer, inline code and dynamic
// memory allocation operators-new and delete as well as exception handling.




#include<iostream>
using namespace std;
class student{
    private:
    string class1,lon,no,dob,bg, add,name;
    int *rno;int div;
    public:
        student(){
            rno = new int;
            *rno = -1;
            div = -1;
            class1=lon=no=dob=bg=add=name = "";
        }
        void add_d(){
            cout<<"\nEnter name: ";cin>>name;
            cout<<"\nEnter Roll No: ";cin>>*rno;
            cout<<"\nEnter Class(FE/SE/TE/BE):";cin>>class1;
            cout<<"\nEnter Div(1/2/3/4):";cin>>div;
            cout<<"\nEnter Mobile No:";cin>>no;
            cout<<"\nEnter Blood Group:";cin>>bg;
            cout<<"\nEnter DOB:";cin>>dob;
            cout<<"\nEnter Address:";cin>>add;
            cout<<"\nEnter Driving License No:";cin>>lon;
            display();
        }
        void display(){
            cout<<"\nName: "<<name;
            cout<<"\nClass: "<<class1;
            cout<<"\nRoll No: "<<*rno;
            cout<<"\nDiv: "<<div;
            cout<<"\nMob No: "<<no;
            cout<<"\nBlood Group: "<<bg;
            cout<<"\nDOB: "<<dob;
            cout<<"\nAddress: "<<add;
            cout<<"\nDriving License No: "<<lon;
        }
        static void header(){
            cout<<"\nStudent Information Database";
        }
        ~student(){
            delete rno;
        }
        friend class faculty;
};
class faculty{
    int id;
    public:
    faculty(){
        id=-000;
    }
    faculty(const faculty &f1){
        id = f1.id;
    }
    void f_display(student &obj, int f_d){
        try
        {
            if (f_d==obj.div)
            {
                obj.display();
            }
            
            
        }
        catch(int x)
        {
            cout<<"\nInvalid Division";
        }
        
    }
};
int main(){
    student s[5];
    faculty f;
    int flag = 1,c,count = 0;
    while (flag ==1)
    {
        cout<<"\n1. Enter Student Details";
        cout<<"\n2. Display Student Details";
        cout<<"\n3. Display Faculty wise marks";
        cout<<"\n4. Exit";
        cout<<"\nEnter your choice: ";
        cin>>c;
        switch (c)
        {
        case 1:
            s[count].add_d();
            count++;
            break;
        case 2:
            for(int i = 0;i<count;i++){
                student::header();
                s[i].display();
            }
            break;
        case 3:
            int f_div;
            cout<<"Enter faculty division: ";
            cin>>f_div;
            for (int i = 0; i < count; i++)
            {
                f.f_display(s[i],f_div);
            }
            break;
        case 4:
            flag = 0;
            break;
        default:
            break;
        }
    }
    
    return 0;
}