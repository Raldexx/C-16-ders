#include <iostream>
using namespace std;

int main(){

 char islem;
 float x,y;
 cout<<"Bir islem secin (+,-,*,/):";
 cin>>islem;
 cout<<"Iki sayi giriniz: ";
 cin>>x>>y;
 switch(islem) {
    case '+': cout<<"\nx+y="<<x+y;break;
    case '-': cout<<"\nx-y="<<x-y;break;
    case '*': cout<<"\nx*y="<<x*y;break;
    case '/': cout<<"\nx/y="<<x/y;break;
    default: cout<<"La gardas sana diyoz 4 islem sen giriyon aptal seyler simarma la!";
 }
return 0;
}