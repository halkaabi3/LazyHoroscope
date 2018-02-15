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

cout<<"What is your first name?"<<endl;
cin>>first_name;

cout<<"What is your last name?"<<endl;
cin>>last_name;

//tell fortune

cout<<"Welcome, "<<first_name[0]<<"."<<last_name[0]<<"."<<", here is your fortune..."<<endl;

cout<<"your lucky number is "<<first_name.length()<<endl;

if (first_name[0] == 'U' || first_name[0] == 'u' || first_name[0] == 'A' || first_name[0] == 'a' || first_name[0] == 'E' || first_name[0] == 'e' || first_name[0] == 'I' || first_name[0] == 'i' || first_name[0] == 'O' || first_name[0] == 'o')

{
cout<<"you are destined to be famous!"<<endl;
}

else {

cout<<"you should keep a low profile."<<endl;

}




if ( last_name[last_name.length() - 1] == 'a' || last_name[last_name.length() - 1] == 'A' || last_name[last_name.length() - 1] == 'u' || last_name[last_name.length() - 1] == 'U' || last_name[last_name.length() - 1] == 'e' || last_name[last_name.length() - 1] == 'E' || last_name[last_name.length() - 1] == 'i' || last_name[last_name.length() - 1] == 'I' || last_name[last_name.length() - 1] == 'o' || last_name[last_name.length() - 1] == 'O')

{


cout<<"you have already met your true love."<<endl;


}


else{}

cout<<"have a good day!"<<endl;

  return 0;
}
