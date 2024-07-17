/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    while (head != NULL && head->val == val) {
        head = head->next;
    }
    struct ListNode* cur = head;
    struct ListNode* s = NULL;
    while (cur != NULL) {
        s = cur->next;
        while (s != NULL && s->val == val) {
            cur->next = cur->next->next;
            free(s);
            s = cur->next;
        }
        cur = cur->next;
    }
    return head;
}

//移除链表元素

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
struct ListNode* reverseList(struct ListNode* head) {
    ListNode* pcur1 = NULL;
    ListNode* pcur2 = NULL;
    ListNode* pcur = head;
    while (pcur) {
        pcur2 = pcur->next;
        pcur->next = pcur1;
        pcur1 = pcur;
        pcur = pcur2;
    }
    return pcur1;
}

//反转链表

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
struct ListNode* middleNode(struct ListNode* head) {
    ListNode* pcur1 = head;
    ListNode* pcur2 = head;
    int i = 0;
    while (pcur1)
    {
        pcur1 = pcur1->next;
        i++;
    }
    i = i / 2;
    while (i--)
    {
        pcur2 = pcur2->next;
    }
    return pcur2;
}

//链表中间结点（遍历两次链表方法）

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
struct ListNode* middleNode(struct ListNode* head) {
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

//链表中间节点（两指针同时遍历链表）

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    ListNode* newhead = NULL;
    ListNode* newtail = NULL;
    if (list1 == NULL)
        return list2;
    else if (list2 == NULL)
        return list1;
    while (list1 && list2) {
        if (list1->val <= list2->val) {
            if (newhead == NULL) {
                newhead = newtail = list1;
            }
            else {
                newtail->next = list1;
                newtail = list1;
            }
            list1 = list1->next;
        }
        else {
            if (newhead == NULL) {
                newhead = newtail = list2;
            }
            else {
                newtail->next = list2;
                newtail = list2;
            }
            list2 = list2->next;
        }
    }
    if (list1)
        newtail->next = list1;
    else
        newtail->next = list2;
    return newhead;
}

//合并两个有序链表

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    ListNode* newhead = NULL;
    ListNode* newtail = NULL;
    newhead = newtail = (ListNode*)malloc(sizeof(ListNode));
    if (list1 == NULL)
        return list2;
    else if (list2 == NULL)
        return list1;
    while (list1 && list2) {
        if (list1->val <= list2->val) {
            newtail->next = list1;
            newtail = list1;
            list1 = list1->next;
        }
        else {
            newtail->next = list2;
            newtail = list2;
            list2 = list2->next;
        }
    }
    if (list1)
        newtail->next = list1;
    else
        newtail->next = list2;
    ListNode* cur = newhead->next;
    free(newhead);
    newhead = NULL;
    return cur;
}

//合并两个有序链表优化后的方案

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
#include <cstdlib>
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        ListNode* littcode, * littTail;
        littcode = littTail = (ListNode*)malloc(sizeof(ListNode));
        ListNode* Bigcode, * BigTail;
        Bigcode = BigTail = (ListNode*)malloc(sizeof(ListNode));
        ListNode* pcur = pHead;
        while (pcur)
        {
            if (pcur->val < x)
            {
                littTail->next = pcur;
                littTail = littTail->next;
            }
            else {
                BigTail->next = pcur;
                BigTail = BigTail->next;
            }
            pcur = pcur->next;
        }
        BigTail->next = NULL;
        littTail->next = Bigcode->next;
        ListNode* pcur1 = littcode->next;
        free(littcode);
        free(Bigcode);
        littcode = Bigcode = NULL;
        return pcur1;
    }
};

//链表分割

