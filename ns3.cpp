#include <iostream>

using namespace std;

int main(){
    int num1=0, num2=0, binarynum1, binarynum2, power=1;
    cout<<"enter your first binary number: ";
    cin>>binarynum1;
    cout<<"enter your second binary number: ";
    cin>>binarynum2;

    while(binarynum1>0){
        int lastDigit = binarynum1%10;
        binarynum1/=10;
        num1+=lastDigit*power;
        power*=2;
    }
    power=1;
    cout<<"your first decimal number is: "<<num1<<endl;
    while(binarynum2>0){
        int lastDigit = binarynum2%10;
        binarynum2/=10;
        num2+=lastDigit*power;
        power*=2;
    }
    cout<<"your second decimal number is: "<<num2<<endl;

    if(num1>num2){
        cout<<"the greatest number is: "<<num1<<endl;
    }
    else{
        cout<<"the greatest number is: "<<num2<<endl;
    }
    return 0;
}