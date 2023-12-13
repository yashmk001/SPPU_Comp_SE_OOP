// Imagine a publishing company which does marketing for book and audio cassette versions.
// Create a class publication that stores the title (a string) and price (type float) of publications.
// From this class derive two classes: book which adds a page count (type int) and tape which
// adds a playing time in minutes (type float).
// Write a program that instantiates the book and tape class, allows user to enter data and
// displays the data members. If an exception is caught, replace all the data member values with
// zero values.



#include<iostream>
using namespace std;
class publication{
    public:
    string title;
    float price;
    public:
    void add(){
        cout<<"\nEnter Publication Details:";
        cout<<"\nEnter title: ";
        cin>>title;
        cout<<"\nEnter price: ";
        cin>>price;
    }
    void display(){
        cout<<"\nTitle: "<<title;
        cout<<"\nPrice: "<<price;
    }
};
class page : public publication{
    int p_cnt;
    public:
    void add_p(){
        try
        {
            add();
            cout<<"\nEnter Page Count: ";
            cin>>p_cnt;
            if (p_cnt<=0)
            {
                throw p_cnt;
            }
            
        }
        catch(int)
        {
            cout<<"\nInvalid Page Count";
        }
        
    }
    void display_p(){
        display();
        cout<<"\nPage Count: "<<p_cnt;
    }
};
class tape : public publication{
    float time;
    public:
    void add_t(){
        try
        {
            add();
            cout<<"\nEnter Time: ";
            cin>>time;
            if (time<=0)
            {
                throw time;
            }
            
        }
        catch(float)
        {
            cout<<"\nInvalid Time";
        }
        
        
    }
    void display_t(){
        display();
        cout<<"\nTime: "<<time;
    }
};
int main(){
    page p[10];
    tape t[10];
    int bs,ts;
    int c;
    int flag = 1;
    while (flag == 1)
    {
        cout<<"\nPublication Information";
        cout<<"\n1. Add Book";
        cout<<"\n2. Display Book";
        cout<<"\n3. Add Tape";
        cout<<"\n4. Display Tape";
        cout<<"\n5. Exit";
        cout<<"\nEnter your choice: ";
        cin>>c;
        switch (c)
        {
        case 1:
            cout<<"\nEnter total no of books to add: ";
            cin>>bs;
            for (int i = 0; i < bs; i++)
            {
                p[i].add_p();
            }
            
            break;
        case 2:
            for (int i = 0; i < bs; i++)
            {
                p[i].display_p();
            }
            break;
        case 3:
            cout<<"\nEnter total no of tapes to add: ";
            cin>>ts;
            for (int i = 0; i < ts; i++)
            {
                t[i].add_t();
            }
            break;
        case 4:
            for (int i = 0; i < ts; i++)
            {
                t[i].display_t();
            }
            break;
        case 5:
            cout<<"\nThank You!";
            flag = 0;
            break;
        default:
            break;
        }
    }
    
    
    return 0;
}