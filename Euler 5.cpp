#include <iostream>

using namespace std;

//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

int main()
{
    /*
    int i=10;
    while (i%2!=0||i%3!=0||i%4!=0|| i%5!=0||i%6!=0||i%7!=0||i%8!=0||i%9!=0||i%10||i%11!=0||i%12!=0||i%13!=0||i%14!=0||i%15!=0||i%16!=0||i%17!=0||i%18!=0||i%19||i%20!=0){
        i+=10;
    }
    cout<<i;
    */
    int a =10;
    for(int i =2;i<=10;i++){
        while(a%i==0){
            a=a+10;
        }
    cout<<a;
    }
}
//https://www.mathblog.dk/project-euler-problem-5/
