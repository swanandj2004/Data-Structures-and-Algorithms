#include <iostream>
using namespace std;

class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode(int v) {
        val=v;
        next=NULL;
    } 
};

ListNode *AddNode() {
    int val;
    cout << "Enter an integer as a data element :" << endl;
    cin >> val;
    ListNode *node=new ListNode(val);
    return node;
}

void TraverseLinkedList(ListNode *first) {
    ListNode *head=first;
    while(head!=NULL) {
        cout << head->val << " ";
        head=head->next;
    }
}

int main() {
    ListNode *first=AddNode(); 
    first->next=AddNode();
    first->next->next=AddNode();
    first->next->next->next=AddNode();
    
    TraverseLinkedList(first);
    
    return 0;
}
