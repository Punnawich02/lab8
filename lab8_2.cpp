#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: " ;
    getline(cin,name);

    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    
    int st_ID;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> st_ID;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR "<< int(st_ID/1e7) - 12 << ". I have a free movie ticket for you.";
    cout << "Fahsai: Let's go to the cinema together!!!\n" ;
    
    string movie;
    cout << "Fahsai: What movie do you want to watch?\n" ;
    cout << name << ": ";
    getline(cin,movie); 

    string day;
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";    
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie <<" with you.\n" ;

    string ans;
    cout << name << ": ";
    getline(cin,ans);

    cout << "Fahsai: 555+ see you "<< day <<". Bye Bye \\(^ ^)/";
}