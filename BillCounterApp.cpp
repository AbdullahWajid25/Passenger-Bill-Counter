#include <iostream>

using namespace std;

int main()
{
    // Variables:
    int input, bill = 20, count, extraBill;
    char repeat;

    cout <<"===== Passenger Bill Counter App =====" << endl;

    do
    {
        // 1. Take input from user and store in var

        cout << "How much distance/km would you like to travel : ";
        cin >> input;
        cout << endl;

        // 2. Check that input == 0, input <= 5 or input > 5.

        // -> If 0, bill Rs.0...
        if (input == 0)
        {
            cout << "No bill as no distance travelled!" << endl;
        }

        // -> If input > 1 and < 5, bill Rs.20...
        else if (input <= 5)
        {
            cout << "Your final bill will be : Rs. " << bill << endl;
        }

        // -> If input > 5, add Rs.10 on each extra km in bill(which will be Rs.20 as input is already > 5)...
        else if (input > 5)
        {
            extraBill = input - 5;  // 6 - 5 = 1
            extraBill = extraBill * 10; // 1 * 10 = 10
            bill = bill + extraBill;    // 20 + 10 = 30
            cout << "Your final bill will be : Rs. " << bill << endl;
        }

        else
        {
            cout << "Invalid value!" << endl;
        }

        cout << endl;

        cout << "Would you like to re-run the app (y/n) : ";
        cin >> repeat;
        cout << endl;
        while ((repeat != 'y') && (repeat != 'n'))
        {
            cout << "Invalid input!" << endl << endl;
            cout << "Would you like to re-run the app (y/n) : ";
            cin >> repeat;
            cout << endl;
        }
        
        if (repeat == 'n')
        {
            cout << "Thank you for using this app!" << endl;
        }

    } while (repeat == 'y');

    return 0;
}