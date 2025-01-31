#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> // Para floor

using namespace std;

vector<int> numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

pair<int, int> binary_search(int search, const vector<int>& list)
{
    int iterations = 0;
    int i = 0;
    int j = list.size() - 1;
    int half;

    while (i <= j)
    {
        iterations += 1;
        half = floor((i + j) / 2);

        if (list[half] == search)
        {
            return {half, iterations};
        }
        else if (search > list[half])
        {
            i = half + 1;
        }
        else
        {
            j = half - 1;
        };
    };

    return {-1, iterations};
};

int main()
{
    pair<int, int> result = binary_search(2, numbers);
    int position = result.first;
    int iterations = result.second;

    if (position != -1)
    {
        cout << "Value found in position " << position << " in " << iterations << " iterations." << endl;
    }
    else
    {
        cout << "Value hasn't been found in " << iterations << " iterations." << endl;
    };

    return 0;
};


