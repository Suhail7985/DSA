#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Check if the list is empty
        if (head == NULL) {
            return head;
        }

        ListNode* current = head; // Start with the head of the list

        // Iterate through the list
        while (current != NULL && current->next != NULL) {
            // Check if the current node's value is the same as the next node's value
            if (current->val == current->next->val) {
                // Duplicate found, remove it
                ListNode* del = current->next; // Node to be deleted
                current->next = del->next; // Bypass the duplicate
                delete del; // Free memory
            } else {
                // Move to the next node
                current = current->next;
            }
        }

        return head; // Return the modified list
    }
};

int main() {
    // Create a sorted linked list: 1 -> 1 -> 2 -> 3 -> 3
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    Solution solution;
    head = solution.deleteDuplicates(head);

    // Print the modified list
    ListNode* current = head;
    while (current != NULL) {
        std::cout << current->val << " ";
        current = current->next;
    }
    // Output should be: 1 2 3

    // Clean up memory
    current = head;
    while (current != NULL) {
        ListNode* temp = current;
        current = current->next;
        delete temp; // Free each node
    }

    return 0;
}
