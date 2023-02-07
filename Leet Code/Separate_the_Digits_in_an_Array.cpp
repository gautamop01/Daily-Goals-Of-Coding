# Welcome to the 97th LeetCode Biweekly Contest
class Solution
{
public:
    vector<int> separateDigits(vector<int> &numbers)
    {
        vector<int> result;
        int size = numbers.size();
        for (int i = 0; i < size; i++)
        {
            vector<int> temp;
            while (numbers[i])
            {
                temp.push_back(numbers[i] % 10);
                numbers[i] /= 10;
            }
            for (int j = temp.size() - 1; j >= 0; j--)
            {
                result.push_back(temp[j]);
            }
            temp.clear();
        }
        return result;
    }
};
