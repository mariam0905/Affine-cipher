#include <iostream>
using namespace std;
int main()
{
    char answer;
    cout << " welcome to the affine cipher , what do you want to do ? , choose A for cipher , B for decipher , C to quit \n ";
    cin >> answer ;
    while (answer != 'A' && answer != 'B' && answer != 'C')
    {
        cout << "please answer with only A or B or C \n ";
        cin >> answer ;
    }
    if (answer == 'C')
        cout << "the end \n ";
    while (answer == 'A'|| answer == 'B')
    {
        string message , encrypted_message , decrypted_message ;
        cout << "enter the three keys (a , b , c ) \n ";
        int a , b , c;
        cin >> a >> b >> c ;
        while (a <= 0 || b <= 0 || c <= 0 )
        {
            cout << "please enter a postive key number \n ";
            cin >> a >> b >> c;
        }
        int product = (a*c);
        while ( product > 1)
        {
            product -= 26;
            if (product < 0)
            {
                cout << "please enter a valid input (a , c) that satisfy the condition \n ";
                cin >> a >> c;
                while (a <= 0 || c <= 0)
                {
                    cout << "please enter positive numbers and also satisfy the condition \n ";
                    cin >> a >> c;
                }
                continue;
            }
        }
        if (answer == 'A')
        {
            cout << " enter the message you want to cipher \n ";
            cin.ignore() ;
            getline ( cin , message );
            for (int i = 0 ; i < message.length() ; i++)
            {
                char element_1 = message[i];
                if (int(element_1) == 32)
                    encrypted_message += element_1;
                else if ( isalpha(element_1) == false && int(element_1) != 32)
                {
                    i++;
                    continue;
                }
                else
                {
                    element_1 = toupper (element_1);
                    int ascii = int(element_1);
                    int x = ascii - 65;
                    int x_2 ;
                    x_2 = a*x + b;
                    while (x_2 > 25 )
                        x_2 -= 26;
                    x_2 += 65;
                    encrypted_message += char(x_2);
                }
            }
            cout << "the encrypted messsage is : " << encrypted_message << endl;
            cout << "do you want to cipher another message or decipher or quit , choose A for cipher , B for decipher , C to quit \n ";
            cin >> answer ;
            while (answer != 'A' && answer != 'B' && answer != 'C')
            {
                cout << "please answer with only A or B or C \n ";
                cin >> answer ;
            }
            if (answer == 'A')
                continue;
            if (answer == 'C')
            {
                cout << "the end \n ";
                break;
            }
        }
        if (answer == 'B')
        {
            cout << " enter the message you want to decipher \n ";
            cin.ignore() ;
            getline ( cin , message );
            for (int k = 0 ; k < message.length() ; k++)
            {
                char element_2 = message[k];
                if (int(element_2) == 32)
                    decrypted_message += element_2;
                else if ( isalpha(element_2) == false && int(element_2) != 32)
                {
                    k++;
                    continue;
                }
                else
                {
                    element_2 = toupper (element_2);
                    int ascii_2 = int(element_2);
                    int y = ascii_2 - 65;
                    int y_2 ;
                    y_2 = c*( y - b );
                    while (y_2 > 25 )
                        y_2 -= 26;
                    while (y_2 < 0 )
                        y_2 += 26;
                    y_2 += 65;
                    decrypted_message += char(y_2);
                }
            }
            cout << "the message after decryption is : " << decrypted_message << endl ;
            cout << "do you want to cipher or decipher or quit ? , to cipher choose A , to decipher choose B , to quit choose C \n ";
            cin >> answer ;
            while (answer != 'A' && answer != 'B' && answer != 'C')
            {
                cout << "please answer with only A or B or C \n ";
                cin >> answer ;
            }
            if (answer == 'C')
                cout << "the end \n ";
        }
    }

}