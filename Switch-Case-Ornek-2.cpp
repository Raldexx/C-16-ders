#include <iostream>
using namespace std;

int main(){
int sayi;

cout<<"Pozitif bir sayi giriniz:\n";
cin>>sayi;
switch (sayi % 2){
    case 0:cout<<"Bu cift bir sayi\n";break;
    case 1:cout<<"Bu tek bir sayi\n";break;
}




return 0;
}