





//prtotype :
// std::istream& getline(std::istream& is, std::string& str, char delim = '\n');

// simply 

// istream getline(istream is, string str, chat delim)


// The & symbol == the parameters are passed by reference.
// delim is optional - by default == "\n";
// istream:  it's a class type that represents an input stream, such as the standard input stream (std::cin).


// example 1
#include <iostream>
using std::cout;
using std::endl;
int main ()
{
    std::string str;

    while(1)
    {
        std::getline(std::cin, str);
        if(str == "")
            cout << "you press enter == empty string" << str << endl;
        else
            cout << "you entered : "<< str <<endl;
    }

}
