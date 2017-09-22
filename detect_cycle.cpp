/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/
#include <set>;
#include <vector>;

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    //vector<Node*> v;
    set<Node*>visited;
    Node* curr = head;
    
    if(head == NULL) return false;
    
    while(curr->next!=NULL){
        visited.insert(curr);
        curr= curr->next;
      if(visited.find(curr)!= visited.end()) {
    //f( find(v.begin(), v.end(),curr)!=v.end()) {
            return true;
        }
    }
    return false;
    
}

