#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo);

int main()
{
    vector<int> array1 = { -1, 5, 10, 20, 28, 3 };
    vector<int> array2 = { 26, 134, 135, 15, 17 };
    vector<int> result = smallestDifference(array1, array2);

    cout << " " << result[0] << " " << result[1] << " ";

    return 0;
}

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
    // Write your code here.
    sort(arrayOne.begin(), arrayOne.end());
    sort(arrayTwo.begin(), arrayTwo.end());

    vector<int> result;
    int leftarrayIdx = 0;
    int rifgtArrayIdx = 0;
    int sumsResult = INT_MAX;
    int sumsArraty = INT_MAX;

    if (leftarrayIdx == 0 && rifgtArrayIdx == 0)
    {
        result.push_back(arrayOne[leftarrayIdx]);
        result.push_back(arrayTwo[rifgtArrayIdx]);
    }


    while (leftarrayIdx < arrayOne.size() && rifgtArrayIdx < arrayTwo.size())
    {




        if (arrayOne[leftarrayIdx] < arrayTwo[rifgtArrayIdx])
        {
            sumsArraty = arrayTwo[rifgtArrayIdx] - arrayOne[leftarrayIdx];
            if (sumsArraty < sumsResult)
            {
                sumsResult = sumsArraty;
                result = { arrayOne[leftarrayIdx], arrayTwo[rifgtArrayIdx] };
            }
            leftarrayIdx++;
        }


        else if (arrayOne[leftarrayIdx] > arrayTwo[rifgtArrayIdx])
        {
            sumsArraty = arrayOne[leftarrayIdx] - arrayTwo[rifgtArrayIdx];
            if (sumsArraty < sumsResult)
            {
                sumsResult = sumsArraty;
                result = { arrayOne[leftarrayIdx], arrayTwo[rifgtArrayIdx] };
            }
            rifgtArrayIdx++;
        }
        else {
            return vector<int> {arrayOne[leftarrayIdx], arrayTwo[rifgtArrayIdx]};
        }


        

    }

    return result;
}
