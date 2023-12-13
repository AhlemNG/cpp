#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

void printCollection(string items[], int size)
{
    for (int i = 0; i< size; i++)
    {
        cout << items[i] <<endl;
    }
}

void printCollection(array<string, 5> items)
{
    printCollection(items.data(), items.size());
}

void printCollection(vector<string> items)
{
    printCollection(items.data(), items.size());
}

int main()
{
    string foods1[5] = {"tacos", "honey", "apples", "harissa", "grapes"};
    array<string, 5> foods2 = {"tacos", "honey", "apples", "harissa", "grapes"};
    vector<string> foods3 = {"tacos", "honey", "apples", "harissa", "grapes"};
    // vector<string> foods;
    // foods = {"grapes", "carrots", "lemon"};
    foods3.push_back("tortillas");
    printCollection(foods1, sizeof(foods1)/sizeof(foods1[0]));
    printCollection(foods2);
    printCollection(foods3);
    // foods[1] = "chocolate";

    return 0;
}