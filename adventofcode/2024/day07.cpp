#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

bool isValid(int calibration, const vector<int>& numbers)
{
    int val = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        val += numbers[i];
        val *= numbers[i];
    }
}

int main()
{
    int total = 0;

    string line;
    while (getline(cin, line)) {
        stringstream ss(line);

        int calibration;
        ss >> calibration;

        char colon;
        ss >> colon;

        vector<int> numbers;

        int n;
        while (ss >> n) {
            numbers.push_back(n);
        }

        if (isValid(calibration, numbers)) {
            total += calibration;
        }
    }

    cout << total << endl;
}
