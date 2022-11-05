
#include <iostream>
using namespace std;

int main()
{
    int a, i = 0, num = 0;
    cin >> a;
    int array[19]{};

    while (true)
    {
        num = a % 10;
        array[i] = num;
        a /= 10; 
        if (a == 0) break;
        i++;
    }
    for (int j = i; j >= 0; j--)  cout << array[j] << " ";
    system("pause");
}
