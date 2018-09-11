/*给定两个非空链表来表示两个非负整数。位数按照逆序方式存储，它们的每个节点只存储单个数字。将两数相加返回一个新的链表。

你可以假设除了数字 0 之外，这两个数字都不会以零开头。

示例：

输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ulong temp1=0;
        ulong temp2=0;
        ulong result_t=0;
        ListNode* res=new ListNode(-1);
        ListNode* cur= res;
        int i=0;
        //cout<<l1->val<<endl;
        while(l1)
        {
            cout<<l1->val<<endl;
            temp1 += l1->val*pow(10,i);
            l1=l1->next;
            ++i;
            cout<<temp1<<endl;
        }
        i=0;
        while(l2)
        {
            cout<<l2->val<<endl;
            temp2 += l2->val*pow(10,i);
            l2=l2->next;
            ++i;
            cout<<temp2<<endl;
        }
        cout<<temp1<<endl;
        cout<<temp2<<endl;
        result_t=temp1+temp2;
        if(result_t==0)
        {
            res->next=new ListNode(0);
        }
        for(int i=0;result_t>0;i++)
        {
            uint sum = result_t % 10;
            result_t=result_t / 10;
            cur->next= new ListNode(sum);
            cur=cur->next;
           
            
        }
       
        return res->next;
        
        
    }
};
