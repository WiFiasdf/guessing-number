#include<iostream>
using namespace std;
int main(void)
{
    int guessnum;//guess number
    srand((unsigned)time(NULL)); 
    guessnum = rand()%100+1;
    int user_input=0;//user's input number
    
    while (1)//running forever
    {
        cin>>user_input;
        if (user_input<guessnum)//user's input smaller than guess number
        {
            cout<<"输入的数字小了"<<endl;
        }
        else if (user_input>guessnum)//user's input bigger than guess number
        {
            cout<<"输入的数字大了"<<endl;
        }
        else//user's input is guess number
        {
            cout<<"恭喜您猜对了"<<endl;
            break;//get out of this while()
        }
        
        
    }
    
    return 0;
}