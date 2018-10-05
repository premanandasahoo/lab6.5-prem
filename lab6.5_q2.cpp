//You are a salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary. 
//1. Just a salary of Rs 600 per week;
//2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week) 
//3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
//Write a program to help decide the best choice of compensation. You ask the user for input 
//(Write a function for this). Then write other functions for each of the options. 
//Write a driver program to use the 4 functions and decide the best option for yourself.


#include <iostream>

using namespace std;
//Void function to ask user for input
void input(int& n)
{
    cout<<"Enter number of pairs of shoes sold per week"<<endl;
    cin>>n;
    cout<<endl;
}
//Function for first choice
float choice1(int n)
{
    float sal=600;
    return sal;
}
//Function for second choice
float choice2(int n)
{
    float sal=(7*40)+((n*225)*0.1);
    return sal;
}
//Function for third choice
float choice3(int n)
{
    float sal=(20*n)+((n*225)*0.2);
    return sal;
}
//Main function
int main()
{
    //Print the available choices for the user
    cout<<"Choices for mode of salary"<<endl<<
    "Choice1: Just a salary of Rs 600 per week"<<endl
    <<"Choice2: A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week)"
    <<endl<<"Choice3: No salary, but 20% commissions and Rs20 for each pair of shoes sold"<<endl;
    //Declare variable to get the input
    int n;
    //Drive functions
    input(n);
    //Assign values from functions to variables 
    float x=choice1(n);
    float y=choice2(n);
    float z=choice3(n);
    //Put condition to choose best option for the user
    if(x>y && x>z)
    {
        cout<<"Choice1 is best"<<endl;
    }
    else if(y>x && y>z)
    {
        cout<<"Choice2 is best"<<endl;
    }
    else
    {
        cout<<"Choice3 is best"<<endl;
    }
    return 0;
}
