#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *link;
};
node* newNode(node* last,int data)
{
    node *ptr=new node;
    ptr->data=data;
    ptr->link=NULL;
    if(last)
        last->link=ptr;
    last=ptr;
    return last;
}

int main()
{
    int t,n,k;
    node *last,*head;
    cin>>t;
    while(t--)
    {
        last=NULL;
        cin>>n;
        for(int i=0;i<n;++i)
        {
            cin>>k;
            last=newNode(last,k);
            if(i==0)
                head=last;
        }
        node *prev,*odd,*newlast;
        odd=head;
        prev=NULL;
        newlast=last;
        int i=0;
        while(odd!=last)
        {
           // cout<<"(*"<<i++<<")";
            if((odd->data)%2!=0)
            {
                newlast->link=odd;
                if(prev)
                {
                    prev->link=odd->link;
                    odd->link=NULL;
                    newlast=odd;
                    odd=prev->link;

                }
                else
                {
                    head=odd->link;
                    odd->link=NULL;
                    newlast=odd;
                    odd=head;
                }
            }
            else
            {
                prev=odd;
                odd=odd->link;
            }

        }
        if((odd->data)%2!=0)
            {
                newlast->link=odd;
                if(prev)
                {
                    prev->link=odd->link;
                    odd->link=NULL;
                    newlast=odd;
                    odd=prev->link;

                }
                else
                {
                    head=odd->link;
                    odd->link=NULL;
                    newlast=odd;
                    odd=head;
                }
            }
        node *ptr=head;
        while(ptr)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->link;
        }
        cout<<"\n";
    }
return 0;
}
