

#include <iostream>

class person 
{
public:
    person(std:: string name_value, int age_value) : name(name_value), age(age_value) {}

    void ft_desplay()
    {
        std::cout << "Nmae: " << name << "| Age: " << age << std::endl;
    }
    std::string name;
    int age;
private:
    
};

int main ()
{
    person *p1 = new person("john wick", 47);
    person *p2 = new person("hassan ed-dyb", 26);
    person *p3 = new person("jack reacher", 46);

    // p1->ft_desplay();
    // p2->ft_desplay();
    // p3->ft_desplay();

    // std::cout << p1->name << std::endl;


}
