 #include <iostream>
    using namespace std;
     
    double Celsius = 0, Kelvin = 0, Fahrenheit = 0;
     int a;
    void setValue(int num)
    {
        switch(num)
        {
        case 1:
            {
                cout << "������� �������: ";
          cin >> Celsius;
                Kelvin = Celsius + 273.15;
                Fahrenheit = Celsius * 1.8 + 32;
            } break;
        case 2:
            {
                cout << "������� ��������: ";
                cin >> Kelvin;
                Celsius = Kelvin - 273,15;
                Fahrenheit = Kelvin * 1.8 - 459.67;
         } break;
        case 3:
            {
                cout << "������� ����������: ";
                cin >> Fahrenheit;
                Celsius = (Fahrenheit - 32) / 1.8;
                Kelvin = (Fahrenheit + 459.67) / 1.8;
            } break;
        default:
            break;
        }
    }
     
    void getValue()
    {
        system("cls");//������� ������
        cout << "������� C: " << Celsius << endl;
        cout << "������� K: " << Kelvin << endl;
        cout << "������� F: " << Fahrenheit << endl;
    }
     
    void main()
    {
        setlocale(LC_ALL, "Russian");
        int ch = 0;
        cout << "�������� ������� ���������: " << endl;
        cout << "(1) -C, (2) - K, (3) - F" << endl;
        cout << " -> ";
        cin >> ch;
        system("cls");
        setValue(ch);
        getValue();
		std::cin>> a;
    }