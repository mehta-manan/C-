// Works
#include <iostream>
#include <vector>
#include <algorithm>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *tempListNodeRef = l1;
        if (l1 == NULL && l2 == NULL)
            return tempListNodeRef;

        else if (l1 == NULL)
            tempListNodeRef = l2;

        else if (l2 == NULL)
            tempListNodeRef = l1;

        else
        {
            while ((tempListNodeRef->next) != NULL)
            {
                tempListNodeRef = tempListNodeRef->next;
            }

            tempListNodeRef->next = l2;

            tempListNodeRef = l1;
        }

        std::vector<int> vect;

        while (tempListNodeRef != NULL)
        {
            vect.push_back(tempListNodeRef->val);
            tempListNodeRef = tempListNodeRef->next;
        }

        std::sort(vect.begin(), vect.end());

        for (int i = 0; i < vect.size(); i++)
        {
            std::cout << vect[i];
        }

        ListNode *finalListHeadPtr = NULL;
        for (int i = 0; i < vect.size(); i++)
        {
            ListNode *finalList = new ListNode;
            if (finalListHeadPtr == NULL)
            {
                finalListHeadPtr = finalList;
            }

            else
            {
                ListNode *tempPtr = finalListHeadPtr;
                while ((tempPtr->next) != NULL)
                {
                    tempPtr = tempPtr->next;
                }
                tempPtr->next = finalList;
            }
            finalList->val = vect[i];
            finalList->next = NULL;
        }

        return finalListHeadPtr;
    }
};