#include <iostream>
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
        ListNode *ans = new ListNode();
        ListNode *temp = ans;
        int carry = 0;

        while (l1 != NULL || l2 != NULL)
        {
            int sum = 0;
            if (l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry;

            carry = sum / 10;

            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        if (carry > 0)
        {
            temp->next = new ListNode(carry);
            temp = temp->next;
        }

        return ans->next;
    }
};

int main()
{

    return 0;
}