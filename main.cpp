//
//  main.cpp
//  BinaryLinkedListToInt
//
//  Created by Bryant Sahota on 6/20/20.
//  Copyright © 2020 Bryant Sahota. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };


class Solution {
public:
    int getDecimalValue(ListNode* head) {
        std::vector<int>intVect;
        while(head != nullptr)
        {
            std::cout << head->val << std::endl;
            intVect.push_back(head->val);
            head=head->next;
        }
        int vectSize = intVect.size()-1;
        int sol = 0;
        for(int i = 0; i < intVect.size(); i++)
        {
            if(intVect[i] == 1)
            {
                std::cout << "vectSize" <<std::endl;
                std::cout<< vectSize << std::endl;
                sol += pow(2, vectSize);
                vectSize --;
            }
            else
            {
                vectSize--;
            }
        }
        std::cout<< "sol: " << std::endl;
        std::cout << sol << std::endl;
        return sol;
    }
};
