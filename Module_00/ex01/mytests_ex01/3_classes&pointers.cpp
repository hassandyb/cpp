

#include <iostream>



class myclass
{
public:
    int data;
    void ft_setdata(int value);
    void ft_printdata();

};

void myclass::ft_setdata(int value)
{
    this->data = value;
}

void myclass::ft_printdata()
{
    std::cout << "Data = " << this->data<< std::endl;
}

void ft_fullandprint(myclass &objx, int v)
{
    objx.ft_setdata(v);
    objx.ft_printdata();
}

int main ()
{
    myclass objectx;

    //example 1 inside 
    
    // objectx.ft_setdata(44);
    // objectx.ft_printdata();
    

    // example 2 out side 
    // ft_fullandprint(objectx, 44);


    //example 3 using a pointer 
    // myclass *ptr = new myclass();
    // ptr->ft_setdata(44);
    // ptr->ft_printdata();



}