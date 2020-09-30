#include<bits/stdc++.h>
using namespace std;

struct node
{

    node *prev;
    int data;
    node *Next;

};
node *first = nullptr;
node *last = nullptr;

void create()
{
    cout<<"ADD DATA: ";
    int x;
    cin>>x;
    int i;
    first = new node;
    first->data = x;
    first->Next = nullptr;
    first->prev = nullptr;
    last=first;
    cout<<"\n"<<"ADD MORE DATA?(y/n): ";
    char ch;
    cin>>ch;
    while(ch!='n')
    {
        node *t = new node;
        cin>>t->data;
        t->Next = nullptr;
        t->prev = last;
        last->Next = t;
        last = t;
        cout<<"\n"<<"ADD MORE DATA?(y/n): ";

        cin>>ch;

    }
}

void displayf(node *p)
{
    while(p!=nullptr)
    {
        cout<<p->data;
        p = p->Next;
    }
}
void displayb(node *p)
{
    while(p!=nullptr)
    {
        cout<<p->data;
        p = p->prev;
    }
}
int main()
{
    create();
    cout<<"Normal Display: ";displayf(first);
    cout<<"\n";
    cout<<"Reverse Display: ";
    displayb(last);
}
