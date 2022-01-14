#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>

using namespace std;





class Node {
public:
	string data;
	Node* next;
};
	Node* head;
	int countnode();
	
	
	
	
void home();
void menu();
void startmenu();
void printList(Node* n);



void insertFirst(Node** NODE , string newURL );
void deleteFirst(Node** NODE);
void insertLast(Node ** NODE,string newURL);
void deleteLast(Node* NODE);
void insertAfter(string data, int n) ;
void deleteAfter(int index);
int search(string item);
void display();

	
	
	
	
void home(){
	cout<<"\n *************Welcome To My Assignment******************\n"<<endl;
	cout<<"Assignment II"<<endl;
	cout<<"Submitted By: Abish Neupane"<<endl;
	cout<<"Submitted To: University:"<<endl;
	cout<<"Enter Any key to continue..."<<endl;
	cout<<"\n**************Thanks For Using this System****************\n"<<endl;
	getch();
}





int main(){
	
	home();
	system("cls");
	startmenu();
	return 0;	
}





void startmenu(){
	
	insertFirst(&head,"www.youtube.com");
	insertFirst(&head,"www.facebook.com");
	insertFirst(&head,"www.google.com");
	int itr=1,index;
	string readURL;
	int choice;
	while(itr==1){
		menu();
	scanf("%d",&choice);
	if(choice==1){
cout<<endl<<"Enter URL to insert on the Linked List"<<endl;
cin>>readURL;
	insertFirst(&head,readURL);
	
	}
	else if(choice==2){
		deleteFirst(&head);
	}
	
	else if(choice==3){
		cout<<endl<<"Enter URL to insert at Last on the Linked List"<<endl;
cin>>readURL;
	
		insertLast(&head,readURL);
	}
	else if(choice==4){
		deleteLast(head);
	}
	else if(choice==5){
		cout<<endl<<"Enter the UrL you want to insert(Eg. 1 or 2 or 3 or 4)"<<endl;
		cin>>readURL;
		cout<<endl<<"Enter the index at which you want to insert this value"<<endl;
		cin>>index;
		insertAfter(readURL,index);
	}
	else if(choice==6){
		cout<<endl<<"Enter an index at which you want to Delete the node value"<<endl;
		cin>>index;
		deleteAfter(index);
	}
	
	
	else if(choice==7){
		
		string urlsearch;
cout<<"\n Enter a URL to Search on the linked list??\n ";
cin>>urlsearch;
int indexsearch=search(urlsearch);
if(indexsearch<0){
	cout<<"\n Element not found"<<endl;
}
else{
	cout<<"The URL you entered found!!"<<endl;
	cout<< "The URL Index="<<indexsearch;
}

	}
	else if(choice==8){
		
 printList(head);

	}
	else if(choice==9){
		exit(1);
	}
	else{
		
		cout<<"Eneter the valid option from the list!!!"<<endl;
		break;
	}
	getch();
	system("cls");
	printf("Would you like to Choose another option?? press 1 for Continue or press Any key to Exit\n");
	cin>>itr;
	}
	
}








void menu(){
	cout<<"**********************************************"<<endl;
	cout<<"Select One of the following option"<<endl;
	cout<<"1:- Insert URL at begining in The Link List"<<endl;
	cout<<"2:- Delete the URL at begin of the linked list "<<endl;
	cout<<"3:- Insert At Last "<<endl;
	cout<<"4:- Delete at Last"<<endl;
	cout<<"5:- Insert After"<<endl;
	cout<<"6:- Delete by index"<<endl;
	cout<<"7:- Search "<<endl;
	cout<<"8:- Display the complete linked list"<<endl;
	cout<<"9:- Exit!"<<endl;
	cout<<"**********************************************"<<endl;
	
	
}






int countnode(){
	Node* temp = head;
      int i = 0;
      while(temp != NULL) {
        i++;
        temp = temp->next;
      }
      return i; 
}








void insertFirst(Node** HEAD, string newURL){
	
Node* new_node=new Node();
   
    new_node->data = newURL; 

    new_node->next = (*HEAD); 

    (*HEAD) = new_node; 
    cout<<endl<<"Node Inserted Successfully!!"<<endl;
     cout<<endl<<"Enter any key to continue..!!"<<endl;
     getch();
     
}










void deleteFirst(Node** HEAD){
	 if((*HEAD )== NULL) {
        cout<<"\nCan not be deleted due to insufficient data on the node\n";
    }

    
	Node *tmp=new Node();
	
	tmp->next = (*HEAD)->next;
    delete *HEAD;
    *HEAD = tmp->next;
    cout<<endl<<"Deleted First Node Successfully!!"<<endl;
    cout<<endl<<"Press any key to Continue!! "<<endl;
    getch();
}








void insertLast(Node** END,string newURL){
	
   
    Node* new_node = new Node(); 
  
   
    Node *last = *END; 
  
   
    new_node->data = newURL;  
  
    new_node->next = NULL;  
  
    if (*END == NULL)  
    {  
        *END = new_node;  
        return;  
    }  
   
    while (last->next != NULL)
    {
        last = last->next;  
    }
  
    last->next = new_node;  
    return; 
    cout<<endl<<"Inserted Node at Last Successfully"<<endl;
    cout<<endl<<"Press any key to continue!!"<<endl;
    getch();
}












void deleteLast(Node* head){
if(head != NULL) {
        if(head->next == NULL) {
          head = NULL;
        } else {
          Node* temp = head;
          while(temp->next->next != NULL)
            temp = temp->next;
          Node* lastNode = temp->next;
          temp->next = NULL;
          //free(lastNode); 
          delete lastNode;
        }
        cout<<endl<<"Node deleted Successfully!!"<<endl;
      cout<<endl<<"Press any key to continue!!"<<endl;
      getch();
      }
      
}











void insertAfter(string data, int n)  
{
  	Node* temp1=new Node();
	temp1->data=data;
	temp1->next=NULL;
	
	if(n==1){
		temp1->next=head;
		head=temp1;
		return;
	}
	Node* temp2=head;
	for(int i=0;i<n-2;i++){
		temp2=temp2->next; 
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
	cout<<endl<<"Inserted After  given index The node successfully!!"<<endl;
	cout<<endl<<"Press any key to continue!!"<<endl;
	getch();
} 













void deleteAfter(int n){
	Node * temp1=head;
	if(n==1){
		head=temp1->next;
	}
	int i;
	for(i=0;i<n-2;i++){
		temp1=temp1->next;
		
	}
	Node * temp2=temp1->next;
	temp1->next=temp2->next;
	delete temp2;
	cout<<endl<<"Deleted The node successfully!!"<<endl;
	cout<<endl<<"Press any key to continue!!"<<endl;
	getch();
	
}











int search(string item ) //function to search element in the linked list 
{  
int n=countnode();
 Node *tmp;  
    int i=0,flag;  
    tmp = head;   
    if(head == NULL)  
    {  
    return -1;
        cout<<"\nEmpty List\n";  
    }  
    else  
    {   
        while (tmp!=NULL)  
        {  
        //int compare = s1.compare(s2);
       int c=tmp->data.compare(item);
            if(c==0)  //If element is present in the list
            {  
            return i+1;
            //break;
                cout<<"Item found at location: "<<(i+1); flag=0; } else { flag++; } i++; tmp = tmp->next;  
        }  
        if(flag==n) //If element is not present in the list
        {  
            cout<<"Item not found\n";  
            return -1;
        }  
    } 
	//return 0; 

}
















void display()
{
	
	Node* n;
	n=head;
	
	cout<<endl<<"The URLs in the Linkeed List are:"<<endl;
	while (n != NULL) {
		cout<<endl;
		cout << n->data ;
		n = n->next;
	}
	return ;
}


void printList(Node* n)
{
	while (n != NULL) {
		cout<<endl;
		cout << n->data ;
		n = n->next;
	}
}



