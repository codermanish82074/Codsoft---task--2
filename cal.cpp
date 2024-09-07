#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int choice;
    cout<<"Enter 2 int:";
    cin>>a>>b;
    cout<<"select an operator:";
    cout<<"\n1.Add\n2.sub\n3.mult\n4.div"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Add of a and b is = "<<a+b;
            break;
        case 2:
            cout<<"sub of a and b is = "<<a-b;
            break;
        case 3:
            cout<<"mult of a and b is = "<<a*b;
            break;
        case 4:
            cout<<"div of a and b is = "<<a/b;
            break;
        default:
            cout<<"wrong choice! try again";
    
    }
    return 0;
}
