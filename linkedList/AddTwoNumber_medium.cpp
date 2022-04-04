#include <iostream>
#include <math.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x)
    {
        this->val = x;
        this->next = NULL;
    }

    void insertAtHead(ListNode *&head, int d)
    {
        ListNode *temp = new ListNode(d);
        temp->next = head;
        head = temp;
    }

    void print(ListNode *&head)
    {
        ListNode *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = NULL;
        int ll1 = 0;
        int ll2 = 0;
        int count = 0;
        int count1 = 0;
        int final = 0;
        int final1 = 0;

        //         for l1
        while (l1 != NULL)
        {
            ll1 = (l1->val) * pow(10, count) + ll1;
            l1 = l1->next;
            count++;
        }

        cout << "ll1 is :" << ll1 << endl;

        //         for l2
        while (l2 != NULL)
        {
            ll2 = (l2->val) * pow(10, count) + ll2;
            l2 = l2->next;
            count1++;
        }

        cout << "ll2 is :" << ll2 << endl;

        final = ll1 + ll2;

        cout << final << endl;

        while (final != 0)
        {
            final1 = final % 10;
            ListNode *temp = new ListNode(final1);
            if (ans == NULL)
            {
                ans = temp;
            }
            else
            {
                ans->next = temp;
            }

            ans = temp;

            final = final / 10;
        }

        return ans;
    }
};

int main()
{

    ListNode *head = NULL;

    ListNode::insertAtHead(head, 3);
    ListNode::insertAtHead(head, 4);
    ListNode::insertAtHead(head, 2);

    ListNode::print(head);

    // addTwoNumbers(l1, l2);
    return 0;
}
