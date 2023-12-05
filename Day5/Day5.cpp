class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        int resultl1;
        vector<int> resultValues;
        int resultl2;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry != 0) {
            resultl1 = (l1 != NULL) ? l1->val : 0;
            resultl2 = (l2 != NULL) ? l2->val : 0;

            sum = resultl1 + resultl2 + carry;
            carry = sum / 10;
            resultValues.push_back(sum % 10);
            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }
        ListNode* result = new ListNode(resultValues[0]);
        ListNode* current = result;
        for (int i = 1; i < resultValues.size(); ++i) {
            current->next = new ListNode(resultValues[i]);
            current = current->next;
        }

        return result;
    }
};
