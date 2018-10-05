//Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50.You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer.
#include <iostream>
using namespace std;
//Main function
int main()
{
    //Declare required variables
    int x,y,z;
    float sum;
    //Use loop to find variation in number of one variable
    for(z=1;z<100;z++)
    {
        //Use nested loop to find variation in 2nd variable
        for(y=1;y<100;y++)
        {
            //Express 3rd variable in terms of other twos
            x=100-(y+z);
            //Put given equation
            sum=(x+(0.5*y)+(3*z));
            //Put condition to find required numbers
            if(sum==100 && x>0)
            {
            //Print the values
            cout<<"No. of apples:"<<x<<" No. of bananas:"<<y<<" No. of mangoes:"<<z;
            cout<<endl;
            }
        }
    }
    return 0;
}
