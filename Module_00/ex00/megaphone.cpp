

#include <iostream>

void    ft_toupper(char *str)
{
    int j = 0;
    while(str && str[j])
    {
        if(str[j] >= 'a' && str[j] <= 'z')
        {
            str[j] = str[j] - 32;
            std::cout << str[j];
        }
        else
            std::cout << str[j];
        j++;
    }
}

int main (int argc, char **argv)
{
    int i;

    i = 1;
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    }

    else
    {
        while(argv && argv[i])
        {
            ft_toupper(argv[i]);
            i++;
        }
        std::cout << "\n";
    }
    
}