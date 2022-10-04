#include <iostream>

using namespace std;

template <typename T>
void ArraySort(T* array, int size)
{

}

struct Student
{
    char name[50];
    unsigned int age;
    float label;
};




class User
{
    char name[50];
    int age;
    float label;

public:
    void AgeInit(int a)
    {
        if(a > 0 && a < 100)
            age = a;
    }
    int AgeReturn()
    {
        return age;
    }

    void SayHello()
    {
        cout << "Hello People!\n";
    }

    //void Method();
};

//void User::Method()
//{
//    cout << "It's sample method\n";
//}

void SayHello()
{
    cout << "Hello World!\n";
}




int main()
{
    
    SayHello();
    
    User user;
    user.SayHello();
    //user.Method();
    
    //Student group;
    //group.age = -10;

    //User user;
    ////user.age = 10;
    //user.AgeInit(16);

    //std::cout << "age of user = " << user.AgeReturn() << "\n";
}
