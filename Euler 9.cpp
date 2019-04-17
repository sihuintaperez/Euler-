#include <iostream>

using namespace std;

//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//a2 + b2 = c2
//For example, 32 + 42 = 9 + 16 = 25 = 52.
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

int main()
{
    int a,b,c;
    for(a=1;a<1000;a++){
        for(b=1;b<1000;b++){
            c=1000-(a+b);

            if(a*a+b*b==c*c){
                cout<<a*b*c<<endl;
                break;
            }
        }

    }
}
