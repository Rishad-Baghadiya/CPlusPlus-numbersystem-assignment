#include<iostream>
using namespace std;

int main(){

    int input, numberOfZeros = 0, binaryOutput = 0, power = 1;
    int parity;
    cout<<"Enter a natural number for which you want to count the number of zeros in its binary format : ";
    cin>>input;

    while(input>0){
        parity = input%2;
        input/=2;
        binaryOutput+=parity*power;
        power*=10;
    }
    cout<<"binary output : "<<binaryOutput<<endl;

    while(binaryOutput>0){
        if(parity==1){
            binaryOutput%10==0? numberOfZeros++ : numberOfZeros ;
            binaryOutput/=10;
        }
    }
    cout<<"Number of zeroes in "<<binaryOutput<<" is: "<<numberOfZeros<<endl;

    return 0;
}