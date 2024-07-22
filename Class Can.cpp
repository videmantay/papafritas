#include <iostream>  
#include <string>

class Can                      
{
public:                     
    Can(int cansize);       
    Can(const Can& copy_from); 
    Can& operator=(const Can& copy_from); 
    ~Can(); 

    int GetSize() const;
    void SetSize(int size);



private:                      
    int size;                
    char* string;
};

Can::Can(int BaseSize)
{
    size = BaseSize;
    string = new char[0]();
}

//through a mix of translating a code on creating a class to ask a cat how old it is i kinda deconstructed and got this i think we just gotta get our two codes working together
