#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    int testCase;
    std::cin >> testCase;
    std::cin.ignore();
    std::vector<int> finalAnswers;

    for (int i = 0; i < testCase; i++)
    {
        std::stringstream sso;
        std::string nK;
        std::getline(std::cin, nK);
        sso << nK;
        int temp;
        std::vector<int> nAndK;

        while (sso >> temp)
        {
            nAndK.push_back(temp);
        }

        std::stringstream answers;
        std::string answersString;
        std::getline(std::cin, answersString);
        answers << answersString;
        std::vector<int> answersVector;

        while (answers >> temp)
        {
            answersVector.push_back(temp);
        }

        // for (int j = 0; j < answersVector.size();j++)
        // {
        //     std::cout << answersVector[j] << '\n';
        // }

        int dif;
        for (int j = 0; !(answersVector[j] < nAndK[1]); j++)
        {
            dif = answersVector[j] - nAndK[1];
            if (answersVector[j] != answersVector[answersVector.size() - 1])
                answersVector[j + 1] += dif;
            else
            {
                answersVector.push_back(answersVector[answersVector.size() - 1] - nAndK[1]);
            }

            if (answersVector[j] < nAndK[1])
            {
                //std::cout << j + 1 << '\n';
                break;
            }
        }

        for (int j = 0; j < answersVector.size(); j++)
        {
            //std::cout << answersVector[j] << '\n';
            if (answersVector[j] < nAndK[1])
            {
                finalAnswers.push_back(j + 1);
                break;
            }
        }
    }

    for (int k = 0; k < finalAnswers.size(); k++)
    {
        std::cout << finalAnswers[k] << '\n';
    }
    return 0;
}