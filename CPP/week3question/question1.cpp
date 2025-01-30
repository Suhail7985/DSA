// #include <iostream>
// #include <unordered_map>
// #include <algorithm>

// class SinglyLinkedListNode {
// public:
//     int data;
//     SinglyLinkedListNode* next;

//     SinglyLinkedListNode(int value) {
//         data = value;
//         next = nullptr;
//     }
// };

// // Function to count frequencies of numbers in a linked list
// void countFrequencies(SinglyLinkedListNode* head, std::unordered_map<int, int>& frequencyMap) {
//     while (head != nullptr) {
//         frequencyMap[head->data]++;
//         head = head->next;
//     }
// }


// // Function to find missing numbers
// int* missingNumbers(SinglyLinkedListNode* arrHead, SinglyLinkedListNode* brrHead, int& missingCount) {
//     std::unordered_map<int, int> frequencyArr;
//     std::unordered_map<int, int> frequencyBrr;

//     // Count frequencies in arr
//     countFrequencies(arrHead, frequencyArr);

//     // Count frequencies in brr
//     countFrequencies(brrHead, frequencyBrr);

//     // Allocate memory for missing numbers (maximum possible size is the size of brr)
//     int* missing = new int[frequencyBrr.size()];
//     missingCount = 0;

//     // Compare frequencies
//     for (const auto& pair : frequencyBrr) {
//         int num = pair.first;
//         int countInBrr = pair.second;
//         int countInArr = frequencyArr[num];

//         // If the count in brr is greater than in arr, it's missing
//         if (countInBrr > countInArr) {
//             missing[missingCount++] = num; // Store the missing number
//         }
//     }

//     // Sort the missing numbers
//     std::sort(missing, missing + missingCount);

//     return missing;
// }

// // Function to create a linked list from an array of integers
// SinglyLinkedListNode* createLinkedList(int* values, int size) {
//     if (size == 0) return nullptr;
//     SinglyLinkedListNode* head = new SinglyLinkedListNode(values[0]);
//     SinglyLinkedListNode* current = head;
//     for (int i = 1; i < size; i++) {
//         current->next = new SinglyLinkedListNode(values[i]);
//         current = current->next;
//     }
//     return head;
// }

// // Function to free the linked list memory
// void freeLinkedList(SinglyLinkedListNode* head) {
//     while (head != nullptr) {
//         SinglyLinkedListNode* temp = head;
//         head = head->next;
//         delete temp;
//     }
// }

// int main() {
//     int n, m;

//     // Read size of the first list
//     std::cin >> n;
//     int* arr = new int[n];
//     for (int i = 0; i < n; i++) {
//         std::cin >> arr[i];
//     }

//     std::cin >> m;
//     int* brr = new int[m];
//     for (int i = 0; i < m; i++) {
//         std::cin >> brr[i];
//     }

//     // Create linked lists from the arrays
//     SinglyLinkedListNode* arrHead = createLinkedList(arr, n);
//     SinglyLinkedListNode* brrHead = createLinkedList(brr, m);

//     // Get the missing numbers
//     int missingCount;
//     int* result = missingNumbers(arrHead, brrHead, missingCount);

//     // Print the result
//     for (int i = 0; i < missingCount; i++) {
//         std::cout << result[i] << " ";
//     }
//     std::cout << std::endl;

//     // Free memory
//     freeLinkedList(arrHead);
//     freeLinkedList(brrHead);
//     delete[] arr;
//     delete[] brr;
//     delete[] result; // Free the missing numbers array

//     return 0;
// }


//missing numbers in linked list
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};
void checkfreq(Node* head, int* freq){
    while(head!=nullptr){
        freq[head->data]++;
        head = head->next;
    }

}
void missingNum(Node* arrHead, Node* brrHead, int& missingCount){
    int freq[10000]={0};
    checkfreq(arrHead,freq);
    int freq2[10000]={0};
    checkfreq(brrHead,freq2);
    int* missing=new int[10000];
    missingCount=0;
    for(int i=0;i<10000;i++){
        if(freq2[i]>freq[i]){
            missing[missingCount++]=i;
        }


    }
    for(int i=0;i<missingCount;i++){
        cout<<missing[i]<<" ";


    }
    cout<<endl;
}

int main(){
    int n,m;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    int* brr = new int[m];
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    Node* arrHead = new Node(arr[0]);
    Node* temp = arrHead;
    for(int i=1;i<n;i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    Node* brrHead = new Node(brr[0]);
    temp = brrHead;
    for(int i=1;i<m;i++){
        temp->next = new Node(brr[i]);
        temp = temp->next;
    }
    int missingCount;
    missingNum(arrHead,brrHead,missingCount);
    delete[] arr;
    delete[] brr;
    return 0;

}