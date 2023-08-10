#include<bits/std++>
class node
{ public:
node *left;
node *right;
node(int d )
{
  data =d;
  left=NULL;
  right=NULL;
  
  
}

};
int insertbst(node *root,data)
{
  if(root==NULL)
  {
    root=new node(data);
    return root;
  }
  else if(data<=root->data)
  {
    root->left=insertbst(root->left,data);
    return root;
    
  }
  else(data<=root->data)
  {
    root->right=insertbst(root->right,data);
    return root;
    
  }
}

void preorder(node *root)
{
   if(root!=NULL)
   {
      cout<<root->data<<" ";
      preorder(root->left);
      preorder(root->right);

   }
}

void inorder(node *root)
{
   if(root!=NULL)
   {
      inorder(root->left);
      cout<<root->data<<" ";
      
      inorder(root->right);

   }
}


void postorder(node *root)
{

   if(root!=NULL)
   {
      
      
      postorder(root->left);
      postorder(root->right);
      cout<<root->data<<" ";
   }

}

int main()
{
  


node *root=NULL; //let tree empty

int data;

cout<<"\nEnter data for node ";
cin>>data;

while(data!=-1)
{
root=insertbst(root,data);   
cout<<"\nEnter data ";
cin>>data;
}
preorder(root);
inorder(root);
  postorder(root);
  


}
