

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

void phonebook::ft_desplay_contacts()
{
    for(int i = 0; i < this->count; i++)
    {
        this->data[i].ft_show_info();
    }
}

void    phonebook::ft_search()
{
    string index_str;
    int    index_int;
    if(this->count == 0 && this->data[0].ft_check_empty() == 1)
    {
       cout << "No contacts to show!"<< endl; 
       return ;
    }
    
    ft_desplay_contacts();
    

    cout << "\nEnter index of contact to display : ";
    cin >> index_str;
    if(index_str.length() != 1 || (index_str[0] < '0' || index_str[0] > '9'))
    {
        cout << "Invalid input, Enter SEARCH again and enter a valid index." << endl;
        return ;
    }
    index_int = stoi(index_str);
    if(index_str[0] < '0' || index_int >= this->count)
    {
        cout << "Invalid input, Enter SEARCH again and enter a valid index." << endl;
        return ;
    }
    this->data[index_int].ft_show_full_info();

}

void ft_print(phonebook *p)
{
    for(int i = 0; i < 8; i++)
        p->data[i].ft_print_contact();
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
        }
            
        
        if(command.compare("SEARCH") == 0)
            ptr->ft_search();

        // if(command.compare("EXIT") == 0)
        //     return (0);   
     }

}