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
*/
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