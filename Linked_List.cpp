###### Linked List
#include <iostream>
 
struct IntListNode{
    int val;
    IntListNode* next;
};
 
int main(){
    IntListNode* l;
    l = NULL; 
 
    IntListNode* tmp;
 
    tmp = new IntListNode;
    tmp->val = 2;
    tmp->next = l;
 
    l = tmp;
 
    tmp = new IntListNode;
    tmp->val = 3;
    tmp->next = l;
 
    l = tmp;
 
    IntListNode* lit;
    lit = l;
 
    while(lit != NULL){
        std::cout << lit->val << std::endl;
        lit = lit->next;
    }
 
    lit = l;
 
    while(lit != NULL){
        tmp = lit->next;
        delete lit;
        lit = tmp;
    }
}

-----------------------------------------------------------------------------------------------------------------------

//Linked List Iterative 
 
 #include <iostream>
 
typedef int list_t;
 
struct ListNode{
    list_t val;
    ListNode* next;
};
 
ListNode* cons_list(list_t e, ListNode* l){
    ListNode* tmp;
 
    tmp = new ListNode;
 
    tmp->val = e;
    tmp->next = l;
 
    return tmp;
}
 
void print_list(ListNode* l){
    while(l != NULL){
        std::cout << l->val << std::endl;
        l = l->next;
    }
}
 
void deallocate_list(ListNode* l){
    ListNode* tmp;
 
    while(l != NULL){
        tmp = l->next;
        delete l;
        l = tmp;
    }
}
 
int main(){
    ListNode* l = NULL;
 
    l = cons_list(2, l);
    l = cons_list(3, l);
 
    print_list(l);
 
    deallocate_list(l);
}
