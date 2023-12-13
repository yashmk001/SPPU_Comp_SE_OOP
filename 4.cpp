// Write a C++ program that creates an output file, writes information to it, closes the file, open
// it again as an input file and read the information from the file.








#include<iostream>
#include<fstream>
using namespace std;
class student{
    int rno;
    string name;
    public:
    void add(){
        fstream fs;
        fs.open("sample.txt",ios::app);
        if (!fs)
        {
            cout<<"\nFile Creation Failed!";
        }else
        {
            cout<<"\nEnter Student Name: ";
            cin>>name;
            cout<<"\nEnter Student Roll No: ";
            cin>>rno;
            fs<<name<<" "<<rno<<"\n";
            fs.close();
        }
        
        
    }
    void display(){
        fstream fs;
        fs.open("sample.txt",ios::in);
        if (!fs)
        {
            cout<<"File Not Found";
        }else
        {
            while (!fs.eof())
            {
                fs>>name;
                fs>>rno;
                if (!fs.eof())
                {
                    cout<<"Name: "<<name<<endl;
                    cout<<"Roll No: "<<rno<<endl;
                }
                cout<<endl;
            }
            
        }
        fs.close();
        
    }
};
int main(){
    student s;
    int ch, flag = 1;
    while (flag == 1)
    {
        cout<<"\n1. Add student info";
        cout<<"\n2. Display student info";
        cout<<"\n3. Exit";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            s.add();
            break;
        case 2:
            s.display();
            break;
        case 3:
            flag = 0;
            break;
        
        default:
            break;
        }
    }
    
    return 0;
}