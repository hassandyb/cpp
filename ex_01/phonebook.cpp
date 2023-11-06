

#include "phonebook.hpp"


void phonebook::ft_add()
{
    string first;
    string last;
    string nick;
    string phone;
    string secret;
    
    cout << "Enter the first name : ";
    getline(cin, first);
    cout << "Enter the last name : ";
    getline(cin, last);
    cout << "Enter the nickname : ";
    getline(cin, nick);
    cout << "Enter the phone number : ";
    getline(cin, phone);
    cout << "Enter the darkest secret : ";
    getline(cin, secret);

    if(first == "" || last == "" || nick == "" || phone == "" || secret == "")
        return ;

    this->data[count].ft_addfirstname(first);
    this->data[count].ft_addlastname(last);
    this->data[count].ft_addnickname(nick);
    this->data[count].ft_addnumber(phone);
    this->data[count].ft_addsecret(secret);
    this->data[count].ft_addindex(count);

    this->count++;
    if(count == 8)
        count = 0;
}

int main ()
{
    phonebook *ptr = new phonebook();
    string command;


    while(getline(cin, command))
    {

        if(command.compare("ADD") == 0)
        {
            ptr->ft_add();
            cout << ptr->data[0].firstname;
        }
            
        
        // if(command.compare("SEARCH") == 0)
        //     ptr->ft_search();

        // if(command.compare("EXIT") == 0)
        //     return (0);   
     }

}