// все отрицательные элементы заменить нулями
#include <iostream>
#include "algorithm"
#include "vector"
using namespace std;

bool isNegative(int x)
{
    return (x < 0);
}

int main()
{
    vector <int> vect;
    int x, n;
    cout << "n = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter element " << i << endl;
        cin >> x;
        vect.push_back(x);
    }
    replace_if(vect.begin(), vect.end(), isNegative, 0);
    for (vector<int>::iterator iter = vect.begin(); iter < vect.end(); iter++)
        cout << *iter << endl;
    return 0;
}