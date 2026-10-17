#include <iostream>
#include <string>
using namespace std;
void calculator(int& a,int& b,int& c,int& s, char& p )
{
    if (p == '+'){
        s = a + b + c;
    }
    else if (p == '-'){
        s = a - b - c;
    }
    else if (p == '*'){
        s = a * b * c;
    }
    else{
        cout << "Такой команды нет" << endl;
    }

}
int main(){
    
    setlocale(LC_ALL, "Russian");
    cout << "Введите три числа "<< endl;
    int a;
    int s = 0;
    int b;
    int c;
    char p;
    cin >> a >> b >> c;  
    cout << "Введите команду(+,-,*) " << endl;
    cin >> p ;
    calculator(a,b,c,s,p);
    cout << s;
}