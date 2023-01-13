#include <iostream>

using namespace std;

struct stack
{
    int data[5];
    int top;
};

stack tumpuk;

void push(int input)
{
    tumpuk.top++;
    tumpuk.data[tumpuk.top] = input;
}

void pop()
{
    cout << "Data yang di POP : " << tumpuk.data[tumpuk.top] << endl;
    tumpuk.top--;
    cout << "Data yang di TOP : " << tumpuk.data[tumpuk.top] << endl;
}

void setawal()
{
    tumpuk.top = -1;
}

bool cekkosong()
{
    if (tumpuk.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool cekpenuh()
{
    if (tumpuk.top == 4)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void print()
{
    cout << "DATA : " << endl;
    for (int i = 0; i <= tumpuk.top; i++)
    {
        cout << tumpuk.data[i] << " ";
    }
    cout << endl;
}

main()
{
    int pilihan, input;
    setawal();
    do
    {
        cout << endl;
        cout << "1. Push Data" << endl;
        cout << "2. Pop Data " << endl;
        cout << "3. Print Data " << endl;
        cout << "4. Clear Data " << endl;
        cout << "5. Exit " << endl;
        cout << "Pilihan Anda : ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan)
        {
        case 1:
            if (cekpenuh() == 1)
            {
                cout << "TUMPUKAN SUDAH PENUH!!!" << endl;
            }
            else
            {
                cout << "Masukan Data yang ingin di PUSH : ";
                cin >> input;
                push(input);
            }
            break;

        case 2:
            if (cekkosong() == 1)
            {
                cout << "TUMPUKAN MASIH KOSONG" << endl;
            }
            else
            {
                pop();
            }
            break;

        case 3:
            if (cekkosong() == 1)
            {
                cout << "TUMPUKAN MASIH KOSONG" << endl;
            }
            else
            {
                print();
            }
            break;

        case 4:
            setawal();
            break;
        }

    } while (pilihan >= 1 && pilihan <= 4);//ketika pilihan = 5 maka akan keluar dari looping


    return 0;
}
