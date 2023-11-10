


#include <iostream>

class cls
{
    public :
    std::string data;
    cls() : data("something..") {};

};

class test
{
    public:
    int i;
    std::string str;
    std::string *ptr;
    cls obj;
    cls *obj_ptr;

    test() {};
};

std::string ft_printstr(std::string str)
{

     if (str.empty())
        return ("Empty string");
    else 
        return str;
}

std::string ft_printptr(std::string *ptr)
{

    if(ptr == NULL)
        return "NULL";
    else if(*ptr == "")
        return "Ptr points into an emptystring.";
    else
        return *ptr;

}

std::string ft_printobj(cls obj)
{
    return obj.data;
}

std::string ft_printobj_ptr(cls *obj_ptr)
{
    if(obj_ptr == NULL)
        return ("NULL");
    else  
        return obj_ptr->data;
    
}

int main ()
{
    // default initialization
    test D;
    std::cout << "--" << D.i << "--" << std::endl;
    std::cout << "--" << ft_printstr(D.str) << "--" << std::endl;
    std::cout << "--" << ft_printptr(D.ptr) << "--" << std::endl;
    std::cout << "--" << ft_printobj(D.obj) << "--" << std::endl;
    std::cout << "--" << ft_printobj_ptr(D.obj_ptr) << "--" << std::endl;

    return (0);
}

