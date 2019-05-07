#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node* retP(int n)
{
	node *tmp = new node;
    tmp->data = n;
    tmp->next = NULL;

}
node *temp3=new node;
node *temp4=new node;
node *temp5=new node;
class linked_list
{

public:
	node *head,*tail;
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
	
    void add_node(node* tmp)
    {
        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    
    void display(int d)
    {
    	node *temp2=new node;
    	temp2=head;
    	cout<<endl<<"The linked list"<<  d  <<"  is  "<<endl;
    	while(temp2!=NULL)
    	{
    		cout<<temp2->data<<"->";
    		temp2=temp2->next;
    	}
    	cout<<"NULL";
    }
    
};
linked_list c;
int main()
{
	linked_list a;
    linked_list b;
    
    
    	int p,q,n,i,j;
    	int k=-1;

	
	cout<<"Enter the boundary :"<<endl;
	cin>>n;
	cout<<"Enter the lowest multiples :"<<endl;
	cin>>p;
	cin>>q;
    for(i=p;i<=(n);i++)
    {
    
     if(i%p == 0)
		{
			node* flag = retP(i);
			a.add_node(flag);
		}

    }
    
     for(j=q;j<=(n);j++)
    {
    if (((j%p)==0) &&  ((j%q)==0))
    {
    temp3=a.head;
    while(temp3!=NULL)
    {
    	if(temp3->data==j)
    	{
    		node *flag3=retP(temp3->data); 
    		b.add_node(flag3);
    	}
    	temp3=temp3->next;
    }
    	
    }
     else if(j%q == 0)
		{
		node* flag2 = retP(j);
			b.add_node(flag2);
		}

    }
    temp4=a.head;
    temp5=b.head;
    while((temp4!=NULL)&&(temp5!=NULL))
    {
    	if((temp4->data)>(temp5->data))
    	{
    		node* flag5=retP(temp5->data);
    		c.add_node(flag5);
    		temp5=temp5->next;
    	}
    	else if((temp4->data)<(temp5->data))
    	{
    			node* flag6=retP(temp4->data);
    		c.add_node(flag6);
    		temp4=temp4->next;
    	}
    	else if((temp4->data)==(temp5->data))
    	{
    			node* flag7=retP(temp4->data);
    		c.add_node(flag7);
    		temp4=temp4->next;
    		temp5=temp5->next;
    	}
    	
    }
    while((temp4)!=NULL)
    {
    	node* flag8=retP(temp4->data);
    		c.add_node(flag8);
    		temp4=temp4->next;
    }
     while((temp5)!=NULL)
    {
    	node* flag9=retP(temp5->data);
    		c.add_node(flag9);
    		temp5=temp5->next;
    }
    a.display(1);
    b.display(2);
    c.display(3);
    return 0;
}
