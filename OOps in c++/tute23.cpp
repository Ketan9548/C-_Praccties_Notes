// Objects memory allocation using array in (class) OOPs
#include <iostream>
using namespace std;
class shop
{
    int ItemId[100];
    int ItemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 1; }
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void)
{
    cout << "enter the Id of your item no. is: " << counter << endl;
    cin >> ItemId[counter];
    cout << "enter the price of your item is: " << counter << endl;
    cin >> ItemPrice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 1; i < counter; i++)
    {
        cout << "the item Id is: " << ItemId[i] << " or price is: " << ItemPrice[i]<<endl;
    }
}

int main()
{
    shop kapilgenralstore;
    kapilgenralstore.initcounter();
    kapilgenralstore.setprice();
    kapilgenralstore.displayprice();
    return 0;
}