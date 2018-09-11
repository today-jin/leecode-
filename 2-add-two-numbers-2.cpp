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
        ListNode* res=new ListNode(-1);
        ListNode* cur= res;
        int i=0;
        //cout<<l1->val<<endl;
        while(l1 || l2)
        {
            int var1 = l1 ? l1->val:0;
            int var2 = l2 ? l2->val:0; 
            int temp =var1+var2+i;
            //cout<< temp<<endl;
            if(temp>=10)
            {
               
                cur->next = new ListNode(temp-10); 
                i=1;
            }
            else{
                cur->next = new ListNode(temp);
                i=0;
            }
            cur=cur->next;
            if(l1)
            {
                l1=l1->next;
            }
            if(l2)
            {
                l2=l2->next;
            }
            //cout<<i<<endl;
            
            
        }
        if(i==1)
        {
            cur->next = new ListNode(1);
        }
        
       
        return res->next;
        
        
    }
};
