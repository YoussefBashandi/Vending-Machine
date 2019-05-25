#include <iostream>

using namespace std;

class VenMac{
    private:
        int choice;
        float money;
        float rem;
    public:
        VenMac(int c, int m){
            choice = c;
            money = m;
        }
        int operation(int choice, float money){
            int stock[10] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
            float price[10] = {2.5, 3, 5, 1.5, 8, 3.5, 4, 7, 4.5, 6};
            if (stock[choice-1] == 0){
                cout << "This item is out of stock." << endl;
            }
            else{
                if(money == price[choice-1]){
                    cout << "Here is your choice." << endl;
                    stock[choice-1]--;
                }
                if (money > price[choice-1]){
                    rem = money - price[choice - 1];
                    cout << "Here is your choice." << endl;
                    cout << "Your reminder is: " << rem << endl;
                    stock[choice-1]--;
                }
                if (money < price[choice-1]){
                    cout << "You can't afford this item." << endl;
                    cout << "Your money is going to be back." << endl;
                }
            }
        }
};
int main()
{
    for(;;){ //infinite loop
    int c;
    int m;
    cout << "Which item do you want?" << endl;
    cout << " 1-Pepsi \n 2-Coca-Cola \n 3-Chips \n 4-Gum \n 5-Chocolate \n 6-Candy \n 7-Lollipop \n 8-Biscuit \n 9-Lays \n 10-Juice" << endl;
    cin >> c;
    cout << "Enter your money: " << endl;
    cin >> m;
    VenMac VM(c, m);
    VM.operation(c, m);
        cout << "You want anything else? [Y/N]" << endl;
        char x;
        cin >> x;
        if (x == 'N' || x == 'n'){
            break; //end loop
        } //else repeat
        }
    return 0;

}
