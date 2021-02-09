#include <vector>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {

        std::vector<int> answerVector;

        for (int i = 0; i < answerVector.size() - 1; i++)
        {
            for (int j = i + 1; j < answerVector.size(); j++)
            {
                if (target == (nums[i] + nums[j]))
                {
                    answerVector.push_back(i);
                    answerVector.push_back(j);
                    return answerVector;
                }
            }
        }
        return answerVector;
    }
};