#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main() {
    int x;

    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0; i<=4; i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
srand(time(0));
    cout<<"PERULANGAN WHILE"<<endl;
    x = 1 + rand()%10;

    while(x>=5){
        cout<<"Bilangan acak = "<<x<<endl;
        x = rand()%10;
    }
    
    cout<<"Bilangan acak while yang terakhir = "<<x<<endl;
    cout<<endl;

    return 0;
    
}