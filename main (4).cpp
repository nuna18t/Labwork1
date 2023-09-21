#include <iostream>
using namespace std;
 
int main()
{
    //Begin Дано число A.
    //Обчислити A15, використовуючи дві допоміжні змінні і п'ять операцій множення.
    //Послідовно знайти A2, A3, A5, A10, A15.
    //Вивести всі знайдені степені числа A.
    //декларації
    long A, p1, p2;
    //обчислення
    cout<<"Enter val : ";cin>>A;
    //виведення
    cout<<"A2 = "<<(p1 = A*A)<<endl;
    cout<<"A3 = "<<(p2 = p1*A)<<endl;
    cout<<"A5 = "<<(p1 = p2*A)<<endl;
    cout<<"A10= "<<(p2 = p1*p1)<<endl;
    cout<<"A15= "<<(p1 = p2*p1)<<endl;
    system("pause");
    return 0;
}