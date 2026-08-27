
#include <iostream>
using namespace std;
int main()


{
   int numPizza;
   int numToppings;
   string topping[5]=
   {


    "pepperoni","sausage", "peppers", "hot cheese", "mushrooms"


   };


   int choice;


   cout<<"Enter the number of pizza's you would like: ";
   cin>>numPizza;
   cout<<"The number of pizza's you have selected is: "<<numPizza<<endl;


   while(numPizza <0 || numPizza > 10)
    {
        cout << "That number is incorrect. Please enter a number between 0-10: ";
        cin >> numPizza;
    }


    cout << "The number of pizzas you have selected is: "
         << numPizza << endl;


    cout << "Continue" << endl;


    cout<<"Enter the number of topping you would like:";
    cin>>numToppings;
    cout<<"The number of toppings you have selected is: "<<numToppings<<endl;


    while(numToppings <0 || numToppings > 5)
    {
        cout << "That number is incorrect. Please enter a number between 0-5: ";
        cin >> numToppings;
    }


    cout << "The number of pizzas you have selected is: "
         << numToppings << endl;


    cout << "Continue" << endl;


    cout << "Choose a topping:" << endl;
    cout << "1. Pepperoni" << endl;
    cout << "2. Sausage" << endl;
    cout << "3. Peppers" << endl;
    cout << "4. Hot Cheese" << endl;
    cout << "5. Mushrooms" << endl;
    cin>>choice;
    cout<<"You have selected: "<<topping[choice]<<endl;


   




    return 0;
}
