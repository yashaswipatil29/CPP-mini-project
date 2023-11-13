
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(nullptr));
    bool guessednumber=false;
    int guesscount=0;
    int computernumber=rand()%100+1;
    int ourguess;
    
    while(!guessednumber)
    {
        cout<<"Enter you guess "<<endl;
        cin>>ourguess;
        
        if(ourguess>100 || ourguess<1)
        {
            cout<<"It is wasted guess pick the number betwwen 1 to 100";
            
            continue;
            guesscount++;
        }
        
        if(ourguess==computernumber)
        {
            cout<<"Congragulations ! you guessed the number in "<<guesscount<<" Thanks for playing";
            guessednumber=true;
        }
        else if(ourguess>computernumber)
        {
            cout<<"Your guess is too high "<<endl;
        }
        else
        {
            cout<<"your guess is too low"<<endl;
        }
        guesscount++;
    }
    return 0;
    
}
