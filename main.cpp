//Author: Helal Alkaabi
#include<iostream>
#include<string>

using namespace std;

int main()
{

//declare variables

string first_name;
string last_name;
int lucky;

//get user input

cout<<"What's your first name"<<endl;
cin>>first_name;

cout<<"What's your last name"<<endl;
cin>>last_name;

//tell fortune

cout<<"Welcome "<<first_name[0]<<"."<<last_name[0]<<"."<<", here is your fortune..."<<endl;

cout<<"your lucky number is "<<first_name.length()<<endl;


  return 0;
}
