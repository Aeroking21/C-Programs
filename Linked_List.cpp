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

-----------------------------------------------------------------------------------------------------------------------

//Linked List Recursion


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
 
 
 
void print_list_rec(ListNode* l){
    if(l != NULL){
        std::cout << l->val << std::endl;
        // we print the first element
        print_list_rec(l->next);
        // then the rest of the list
    }
}
 
void deallocate_list_rec(ListNode* l){
    ListNode* tmp;
 
    if(l != NULL){
        tmp = l->next;
        delete l;
        deallocate_list_rec(tmp);
    }
}
 
int main(){
    ListNode* l = NULL;
 
    l = cons_list(2, l);
    l = cons_list(3, l);
 
    print_list_rec(l);
 
    deallocate_list_rec(l);
}

-----------------------------------------------------------------------------------------------------------------------

//Trees


#include <iostream>
 
typedef int tree_t;
 
struct TreeNode{
    tree_t val;
    TreeNode* left;
    TreeNode* right;
};
 
TreeNode* cons_tree(tree_t e, TreeNode* l, TreeNode* r){
    TreeNode* tmp;
    tmp = new TreeNode;
    tmp->val = e;
    tmp->left = l;
    tmp->right = r;
    return tmp;
}
 
TreeNode* ordered_insertion_tree(tree_t e, TreeNode* t){
    if(t == NULL){
        return cons_tree(e, NULL, NULL);
    }
    else if(e < t->val){
        t->left = ordered_insertion_tree(e, t->left);
        return t;
    }
    else{
        t->right = ordered_insertion_tree(e, t->right);
        return t;
    }
}
 
void print_tree(TreeNode* t){
    if(t != NULL){
        print_tree(t->left);
        std::cout << t->val << std::endl;
        print_tree(t->right);
    }
}
 
void deallocate_tree(TreeNode* t){
    if(t != NULL){
        deallocate_tree(t->left);
        deallocate_tree(t->right);
        delete t;
    }
}
 
int main(){
    TreeNode* t;
    t = NULL;
 
    t = ordered_insertion_tree(15, t);
    t = ordered_insertion_tree(20, t);
    t = ordered_insertion_tree(6, t);
    t = ordered_insertion_tree(1, t);
    t = ordered_insertion_tree(4, t);
    t = ordered_insertion_tree(18, t);
    t = ordered_insertion_tree(9, t);
 
    print_tree(t);
 
    deallocate_tree(t);
 
}
