#include<iostream>
using namespace std;

class Node
{
public:
    int data{0};
    Node *next = NULL;
};

class Queue
{
private:
    Node *f = NULL;
    Node *r = NULL;
    Node *p = NULL;
public:
    void Create()
    {
        f = NULL;
        r = NULL;
        p = NULL;
        cout << "Enter number of elements : ";
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            Node *p = new Node;
            cin >> p->data;
            if(r == NULL)
            {
                f = r = p;
            }
            r->next = p;
            r = r->next;
        }
    }
    void Enqueue()
    {
        Node *p = new Node;
        cout << "Enter value : " ;
        cin >> p->data;
        if(r == NULL)
        {
            f = r = p;
        }
        r->next = p;
        r = r->next;
    }
    void Dequeue()
    {
        if (f == NULL) {
            cout << "Empty List\n";
            return;
        }
        f = f->next;
        if (f == NULL) {
            r = NULL;
        }
    }
    void dis()
    {
        Node *trv = f;
        if (trv == NULL) {
            cout << "Empty List\n";
            return;
        }
        while (trv != NULL) {
            cout << trv->data << " ";
            trv = trv->next;
        }
        cout << endl;
    }

};

int main()
{
    Queue q;
    while (1) {
        cout << "1. Create\n";
        cout << "2. Enqueue\n";
        cout << "3. Dequeue\n";
        cout << "4. Display\n";
        cout << "Enter option : ";
        int sel; cin >> sel;
        switch (sel) {
            case 1:
                q.Create();
                break;
            case 2:
                q.Enqueue();
                break;
            case 3:
                q.Dequeue();
                break;
            case 4:
                q.dis();
                break;
            default :
                cout << "Invalid choice\n";
                break;
        }
    }
}
