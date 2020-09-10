int data;
Node *next;
Node *prev;
}
;
struct Node *lastNode(Node *root)
{
    while (root && root->next)
        root = root->next;
    return root;
}

void _quickSort(Node *l, Node *h)
{
    if (h != NULL && l != h && l != h->next)
    {
        struct Node *p = partition(l, h);
        _quickSort(l, p->prev);
        _quickSort(p->next, h);
    }
}

void quickSort(Node *head)
{
    // Find last Node
    struct Node *h = lastNode(head);

    // Call the recursive QuickSort
    _quickSort(head, h);
}
* /
    Node *partition(Node *l, Node *h)
{

    int x = h->data; // put last element of each partn as pivot
    Node *i = l;
    for (Node *j = l; j != h; j = j->next)
    {
        if (j->data <= x)
        {
            swap((i->data), (j->data));
            i = i->next; // im moving to next
        }
    }
    swap((i->data), (h->data)); // for 1 last swap
    return i;
}