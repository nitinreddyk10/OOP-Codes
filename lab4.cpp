#include <bits/stdc++.h>
using namespace std;

class DLL{
	private:
	int data;
	DLL*prev;
	DLL*next;
	
	public:
	
	DLL*insert_d(DLL*head,int x)
	{
	      DLL*newnode = new DLL();
	      DLL*temp ;
	      newnode->data = x;
	      newnode->prev = NULL;
	      newnode->next = NULL;
	      if(head==NULL)
	      {
	      	head = newnode;
	      }
	      else
	      {
	      	if(newnode->data<=head->data)
	      	{
      		  newnode->next = head;
      		  head->prev = newnode;
      		   head = newnode;
	      	}
	      	else
	      	{
	           temp = head;
	          if(head->next==NULL)
	           {
	              head->next = newnode;
	              newnode->prev = head;  
	           }
	           else
	           {
	              while(temp->next!=NULL && temp->next->data<newnode->data)
	              {
	                 temp = temp->next;
	              }
	              if(temp->next==NULL)
	              {
	              	temp->next = newnode;
	              	newnode->prev = temp;
	              }
	              else
	              {
	              	temp->next = newnode;
	              	temp->next->prev = newnode;
	                newnode->prev = temp;
	                newnode->next = temp->next;
	              }
	           }
	      	}
	      }
	  return head;    
	}
	
	DLL* delete_d(DLL*head,int p)
	{
	   int i=1;
	   DLL*temp = head;
	   while(i!=p && temp!=	NULL)
	   {
	   	temp = temp->next;
	   	i++;
	   }
	   
	   if(temp->data == NULL)
	   cout<<"Memory not alloacted "<<endl;
	   else if(temp->data == head->data)
	   {
	       head = temp->next;
	       temp->prev = temp->next = NULL;
	       delete[] temp;
	   }
	   if(i==p)
	   {
	   	temp->prev->next=NULL;
		temp->prev=NULL;
		delete[] temp;
	   
	   
	   }
	   else
	   {
	   	temp->prev->next = temp->next;
	   	temp->next->prev = temp->prev;
	   	temp->prev = temp->next = NULL;
	   	delete [] temp;
	   }
	   return head;
	}
	
	void display(DLL*temp)
	{
		while(temp!= NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->next;
		}
	}
	
	DLL* merge(DLL*head,DLL*head1)
	{
		DLL*head2 = NULL;
	    DLL*temp = head,*temp1 = head1;
	    while(temp!=NULL && temp1!=NULL)
	    {
	    	if(temp->data<=temp1->data)
	    	{
	    		head2 = insert_d(head2,temp->data);
	    		temp = temp->next;
	    	}
	    	else if(temp->data>temp1->data)
	    	{
	    		head2 = insert_d(head2,temp1->data);
	    		temp1 = temp1->next;
	    	}
	    }
	    while(temp1!=NULL)
            {
                head2 = insert_d(head2,temp1->data);
                temp1 = temp1->next;
            }
            while(temp!=NULL)
            {
            head2 = insert_d(head2,temp->data);
                	temp = temp->next;
            }
            cout<<"List 1 elements are : "<<endl;
            display(head);
            cout<<endl;
    	    cout<<"List 2 elements are : "<<endl;
            display(head1);
            cout<<endl;
            cout<<"Merged elements are : "<<endl;
         return head2;   
	}
};

int main()
{
    int ch,ch1,data,p;
    DLL a;
    DLL *newnode,*head1=NULL,*head=NULL,*head2=NULL;
    while(1)
    {
    cout<<"1.Insert "<<endl;
    cout<<"2.Delete "<<endl;
    cout<<"3.Display "<<endl;
    cout<<"4.Merge "<<endl;
    cout<<"5.Exit "<<endl;

    cout<<"enter ur choice : ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            cout<<"1.to insert list 1 or 2.insert in list 2"<<endl;
            cin>>ch1;
            if(ch1==1)
            {
                cout<<"enter the data to be inserted : ";
                cin>>data;
                head =a.insert_d(head,data);
            }
            else if(ch1==2)
            {
                cout<<"enter the data to be inserted : ";
                cin>>data;
                head1 =a.insert_d(head1,data);
            }
            else
            {
            	cout<<"enter only 1 or 2 to insert"<<endl;
            }
            break;
        }

        case 2:
        {
            cout<<"1.to delete in list 1 or 2.delete in list 2"<<endl;
            cin>>ch1;
            if(ch1==1)
            {
            cout<<"enter position to delete : ";
            cin>>p;
            a.delete_d(head,p);
            }
            else if(ch1==2)
            {
            cout<<"enter position to delete : ";
            cin>>p;
            a.delete_d(head1,p);
            }
            else
            {
            	cout<<"enter only 1 or 2 to delete "<<endl;
            }
            break; 
        }

        case 3:
        {
            cout<<"List 1 elements are : "<<endl;
            a.display(head);
            cout<<endl;
            cout<<"List 2 elements are : "<<endl;
            a.display(head1);
            cout<<endl;
            break;
        }

        case 4:
        {
            head2 = a.merge(head,head1);
            a.display(head2);
            cout<<endl;
            break;
        }

        case 5:
        {
            exit(0);
        }
        default:
        {
            cout<<"enter correct option "<<endl;
            break;
        }
      }
      }
      return 0;
}