#include <iostream>
using namespace std;

int main(){
    int input, binaryOutput = 0, power = 1, total = 0;

    for(int i=1; i<=5; i++){
    cout<<"Enter your input number "<<i<<": ";
    cin>>input;
    total+=input; 
    }
    while(total>0){
        int parity = total%2;
        total/=2;
        binaryOutput+=parity*power;
        power*=10;
    }
    cout<<"Your sum of inputs in binary format is: "<<binaryOutput<<endl;

    return 0;
}