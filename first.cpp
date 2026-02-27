/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number");
    scanf("%d",&x);
    y=x*x;
    printf("Square of %d is %d",x,y);
    printf("\n");
    return 0;
}
*/
/*
Output Instruction
    printf - predefined function
    cout   - predefined object
    <<     - insertion operator

    printf("Welcome");
    cout<<"Welcome";

    printf("Value of x is %d",x);
    cout<<"Value of x is "<<x;

    printf("Sum of %d and %d is %d",a,b,a+b);
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
Input Instruction
    scanf  - predefined function
    cin    - predefined object
    >>     - extraction operator

    scanf("%d",&x);
    cin>>x;

    scanf("%d%d%d",&a,&b,&c);
    cin>>a>>b>>c;
Manipulator
    endl

namespace

Team 1:
    namespace - n1
        v1,v2,
        f1,f2,
        c1,c2,
Team 2:
    namespace - n2
        v3,v4,v5
        f1,f3,f4
        c1,c3,c4,c5

namespace n1
{
    int v1,v2;
    void f1();
}

namespace::name
*/
/*
#include<iostream>
int main()
{
    int x,y;
    std::cout<<"Enter a number";
    std::cin>>x;
    y=x*x;
    std::cout<<"Square of "<<x<<" is "<<y;
    std::cout<<std::endl;
    return 0;
}

class
    variables
    functions
    operators

object.variables
object.functions

object.operators (बाद में बताऊंगा)
objectoperator

*/
/*
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter a number";
    cin>>x;
    y=x*x;
    cout<<"Square of "<<x<<" is "<<y;
    cout<<endl;
    return 0;
}

#include<iostream>
using namespace std;
inline int add(int,int);
int main()
{
    int r=add(3,4);
    cout<<"Result is: "<<r;
    cout<<endl;
    return 0;
}

int add(int a,int b)
{
    return a+b;
}

#include<iostream>
#include<string.h>
using namespace std;
struct Book
{
    private:
        int bookid;
        char title[20];
        float price;
    public:
    void showBook()
    {
        cout<<endl<<bookid<<" "<<title<<" "<<price;
    }
    void setBook(int id,char t[],float p)
    {
        bookid=id;
        strcpy(title,t);
        price=p;
    }
};
int main()
{
    Book b1;
    // b1.bookid=-2;
    b1.setBook(1,"Java",345.0);
    b1.showBook();
    return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    private:
        int bookid;
        char title[20];
        float price;
    public:
    void showBook()
    {
        cout<<endl<<bookid<<" "<<title<<" "<<price;
    }
    void setBook(int id,char t[],float p)
    {
        bookid=id;
        strcpy(title,t);
        price=p;
    }
};
int main()
{
    Book b1;
    // b1.bookid=-2;
    b1.setBook(1,"Java",345.0);
    b1.showBook();
    return 0;
}

static local variable are created at the starting of program and resides in memory till the program ends.

#include<iostream>
using namespace std;

void f1()
{
    int x=0; //local variable
    static int y; //static local variable
    x++;
    y++;
    cout<<"x="<<x<<"y="<<y<<endl;
}
int main()
{
    f1();
    f1();
    f1();
    cout<<endl;
    return 0;
}

#include<iostream>
using namespace std;
class Test
{
    public:
        int a,b; //Instance Member Variables
        static int k; //Static Member Variable | class variable

};
int Test::k;
void f1()
{
    Test t1,t2; //t1: {a,b}, t1: {a,b}
    t1.a=5; //t1: {a=5,b}, t1: {a,b}
    cout<<t2.a<<endl; //garbage value
    t1.k=10;
    cout<<t2.k;
}
void f2()
{
    Test::k=10;
    cout<<Test::k;
}
int main()
{
    // f1();
    f2();
    cout<<endl;
    return 0;
}

#include<iostream>
using namespace std;
class Test
{
    private:
        int a,b; //Instance Member Variables
        static int k; //Static Member Variable | class variable
    public:
        void set_a(int x) {a=x;}
        void set_b(int y) {b=y;}
        void show_a() {cout<<"a="<<a<<endl;}
        void show_b() {cout<<"b="<<b<<endl;}
        static void set_k(int z) {k=z;}
        static void show_k() {cout<<"k="<<k<<endl;}
};
int Test::k;
void f1()
{
    Test t1,t2; //t1: {a,b}, t1: {a,b} Test: k=0
    t1.set_a(5); //t1: {a=5,b}, t1: {a,b} Test: k=0
    t2.show_a();
    t1.set_k(10); //t1: {a=5,b}, t1: {a,b} Test: k=10
    t2.show_k();
}
void f2()
{
    Test::set_k(10); //t1: {a=5,b}, t1: {a,b} Test: k=10
    Test::show_k();
}
int main()
{
    f1();
    cout<<endl;
    return 0;
}

#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void setData(int,int);
        void showData();
        Complex add(Complex);
        Complex subtract(Complex);
        Complex multiply(Complex);
};
Complex Complex::add(Complex c)
{
    Complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
Complex Complex::subtract(Complex c)
{
    Complex temp;
    temp.a=a-c.a;
    temp.b=b-c.b;
    return temp;
}
Complex Complex::multiply(Complex c)
{
    Complex temp;
    temp.a=a*c.a-b*c.b;
    temp.b=a*c.b+b*c.a;
    return temp;
}
void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
int main()
{
    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(2,-3);
    c1.showData();
    c2.showData();
    c3=c1.add(c2);
    c3.showData();
    c3=c1.subtract(c2);
    c3.showData();
    c3=c1.multiply(c2);
    c3.showData();
    return 0;
}

#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        // Complex() {} // Empty body & Non Parameterised | Compiler only defines this if you did't defined any constructor yourself.
        Complex()
        {
            a=0; b=0;
        }
        Complex(int x)
        {
            a=x; b=0;
        }
        Complex(int x,int y)
        {
            a=x; b=y;
        }
        // Complex(Complex &C)
        // {
        //     a=C.a;
        //     b=C.b;
        // }
        // If we nedd to define copy constructor, this is how it should look like.
        void setData(int x,int y)
        {
            a=x; b=y;
        }
        void showData()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
};
int main()
{
    Complex c1,c2(5),c3(2,5);
    Complex c4=c3;
    c1.setData(3,4);
    c1.showData();
    c2.showData();
    c3.showData();
    cout<<endl;
    return 0;
}

#include<iostream>
using namespace std;
// Example 1
class A
{
    private:
        int a,b,c;
    public:
        // A(int x,int y,int z)
        // {
        //     a=x;
        //     b=y;
        //     c=z;
        // }
        // A(int a,int b,int c):a(a),b(b),c(c)
        // {
        //     // 
        // }
        A(int x,int y,int z):a(x),b(y),c(z)
        {
            // 
        }
        void show()
        {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
};
int main()
{
    // A obj(1,2,3);
    A obj={1,2,3};
    obj.show();
    cout<<endl;
    return 0;
}

#include<iostream>
using namespace std;
// Example 2
class A
{
    private:
        int a,b,c;
        const int k=10;
    public:
        // A(int x,int y,int z)
        // {
        //     a=x;
        //     b=y;
        //     c=z;
        // }
        // A(int a,int b,int c):a(a),b(b),c(c)
        // {
        //     // 
        // }
        A(int x,int y,int z):a(x),b(y),c(z),k(4)
        {
            
        }
        void show()
        {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        void showk()
        {
            cout<<"k="<<k<<endl;
        }
};
int main()
{
    // A obj(1,2,3);
    A obj={1,2,3};
    obj.show();
    obj.showk();
    cout<<endl;
    return 0;
}
*/
#include<iostream>
using namespace std;
// Example 3
class A
{
    private:
        int a,b,c;
        int &k=a;
    public:
        // A(int x,int y,int z)
        // {
        //     a=x;
        //     b=y;
        //     c=z;
        // }
        // A(int a,int b,int c):a(a),b(b),c(c)
        // {
        //     // 
        // }
        A(int x,int y,int z):a(x),b(y),c(z),k(b)
        {
            
        }
        void show()
        {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        void showk()
        {
            cout<<"k="<<k<<endl;
        }
};
int main()
{
    // A obj(1,2,3);
    A obj={1,2,3};
    obj.show();
    obj.showk();
    cout<<endl;
    return 0;
}