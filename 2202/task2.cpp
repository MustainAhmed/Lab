#include <bits/stdc++.h>
using namespace std;

void stepLinearSearch(vector<long long> arr, long long x, int n)
{
    int step = 0;
    int flag = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        step++;
        if (arr[i] == x)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "key " << i << " Value " << x << " Total Steps " << step << endl;
    }
    else
    {
        cout << "Missing Value "
             << " Total Steps" << step << endl;
    }
}
void stepBinarySearch(vector<long long> arr, long long x, int n)
{
    int step = 0;
    int left = 0;
    int right = n - 1;
    int flag = 0;
    int mid;
    while (left <= right)
    {
        step++;

        mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            flag = 1;
            break;
        }
        else if (arr[mid] > x)
        {
            right = mid - 1;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
    }
    if (flag == 1)
    {
        cout << "key " << mid << " Value " << x << " Total Steps " << step << endl;
    }
    else
    {
        cout << "Missing Value"
             << "Total Steps" << step << endl;
    }
}

char menu()
{
    char opt;
    cout << " Choose Option(1-5) \n Size of the file\n 1.10000 \n 2.20000\n 3.30000 \n 4.40000 \n 5.50000\n";
    cin >> opt;
    return opt;
}

int main()
{
    fstream file;
    int arraySize[] = {10000, 20000, 30000, 40000, 50000};
    char opt = menu();
    string fileName = "../search_";
    if (opt > '5')
    {
        cout << "Invalid Input\n";
        return 0;
    }

    else
    {
        fileName += opt;

        fileName += ".txt";
    }

    file.open(fileName);
    int option = opt - '0';
    cout << fileName << endl;
    int n = arraySize[option - 1];
    cout << n << endl;
    vector<long long> arr(n);

    int i = 0;
    while (i < n && file >> arr[i])
    {
        i++;
    }
    file.close();

    long long num;
    cout << "Enter the number you want to search\n";
    cin >> num;
    cout << "For Linear Search\n";
    stepLinearSearch(arr, num, n);
    sort(arr.begin(), arr.end());
    cout << "For Binary Search\n";
    stepBinarySearch(arr, num, n);
}
