#include <iostream>

using namespace std;

int main()
{
    char whichPackage;
    int howManyJams=0;
    int JamIncludes=0;
    int jamPrice=0;
    int monthlyFee=0;
    int totalCost=0;
    
    cout<<"Which package you choose from A , B  or C "<<endl;
    cin>>whichPackage;
    
    cout<<"how many jam , jellies or preserve do you have "<<endl;
    cin>>howManyJams;
    
    if(whichPackage == 'a' || whichPackage == 'A')
    {
        monthlyFee=8;
        JamIncludes=2;
        jamPrice=5;
        
    }
    else if(whichPackage == 'b' || whichPackage == 'B')
    {
        monthlyFee=12;
        JamIncludes=4;
        jamPrice=4;
    }
    else if(whichPackage == 'c' || whichPackage == 'C')
    {
        monthlyFee=15;
        JamIncludes=6;
        jamPrice=3;
    }
    else
    {
        cout<<"You choose non-existent package";
    }

    if(howManyJams<=JamIncludes)
    {
        totalCost=monthlyFee;
    }
    else
    {
        totalCost=monthlyFee+(howManyJams-JamIncludes)*jamPrice;
    }
    
    cout<<"You owe $ "<<totalCost<<endl;
    
    return 0;
}
