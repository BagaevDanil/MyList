#include <iostream>
#include <conio.h>
#include <string>
#include "MyList.h"

using namespace std;

void checkList()
{
    system("cls");
    MyList<string> defaultList;
    while (true)
    {
        cout << "[ ";
        defaultList.Print();
        cout << "]\n\n";
        cout << "0) Back in menu\n1) Add\n2) AddFront\n3) AddBack\n4) Delete\n5) DeleteFront\n6) DeleteBack\n7) Print cell\n8) Size\n";
        int but = _getch() - '0';

        if (but == 0)
        {
            return;
        }
        else if (but == 1)
        {
            int position;
            string value;
            cout << "\nEnter position: ";
            cin >> position;
            cout << "Enter value: ";
            cin >> value;
            defaultList.Add(position, value);
        }
        else if (but == 2)
        {
            string value;
            cout << "Enter value: ";
            cin >> value;
            defaultList.AddFront(value);
        }
        else if (but == 3)
        {
            string value;
            cout << "Enter value: ";
            cin >> value;
            defaultList.AddBack(value);
        }
        else if (but == 4)
        {
            int position;
            cout << "\nEnter position: ";
            cin >> position;
            defaultList.Delete(position);
        }
        else if (but == 5)
        {
            defaultList.DeleteFront();
        }
        else if (but == 6)
        {
            defaultList.DeleteBack();
        }
        else if (but == 7)
        {
            cout << "\nEnter index: ";
            int index;
            cin >> index;
            cout << "list[" << index << "] = " << defaultList[index];
            cout << "\nPress any key...";
            _getch();
        }
        else if (but == 8)
        {
            cout << "\nSize: " << defaultList.GetSizeList();
            cout << "\nPress any key...";
            _getch();

        }

        system("cls");
    }
}


int main()
{
    checkList();

    return 0;
}
