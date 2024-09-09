Function in Cpp

que 1

#include<iostream>
using namespace std;
void printHello(){
    cout<<"hello Rajesh How are you: "<<endl;
}
int main(){
    printHello();
    printHello();
    return 0;
    
}

 Parameter

que 2

#include<iostream>
using namespace std;
int sum(int a, int b){
    int s=a+b;
    return 5;
}
int main(){
    cout<<sum(10,5)<<endl;
    return 0;
    
}

que 4

#include<iostream>
using namespace std;
int sumN(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    cout<<sumN(5)<<endl;
    cout<<sumN(10)<<endl;
    
}

que 5
#include<iostream>
using namespace std;
int factorialN(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
        
    }
    return fact;
}
int main(){
    cout<<factorialN(5)<<endl;
    cout<<factorialN(10)<<endl;
}
