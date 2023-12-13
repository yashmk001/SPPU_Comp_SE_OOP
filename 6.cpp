// Write a C++ progarm for user defined exception and to throw the exception if the criteria does not meet
// 1. User has age between 18 and 55
// 2. User has income between Rs50000 and Rs100000 per month
// 3. User stays in Pune/Mumbai/Chennai/Bangalore
// 4. User has 2 wheeler and 4 wheeler





#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int age,sal,v;
    char city[20];
    int flag = 1,c;
    while (flag == 1)
    {
        cout<<"\nUser Info:";
        cout<<"\n1. Enter Age";
        cout<<"\n2. Enter Salary";
        cout<<"\n3. Enter City Name";
        cout<<"\n4. Enter Vehicle Information(2 for 2 wheeler/4 for wheeler)";
        cout<<"\n5. Exit";
        cout<<"\nEnter your choice: ";
        cin>>c;
        switch (c)
        {
        case 1:
            cout<<"\nEnter age: ";
            cin>>age;
            try
            {
                if (age>=18&&age<=55){
                    cout<<"\nAge: "<<age;
                }
                else
                {
                    throw age;
                }
                
            }
            catch(int)
            {
                cout<<"\nInvalid age";
            }
            
            break;
        case 2:
            cout<<"\nEnter Salary: ";
            cin>>sal;
            try
            {
                if (sal>=50000&&sal<=100000){
                    cout<<"\nSalary: "<<sal;
                }
                else
                {
                    throw sal;
                }
                
            }
            catch(int)
            {
                cout<<"\nInvalid Salary Info";
            }
            
            break;
        case 3:
            cout<<"\nEnter City Name; ";
            cin>>city;
            try
            {
                if ((strcmp(city,"Mumbai"))||(strcmp(city,"Pune"))||(strcmp(city,"Chennai"))||(strcmp(city,"Bangalore"))){
                    cout<<"\nCity: "<<city;
                }
                else
                {
                    throw city;
                }
                
            }
            catch(string)
            {
                cout<<"\nInvalid city";
            }
            
            break;
        case 4:
            cout<<"\nEnter Vehicle Details: ";
            cin>>v;
            try
            {
                if (v==2||v==4){
                    cout<<"\nVehicle wheel: "<<v;
                }
                else
                {
                    throw v;
                }
                
            }
            catch(int)
            {
                cout<<"\nInvalid Vehicle Details";
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