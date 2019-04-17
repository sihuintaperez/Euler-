5#include <iostream>

using namespace std;

//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

int invertir(int num){
    int resto,numInv=0;

    if(num>=10){
        while(num>0){
            resto=num%10;
            num=num/10;
            numInv=numInv*10+resto;
        }
    }
    return numInv;
}

int main()
{
    int n;
    int aux=999;
    while(aux<1000 && aux>900){
            for(int i=999;i<1000 && i>900;i--){
                n=aux*i;
                if(n==invertir(n)){
                    cout<<n<<endl;
                    break;
                }
            }
    aux--;
    }

}
//https://www.youtube.com/watch?v=EzjKLgPbq0c (invertir numero)
