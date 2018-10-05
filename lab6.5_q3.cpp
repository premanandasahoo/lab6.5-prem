//the integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. 
//The next such number is 1225 which is 352, and the sum of the integers from 1 through 49.
//Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n.
#include <iostream>
using namespace std;
//Main Function
int main()
{
    //Declare variables
    long i,j,n,count;
    //Initiate a new variable in order to compare it with the number later
    long z=1225;
    cout<<"Enter number:"<<endl;
    cin>>n;
    cout<<"No.="<<n<<endl;
    //Initiate loop to find sum of natural numbers from 1 to i
    for(count=1;count<=n;count++)
    {
        for(i=1;i>0;i++)
        {
            //Find sum
            long sum=i*(i+1)/2;
            //Initiate loop to find the square
            for(j=1;j<=i;j++)
            {
                //Find square
                long sq=j*j;
                //Put conditions to get required values
                if(sq==sum && sq>z)
                {
                    //Print the required values
                    cout<<"The next number is:"<<sq<<endl;
                    //Assign the number got to the variable used for comparing so that one can get next required number
                    z=sq;
                    //Put condition to break the first loop and get only one output
                    i=-1;
                }
                
                
            }
           
        }
    }
    return 0;
}
