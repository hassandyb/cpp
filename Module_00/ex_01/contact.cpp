

#include "contact.hpp"


void contact::ft_addindex(int idx)
{
    this->index = idx;
}

void contact::ft_addfirstname(string str)
{
    this->firstname = str;
}

void contact::ft_addlastname(string str)
{
    this->lastname = str;
}

void contact::ft_addnickname(string str)
{
    this->nickname = str;
}

void contact::ft_addnumber(string str)
{
    this->phonenumber = str;
}

void contact::ft_addsecret(string str)
{
    this->darkestsecret = str;
}

int contact::ft_check_empty()
{
    if(this->firstname == "")
        return (1);
    return (0);

}

void ft_desplay_alined(string str)
{
    int i = str.length();

    if(i == 10)
        cout << str;
        
    else if(i < 10)
    {
        cout << str;
        for (int j = 0; j < 10 - i; j++)
            cout << " ";
    }
    else
    {
        for(int j = 0; j < 9 ; j++)
           cout <<  str[j];
        cout << ".";
    }
}

void contact::ft_show_info()
{
    string *str;
    cout << this->index << "|";
    ft_desplay_alined(this->firstname);
    cout << "|";
    ft_desplay_alined(this->lastname);
    cout << "|";
    ft_desplay_alined(this->nickname);
    cout << endl;
}


void contact::ft_show_full_info()
{
    cout << "index          : " << this->index << endl;
    cout << "First name     : " << this->firstname << endl;
    cout << "Last name      : " << this->lastname << endl;
    cout << "Nick name      : " << this->nickname << endl;
    cout << "Phone number   : " << this->phonenumber << endl;
    cout << "darkest secret : " << this->darkestsecret << endl;
}


