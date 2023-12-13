// Write a program in C++ to use map associative container. The keys will be the names of states
// and the values will be the populations of the states. When the program runs, the user is
// prompted to type the name of a state. The program then looks in the map, using the state
// name as an index and returns the population of the state.






#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    typedef map<string,int> mapType;
    mapType pm;
    pm.insert(pair<string,int>("India",1400));
    pm.insert(pair<string,int>("China",1500));
    pm.insert(pair<string,int>("America",140));
    pm.insert(pair<string,int>("Pakistan",50));
    pm.insert(pair<string,int>("Nepal",20));
    mapType :: iterator it;
    cout<<"\nSize of Map: "<<pm.size();
    cout<<"\nMap:\n";
    for(it = pm.begin();it!=pm.end();it++){
        cout<<it->first<<" : "<<it->second<<" million"<<endl;
    }
    string n;
    cout<<"\nEnter a country name to find in the map: ";
    cin>>n;
    it = pm.find(n);
    if (it!=pm.end())
    {
        cout<<"\n"<<n<<" : "<<it->second<<" million";
    }
    else{
        cout<<"\n"<<n<<" not found in the map";
    }
    
    return 0;
}